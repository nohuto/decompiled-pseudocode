void __fastcall VIDMM_WORKER_THREAD_PAGING_TIME_ACCUMULATOR::~VIDMM_WORKER_THREAD_PAGING_TIME_ACCUMULATOR(
        VIDMM_WORKER_THREAD_PAGING_TIME_ACCUMULATOR *this)
{
  if ( *((_BYTE *)this + 16) )
    **((_QWORD **)this + 1) += *(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)this;
}
