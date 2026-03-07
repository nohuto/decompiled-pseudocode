void __fastcall VIDMM_DEVICE::ResumePagingQueues(VIDMM_DEVICE *this)
{
  char *v2; // rdi
  char *v3; // rsi
  char *v4; // rbx
  VIDMM_PAGING_QUEUE *v5; // rcx

  if ( *((_BYTE *)this + 57) == 1 )
  {
    v2 = (char *)this + 120;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v2, 0LL);
    v3 = (char *)this + 104;
    *((_QWORD *)v2 + 1) = KeGetCurrentThread();
    *((_BYTE *)this + 57) = 0;
    v4 = (char *)*((_QWORD *)this + 13);
    while ( v4 != v3 )
    {
      v5 = (VIDMM_PAGING_QUEUE *)(v4 - 48);
      v4 = *(char **)v4;
      VIDMM_PAGING_QUEUE::Resume(v5);
    }
    *((_QWORD *)v2 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v2, 0LL);
    KeLeaveCriticalRegion();
  }
}
