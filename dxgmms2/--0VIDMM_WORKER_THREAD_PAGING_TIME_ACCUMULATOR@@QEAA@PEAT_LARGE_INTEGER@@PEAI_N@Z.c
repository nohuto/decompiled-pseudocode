VIDMM_WORKER_THREAD_PAGING_TIME_ACCUMULATOR *__fastcall VIDMM_WORKER_THREAD_PAGING_TIME_ACCUMULATOR::VIDMM_WORKER_THREAD_PAGING_TIME_ACCUMULATOR(
        VIDMM_WORKER_THREAD_PAGING_TIME_ACCUMULATOR *this,
        union _LARGE_INTEGER *a2,
        unsigned int *a3,
        char a4)
{
  *((_QWORD *)this + 1) = a2;
  *((_BYTE *)this + 16) = a4;
  if ( a4 )
  {
    *(LARGE_INTEGER *)this = KeQueryPerformanceCounter(0LL);
    ++*a3;
  }
  return this;
}
