#ifndef QEMU_SHADER_H
#define QEMU_SHADER_H

#include <epoxy/gl.h>

typedef struct QemuGLShader {
    GLint texture_blit_prog;
    GLint texture_blit_flip_prog;
    GLint texture_blit_vao;
}QemuGLShader;

void qemu_gl_run_texture_blit(QemuGLShader *gls, bool flip);

QemuGLShader *qemu_gl_init_shader(void);
void qemu_gl_fini_shader(QemuGLShader *gls);

#endif /* QEMU_SHADER_H */
