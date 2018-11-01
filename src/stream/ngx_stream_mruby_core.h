/*
// ngx_stream_mruby_core.h - ngx_mruby mruby module header
//
// See Copyright Notice in ngx_http_mruby_module.c
*/

#ifndef NGX_STREAM_MRUBY_CORE_H
#define NGX_STREAM_MRUBY_CORE_H

#include <ngx_config.h>
#include <ngx_stream.h>

#include <mruby.h>

void ngx_stream_mrb_core_class_init(mrb_state *mrb, struct RClass *class);

#endif // NGX_STREAM_MRUBY_CORE_H
