#ifndef _SRP_ALP_ERROR_H_
#define _SRP_ALP_ERROR_H_

enum {
	SRP_RETURN_OK = 0,

	SRP_ERROR_OPEN_FAIL = -1000,
	SRP_ERROR_ALREADY_OPEN = -1001,
	SRP_ERROR_NOT_READY = -1002,

	SRP_ERROR_IBUF_OVERFLOW = -2000,
	SRP_ERROR_IBUF_INFO = -2001,

	SRP_ERROR_OBUF_READ = -3000,
	SRP_ERROR_OBUF_INFO = -3001,
	SRP_ERROR_OBUF_MMAP = -3002,

	SRP_ERROR_INVALID_SETTING = -4000,
	SRP_ERROR_GETINFO_FAIL = -4001
} SRP_ERRORTYPE;

#endif /* _SRP_ALP_ERROR_H_ */
