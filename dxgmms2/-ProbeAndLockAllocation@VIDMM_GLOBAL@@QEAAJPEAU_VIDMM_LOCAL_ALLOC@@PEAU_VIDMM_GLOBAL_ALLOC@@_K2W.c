__int64 __fastcall VIDMM_GLOBAL::ProbeAndLockAllocation(
        union _LARGE_INTEGER **this,
        struct _VIDMM_LOCAL_ALLOC *a2,
        struct _VIDMM_GLOBAL_ALLOC *a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        enum _LOCK_OPERATION a6,
        struct VIDMM_SEGMENT *a7,
        unsigned __int8 a8)
{
  struct _VIDMM_MDL *v11; // rax
  unsigned int v12; // ebx
  _BYTE v14[40]; // [rsp+40h] [rbp-28h] BYREF

  VIDMM_WORKER_THREAD_PAGING_TIME_ACCUMULATOR::VIDMM_WORKER_THREAD_PAGING_TIME_ACCUMULATOR(
    (VIDMM_WORKER_THREAD_PAGING_TIME_ACCUMULATOR *)v14,
    *this + 38,
    (unsigned int *)&(*this)[44].HighPart,
    KeGetCurrentThread() == (struct _KTHREAD *)(*this)[1].QuadPart);
  if ( *((_QWORD *)a2 + 3) )
  {
    v12 = (*(__int64 (__fastcall **)(_QWORD, struct _VIDMM_GLOBAL_ALLOC *, unsigned __int64, unsigned __int64, int, struct VIDMM_SEGMENT *, unsigned __int8))(**(_QWORD **)(*((_QWORD *)a2 + 1) + 24LL) + 32LL))(
            *(_QWORD *)(*((_QWORD *)a2 + 1) + 24LL),
            a3,
            a4,
            a5,
            2,
            a7,
            a8);
  }
  else
  {
    v11 = VidMmiProbeAndLockAllocation(
            a3,
            a4,
            a5,
            (enum _LOCK_OPERATION)(~(unsigned __int8)(*((_DWORD *)a3 + 17) >> 11) & 2),
            a7,
            a2);
    if ( v11 )
    {
      if ( a8 )
        *((_QWORD *)a2 + 11) = v11;
      else
        *((_QWORD *)a2 + 10) = v11;
      v12 = 0;
    }
    else
    {
      v12 = -1071775487;
    }
  }
  VIDMM_WORKER_THREAD_PAGING_TIME_ACCUMULATOR::~VIDMM_WORKER_THREAD_PAGING_TIME_ACCUMULATOR((VIDMM_WORKER_THREAD_PAGING_TIME_ACCUMULATOR *)v14);
  return v12;
}
