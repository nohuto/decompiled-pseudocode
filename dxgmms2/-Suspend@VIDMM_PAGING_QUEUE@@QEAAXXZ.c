void __fastcall VIDMM_PAGING_QUEUE::Suspend(VIDMM_PAGING_QUEUE *this)
{
  __int64 v1; // rbx
  __int64 v3; // rcx

  v1 = *((_QWORD *)this + 10);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v1 + 144, 0LL);
  *(_QWORD *)(v1 + 152) = KeGetCurrentThread();
  VIDMM_PAGING_QUEUE::SetStatus(this, 2LL);
  v3 = *((_QWORD *)this + 10) + 144LL;
  *(_QWORD *)(v3 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(v3, 0LL);
  KeLeaveCriticalRegion();
}
