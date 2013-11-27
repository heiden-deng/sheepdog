
#include "sheep_priv.h"
#include "http.h"

struct head_descriptor {
	uint64_t used;
	uint64_t nr_free;
};

struct free_descriptor {
	uint64_t start;
	uint64_t count;
};

int oalloc_new_prepare(uint32_t vdi, uint64_t *start, uint64_t count)
{
	return 0;
}

int oalloc_new_finish(uint32_t vdi, uint64_t start, uint64_t count)
{
	return 0;
}

void oalloc_free(uint32_t vdi, uint64_t start, uint64_t count)
{

}

static int read_free_descriptors(uint32_t vdi)
{
	return 0;
}

static int write_free_descriptors(uint32_t vdi, void *descs)
{
	return 0;
}
