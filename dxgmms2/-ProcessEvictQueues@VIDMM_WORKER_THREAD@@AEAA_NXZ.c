char __fastcall VIDMM_WORKER_THREAD::ProcessEvictQueues(VIDMM_WORKER_THREAD *this)
{
  struct VIDMM_PAGING_QUEUE **v2; // r14
  char v3; // si
  char *v4; // rbp
  struct VIDMM_PAGING_QUEUE *i; // rbx

  v2 = (struct VIDMM_PAGING_QUEUE **)((char *)this + 80);
  v3 = 0;
  v4 = (char *)this + 144;
  while ( 1 )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v4, 0LL);
    *((_QWORD *)v4 + 1) = KeGetCurrentThread();
    for ( i = *v2; i != (struct VIDMM_PAGING_QUEUE *)v2; i = *(struct VIDMM_PAGING_QUEUE **)i )
    {
      if ( *((_DWORD *)i + 29) == 2 )
        goto LABEL_15;
    }
    for ( i = (struct VIDMM_PAGING_QUEUE *)*((_QWORD *)this + 12);
          i != (VIDMM_WORKER_THREAD *)((char *)this + 96);
          i = *(struct VIDMM_PAGING_QUEUE **)i )
    {
      if ( *((_DWORD *)i + 29) == 2 )
        goto LABEL_15;
    }
    for ( i = (struct VIDMM_PAGING_QUEUE *)*((_QWORD *)this + 14);
          i != (VIDMM_WORKER_THREAD *)((char *)this + 112);
          i = *(struct VIDMM_PAGING_QUEUE **)i )
    {
      if ( *((_DWORD *)i + 29) == 2 )
        goto LABEL_15;
    }
    i = 0LL;
LABEL_15:
    *((_QWORD *)v4 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v4, 0LL);
    KeLeaveCriticalRegion();
    if ( !i )
      return v3;
    VIDMM_WORKER_THREAD::FlushEvictQueue(this, i);
    v3 = 1;
  }
}
