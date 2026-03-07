char *__fastcall VIDMM_DEVICE_PAGING_QUEUE::`vector deleting destructor'(VIDMM_DEVICE_PAGING_QUEUE *this)
{
  char *v1; // rbx

  v1 = (char *)this - 8;
  `vector destructor iterator'(
    this,
    0xB0uLL,
    *((_QWORD *)this - 1),
    (void (*)(void *))VIDMM_DEVICE_PAGING_QUEUE::~VIDMM_DEVICE_PAGING_QUEUE);
  if ( v1 )
    ExFreePoolWithTag(v1, 0);
  return v1;
}
