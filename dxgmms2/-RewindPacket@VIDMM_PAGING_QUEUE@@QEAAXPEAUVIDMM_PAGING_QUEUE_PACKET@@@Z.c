void __fastcall VIDMM_PAGING_QUEUE::RewindPacket(VIDMM_PAGING_QUEUE *this, struct VIDMM_PAGING_QUEUE_PACKET *a2)
{
  __int64 v2; // rbx
  _QWORD *v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rcx

  v2 = *((_QWORD *)this + 10);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v2 + 144, 0LL);
  *(_QWORD *)(v2 + 152) = KeGetCurrentThread();
  v5 = (_QWORD *)((char *)this + 32);
  v6 = *((_QWORD *)this + 4);
  if ( *(VIDMM_PAGING_QUEUE **)(v6 + 8) != (VIDMM_PAGING_QUEUE *)((char *)this + 32) )
    __fastfail(3u);
  *(_QWORD *)a2 = v6;
  *((_QWORD *)a2 + 1) = v5;
  *(_QWORD *)(v6 + 8) = a2;
  *v5 = a2;
  v7 = *((_QWORD *)this + 10) + 144LL;
  *(_QWORD *)(v7 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(v7, 0LL);
  KeLeaveCriticalRegion();
}
