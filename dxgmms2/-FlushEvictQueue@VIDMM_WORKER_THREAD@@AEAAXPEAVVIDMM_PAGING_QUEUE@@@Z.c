/*
 * XREFs of ?FlushEvictQueue@VIDMM_WORKER_THREAD@@AEAAXPEAVVIDMM_PAGING_QUEUE@@@Z @ 0x1C00ED340
 * Callers:
 *     ?ProcessEvictQueues@VIDMM_WORKER_THREAD@@AEAA_NXZ @ 0x1C00ED8D8 (-ProcessEvictQueues@VIDMM_WORKER_THREAD@@AEAA_NXZ.c)
 * Callees:
 *     ?SubmitPacket@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00EDB78 (-SubmitPacket@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@_.c)
 *     ?ReclaimPacket@VIDMM_PAGING_QUEUE@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@@Z @ 0x1C00F1314 (-ReclaimPacket@VIDMM_PAGING_QUEUE@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_WORKER_THREAD::FlushEvictQueue(VIDMM_WORKER_THREAD *this, struct VIDMM_PAGING_QUEUE *a2)
{
  char *v4; // r14
  struct VIDMM_PAGING_QUEUE_PACKET *v5; // rbx
  __int64 v6; // rax
  int v7; // eax
  bool v8; // zf
  __int64 v9; // rdx
  __int64 v10; // rcx
  bool v11; // [rsp+50h] [rbp+8h] BYREF
  struct VIDMM_ALLOC *v12; // [rsp+58h] [rbp+10h] BYREF

  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = a2;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)this + 144, 0LL);
  *((_QWORD *)this + 19) = KeGetCurrentThread();
  if ( *((_DWORD *)a2 + 28) == 1 )
  {
    v4 = (char *)a2 + 32;
    do
    {
      v5 = *(struct VIDMM_PAGING_QUEUE_PACKET **)v4;
      if ( *(char **)(*(_QWORD *)v4 + 8LL) != v4
        || (v6 = *(_QWORD *)v5, *(struct VIDMM_PAGING_QUEUE_PACKET **)(*(_QWORD *)v5 + 8LL) != v5) )
      {
        __fastfail(3u);
      }
      *(_QWORD *)v4 = v6;
      *(_QWORD *)(v6 + 8) = v4;
      *(_QWORD *)v5 = 0LL;
      *((_QWORD *)v5 + 1) = 0LL;
      *((_QWORD *)this + 19) = 0LL;
      ExReleasePushLockExclusiveEx((char *)this + 144, 0LL);
      KeLeaveCriticalRegion();
      v12 = 0LL;
      v11 = 0;
      v7 = VIDMM_WORKER_THREAD::SubmitPacket(this, a2, v5, 0, &v11, &v12);
      if ( v7 < 0 || v11 )
      {
        if ( *((_BYTE *)v5 + 24) )
          v8 = *((_QWORD *)v5 + 9) == 0LL;
        else
          v8 = *((_QWORD *)v5 + 10) == 0LL;
        v9 = *((int *)v5 + 12);
        if ( v8 )
        {
          v10 = *(_QWORD *)this;
          g_DxgMmsBugcheckExportIndex = 1;
          WdLogSingleEntry5(0LL, 270LL, 76LL, v7, v10, v9);
        }
      }
      VIDMM_PAGING_QUEUE::ReclaimPacket(a2, v5);
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx((char *)this + 144, 0LL);
      *((_QWORD *)this + 19) = KeGetCurrentThread();
    }
    while ( *((_DWORD *)a2 + 28) == 1 );
  }
  *((_QWORD *)this + 19) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 144, 0LL);
  KeLeaveCriticalRegion();
}
