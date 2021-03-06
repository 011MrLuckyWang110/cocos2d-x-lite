/****************************************************************************
 Copyright (c) 2017-2018 Xiamen Yaji Software Co., Ltd.

 http://www.cocos.com

 Permission is hereby granted, free of charge, to any person obtaining a copy
 of this software and associated engine source code (the "Software"), a limited,
 worldwide, royalty-free, non-assignable, revocable and non-exclusive license
 to use Cocos Creator solely to develop games on your target platforms. You shall
 not use Cocos Creator software for developing other software or tools that's
 used for developing games. You are not granted to publish, distribute,
 sublicense, and/or sell copies of Cocos Creator.

 The software or tools in this License Agreement are licensed, not sold.
 Xiamen Yaji Software Co., Ltd. reserves all rights not expressly granted to you.

 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 THE SOFTWARE.
 ****************************************************************************/

#include "jsb_opengl_registration.hpp"
#include "cocos/scripting/js-bindings/jswrapper/SeApi.h"
#include "cocos/scripting/js-bindings/manual/jsb_conversions.hpp"
#include "cocos/scripting/js-bindings/manual/jsb_global.h"
#include "scripting/js-bindings/manual/jsb_opengl_functions.hpp"
#include "scripting/js-bindings/manual/jsb_opengl_node.hpp"
#include "scripting/js-bindings/manual/jsb_opengl_manual.hpp"

bool JSB_register_opengl(se::Object* obj)
{
    js_register_cocos2dx_GLNode(__ccObj);

    // New WebGL functions, not present on OpenGL ES 2.0
    __glObj->defineFunction("getSupportedExtensions", _SE(JSB_glGetSupportedExtensions));
    __glObj->defineFunction("activeTexture", _SE(JSB_glActiveTexture));
    __glObj->defineFunction("_attachShader", _SE(JSB_glAttachShader));
    __glObj->defineFunction("_bindAttribLocation", _SE(JSB_glBindAttribLocation));
    __glObj->defineFunction("_bindBuffer", _SE(JSB_glBindBuffer));
    __glObj->defineFunction("_bindFramebuffer", _SE(JSB_glBindFramebuffer));
    __glObj->defineFunction("_bindRenderbuffer", _SE(JSB_glBindRenderbuffer));
    __glObj->defineFunction("_bindTexture", _SE(JSB_glBindTexture));
    __glObj->defineFunction("blendColor", _SE(JSB_glBlendColor));
    __glObj->defineFunction("blendEquation", _SE(JSB_glBlendEquation));
    __glObj->defineFunction("blendEquationSeparate", _SE(JSB_glBlendEquationSeparate));
    __glObj->defineFunction("blendFunc", _SE(JSB_glBlendFunc));
    __glObj->defineFunction("blendFuncSeparate", _SE(JSB_glBlendFuncSeparate));
    __glObj->defineFunction("bufferData", _SE(JSB_glBufferData));
    __glObj->defineFunction("bufferSubData", _SE(JSB_glBufferSubData));
    __glObj->defineFunction("checkFramebufferStatus", _SE(JSB_glCheckFramebufferStatus));
    __glObj->defineFunction("clear", _SE(JSB_glClear));
    __glObj->defineFunction("clearColor", _SE(JSB_glClearColor));
    __glObj->defineFunction("clearDepthf", _SE(JSB_glClearDepthf));
    __glObj->defineFunction("clearStencil", _SE(JSB_glClearStencil));
    __glObj->defineFunction("colorMask", _SE(JSB_glColorMask));
    __glObj->defineFunction("_compileShader", _SE(JSB_glCompileShader));
    __glObj->defineFunction("compressedTexImage2D", _SE(JSB_glCompressedTexImage2D));
    __glObj->defineFunction("compressedTexSubImage2D", _SE(JSB_glCompressedTexSubImage2D));
    __glObj->defineFunction("copyTexImage2D", _SE(JSB_glCopyTexImage2D));
    __glObj->defineFunction("copyTexSubImage2D", _SE(JSB_glCopyTexSubImage2D));
    __glObj->defineFunction("_createProgram", _SE(JSB_glCreateProgram));
    __glObj->defineFunction("_createShader", _SE(JSB_glCreateShader));
    __glObj->defineFunction("cullFace", _SE(JSB_glCullFace));
    __glObj->defineFunction("_deleteBuffer", _SE(JSB_glDeleteBuffers));
    __glObj->defineFunction("_deleteFramebuffer", _SE(JSB_glDeleteFramebuffers));
    __glObj->defineFunction("_deleteProgram", _SE(JSB_glDeleteProgram));
    __glObj->defineFunction("_deleteRenderbuffer", _SE(JSB_glDeleteRenderbuffers));
    __glObj->defineFunction("_deleteShader", _SE(JSB_glDeleteShader));
    __glObj->defineFunction("_deleteTexture", _SE(JSB_glDeleteTextures));
    __glObj->defineFunction("depthFunc", _SE(JSB_glDepthFunc));
    __glObj->defineFunction("depthMask", _SE(JSB_glDepthMask));
    __glObj->defineFunction("depthRangef", _SE(JSB_glDepthRangef));
    __glObj->defineFunction("detachShader", _SE(JSB_glDetachShader));
    __glObj->defineFunction("disable", _SE(JSB_glDisable));
    __glObj->defineFunction("disableVertexAttribArray", _SE(JSB_glDisableVertexAttribArray));
    __glObj->defineFunction("drawArrays", _SE(JSB_glDrawArrays));
    __glObj->defineFunction("drawElements", _SE(JSB_glDrawElements));
    __glObj->defineFunction("enable", _SE(JSB_glEnable));
    __glObj->defineFunction("enableVertexAttribArray", _SE(JSB_glEnableVertexAttribArray));
    __glObj->defineFunction("finish", _SE(JSB_glFinish));
    __glObj->defineFunction("flush", _SE(JSB_glFlush));
    __glObj->defineFunction("framebufferRenderbuffer", _SE(JSB_glFramebufferRenderbuffer));
    __glObj->defineFunction("framebufferTexture2D", _SE(JSB_glFramebufferTexture2D));
    __glObj->defineFunction("frontFace", _SE(JSB_glFrontFace));
    __glObj->defineFunction("_createBuffer", _SE(JSB_glGenBuffers));
    __glObj->defineFunction("_createFramebuffer", _SE(JSB_glGenFramebuffers));
    __glObj->defineFunction("_createRenderbuffer", _SE(JSB_glGenRenderbuffers));
    __glObj->defineFunction("_createTexture", _SE(JSB_glGenTextures));
    __glObj->defineFunction("generateMipmap", _SE(JSB_glGenerateMipmap));
    __glObj->defineFunction("_getActiveAttrib", _SE(JSB_glGetActiveAttrib));
    __glObj->defineFunction("_getActiveUniform", _SE(JSB_glGetActiveUniform));
    __glObj->defineFunction("_getAttachedShaders", _SE(JSB_glGetAttachedShaders));
    __glObj->defineFunction("_getAttribLocation", _SE(JSB_glGetAttribLocation));
    __glObj->defineFunction("getError", _SE(JSB_glGetError));
    __glObj->defineFunction("_getProgramInfoLog", _SE(JSB_glGetProgramInfoLog));
    __glObj->defineFunction("_getProgramParameter", _SE(JSB_glGetProgramiv));
    __glObj->defineFunction("_getShaderInfoLog", _SE(JSB_glGetShaderInfoLog));
    __glObj->defineFunction("_getShaderSource", _SE(JSB_glGetShaderSource));
    __glObj->defineFunction("_getShaderParameter", _SE(JSB_glGetShaderiv));
    __glObj->defineFunction("getTexParameter", _SE(JSB_glGetTexParameterfv));
    __glObj->defineFunction("_getUniformLocation", _SE(JSB_glGetUniformLocation));
    __glObj->defineFunction("_getUniform", _SE(JSB_glGetUniformfv));
    __glObj->defineFunction("hint", _SE(JSB_glHint));
    __glObj->defineFunction("isBuffer", _SE(JSB_glIsBuffer));
    __glObj->defineFunction("isEnabled", _SE(JSB_glIsEnabled));
    __glObj->defineFunction("isFramebuffer", _SE(JSB_glIsFramebuffer));
    __glObj->defineFunction("isProgram", _SE(JSB_glIsProgram));
    __glObj->defineFunction("isRenderbuffer", _SE(JSB_glIsRenderbuffer));
    __glObj->defineFunction("isShader", _SE(JSB_glIsShader));
    __glObj->defineFunction("isTexture", _SE(JSB_glIsTexture));
    __glObj->defineFunction("lineWidth", _SE(JSB_glLineWidth));
    __glObj->defineFunction("_linkProgram", _SE(JSB_glLinkProgram));
    __glObj->defineFunction("pixelStorei", _SE(JSB_glPixelStorei));
    __glObj->defineFunction("polygonOffset", _SE(JSB_glPolygonOffset));
    __glObj->defineFunction("readPixels", _SE(JSB_glReadPixels));
    __glObj->defineFunction("releaseShaderCompiler", _SE(JSB_glReleaseShaderCompiler));
    __glObj->defineFunction("renderbufferStorage", _SE(JSB_glRenderbufferStorage));
    __glObj->defineFunction("sampleCoverage", _SE(JSB_glSampleCoverage));
    __glObj->defineFunction("scissor", _SE(JSB_glScissor));
    __glObj->defineFunction("_shaderSource", _SE(JSB_glShaderSource));
    __glObj->defineFunction("stencilFunc", _SE(JSB_glStencilFunc));
    __glObj->defineFunction("stencilFuncSeparate", _SE(JSB_glStencilFuncSeparate));
    __glObj->defineFunction("stencilMask", _SE(JSB_glStencilMask));
    __glObj->defineFunction("stencilMaskSeparate", _SE(JSB_glStencilMaskSeparate));
    __glObj->defineFunction("stencilOp", _SE(JSB_glStencilOp));
    __glObj->defineFunction("stencilOpSeparate", _SE(JSB_glStencilOpSeparate));
    __glObj->defineFunction("_texImage2D", _SE(JSB_glTexImage2D));
    __glObj->defineFunction("texParameterf", _SE(JSB_glTexParameterf));
    __glObj->defineFunction("texParameteri", _SE(JSB_glTexParameteri));
    __glObj->defineFunction("_texSubImage2D", _SE(JSB_glTexSubImage2D));
    __glObj->defineFunction("uniform1f", _SE(JSB_glUniform1f));
    __glObj->defineFunction("uniform1fv", _SE(JSB_glUniform1fv));
    __glObj->defineFunction("uniform1i", _SE(JSB_glUniform1i));
    __glObj->defineFunction("uniform1iv", _SE(JSB_glUniform1iv));
    __glObj->defineFunction("uniform2f", _SE(JSB_glUniform2f));
    __glObj->defineFunction("uniform2fv", _SE(JSB_glUniform2fv));
    __glObj->defineFunction("uniform2i", _SE(JSB_glUniform2i));
    __glObj->defineFunction("uniform2iv", _SE(JSB_glUniform2iv));
    __glObj->defineFunction("uniform3f", _SE(JSB_glUniform3f));
    __glObj->defineFunction("uniform3fv", _SE(JSB_glUniform3fv));
    __glObj->defineFunction("uniform3i", _SE(JSB_glUniform3i));
    __glObj->defineFunction("uniform3iv", _SE(JSB_glUniform3iv));
    __glObj->defineFunction("uniform4f", _SE(JSB_glUniform4f));
    __glObj->defineFunction("uniform4fv", _SE(JSB_glUniform4fv));
    __glObj->defineFunction("uniform4i", _SE(JSB_glUniform4i));
    __glObj->defineFunction("uniform4iv", _SE(JSB_glUniform4iv));
    __glObj->defineFunction("uniformMatrix2fv", _SE(JSB_glUniformMatrix2fv));
    __glObj->defineFunction("uniformMatrix3fv", _SE(JSB_glUniformMatrix3fv));
    __glObj->defineFunction("uniformMatrix4fv", _SE(JSB_glUniformMatrix4fv));
    __glObj->defineFunction("_useProgram", _SE(JSB_glUseProgram));
    __glObj->defineFunction("_validateProgram", _SE(JSB_glValidateProgram));
    __glObj->defineFunction("vertexAttrib1f", _SE(JSB_glVertexAttrib1f));
    __glObj->defineFunction("vertexAttrib1fv", _SE(JSB_glVertexAttrib1fv));
    __glObj->defineFunction("vertexAttrib2f", _SE(JSB_glVertexAttrib2f));
    __glObj->defineFunction("vertexAttrib2fv", _SE(JSB_glVertexAttrib2fv));
    __glObj->defineFunction("vertexAttrib3f", _SE(JSB_glVertexAttrib3f));
    __glObj->defineFunction("vertexAttrib3fv", _SE(JSB_glVertexAttrib3fv));
    __glObj->defineFunction("vertexAttrib4f", _SE(JSB_glVertexAttrib4f));
    __glObj->defineFunction("vertexAttrib4fv", _SE(JSB_glVertexAttrib4fv));
    __glObj->defineFunction("vertexAttribPointer", _SE(JSB_glVertexAttribPointer));
    __glObj->defineFunction("viewport", _SE(JSB_glViewport));

    return true;
    
}

