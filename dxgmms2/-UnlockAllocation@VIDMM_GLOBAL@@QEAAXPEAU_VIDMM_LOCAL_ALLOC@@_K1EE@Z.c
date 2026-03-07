void __fastcall VIDMM_GLOBAL::UnlockAllocation(
        VIDMM_GLOBAL *this,
        struct _VIDMM_LOCAL_ALLOC *a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        char a5,
        char a6)
{
  __int64 v7; // rsi
  bool v11; // zf
  _QWORD *v12; // rbp
  bool v13; // r15
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER v15; // rbx
  __int64 v16; // rsi
  int v17; // eax
  __int64 v18; // rdx
  LARGE_INTEGER v19[2]; // [rsp+30h] [rbp-48h] BYREF
  bool v20; // [rsp+40h] [rbp-38h]

  v7 = *(_QWORD *)this;
  v11 = KeGetCurrentThread() == *(struct _KTHREAD **)(*(_QWORD *)this + 8LL);
  v12 = (_QWORD *)(*(_QWORD *)this + 312LL);
  v19[1].QuadPart = (LONGLONG)v12;
  v13 = v11;
  v20 = v11;
  if ( v11 )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    ++*(_DWORD *)(v7 + 360);
    v15 = PerformanceCounter;
    v19[0] = PerformanceCounter;
  }
  else
  {
    v15 = v19[0];
  }
  v16 = *(_QWORD *)a2;
  v17 = *(_DWORD *)(*(_QWORD *)a2 + 72LL);
  if ( (v17 & 0x2000) != 0 )
    goto LABEL_8;
  if ( (v17 & 0x8000) != 0 )
  {
    if ( *(_QWORD *)(v16 + 552) )
    {
      if ( *(_DWORD *)(v16 + 584) )
      {
        UnlockChildPages(*(ADAPTER_DISPLAY **)(*((_QWORD *)a2 + 1) + 32LL));
        IoFreeMdl(*(PMDL *)(v16 + 552));
      }
      else
      {
        UnmapGpadl();
      }
      *(_QWORD *)(v16 + 552) = 0LL;
    }
    goto LABEL_8;
  }
  if ( !*(_BYTE *)(*((_QWORD *)this + 3) + 2871LL) && a6 )
    VIDMM_GLOBAL::EnsureLockedPages(this, a2, a3, a4);
  v18 = *((_QWORD *)a2 + 3);
  if ( v18 )
  {
    (*(void (__fastcall **)(_QWORD, __int64, unsigned __int64, unsigned __int64, char))(**(_QWORD **)(*((_QWORD *)a2 + 1) + 24LL)
                                                                                      + 40LL))(
      *(_QWORD *)(*((_QWORD *)a2 + 1) + 24LL),
      v18,
      a3,
      a4,
      a5);
LABEL_8:
    VIDMM_WORKER_THREAD_PAGING_TIME_ACCUMULATOR::~VIDMM_WORKER_THREAD_PAGING_TIME_ACCUMULATOR((VIDMM_WORKER_THREAD_PAGING_TIME_ACCUMULATOR *)v19);
    return;
  }
  if ( a5 )
  {
    VidMmiUnlockAllocation(*((struct _VIDMM_MDL **)a2 + 11));
    *((_QWORD *)a2 + 11) = 0LL;
    goto LABEL_8;
  }
  VidMmiUnlockAllocation(*((struct _VIDMM_MDL **)a2 + 10));
  *((_QWORD *)a2 + 10) = 0LL;
  if ( v13 )
    *v12 += *(_QWORD *)&KeQueryPerformanceCounter(0LL) - v15.QuadPart;
}
