#ifndef _LIBRADOS_H_

struct rados_conn_t {
    librados::Rados* cluster_;
    librados::IoCtx* io_ctx_;
};

#endif
