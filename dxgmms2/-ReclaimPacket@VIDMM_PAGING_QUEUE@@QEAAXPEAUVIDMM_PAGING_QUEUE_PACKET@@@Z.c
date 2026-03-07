// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_PAGING_QUEUE::ReclaimPacket(VIDMM_PAGING_QUEUE *this, struct VIDMM_PAGING_QUEUE_PACKET *a2)
{
  __int64 v2; // rbx
  VIDMM_PAGING_QUEUE **v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx

  v2 = *((_QWORD *)this + 10);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v2 + 144, 0LL);
  *(_QWORD *)(v2 + 152) = KeGetCurrentThread();
  v5 = (VIDMM_PAGING_QUEUE **)*((_QWORD *)this + 3);
  if ( *v5 != (VIDMM_PAGING_QUEUE *)((char *)this + 16) )
    __fastfail(3u);
  *(_QWORD *)a2 = (char *)this + 16;
  *((_QWORD *)a2 + 1) = v5;
  *v5 = a2;
  *((_QWORD *)this + 3) = a2;
  if ( *((VIDMM_PAGING_QUEUE **)this + 4) == (VIDMM_PAGING_QUEUE *)((char *)this + 32) )
  {
    v6 = *((int *)this + 28);
    if ( (_DWORD)v6 )
    {
      if ( (_DWORD)v6 != 1 )
      {
        g_DxgMmsBugcheckExportIndex = 1;
        WdLogSingleEntry5(0LL, 270LL, 58LL, this, v6, 0LL);
      }
      VIDMM_PAGING_QUEUE::SetStatus((__int64 *)this, 0);
    }
  }
  --*(_DWORD *)(*((_QWORD *)this + 17) + 72LL);
  --*(_DWORD *)(*((_QWORD *)this + 10) + 168LL);
  v7 = *((_QWORD *)this + 10) + 144LL;
  *(_QWORD *)(v7 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(v7, 0LL);
  KeLeaveCriticalRegion();
}
