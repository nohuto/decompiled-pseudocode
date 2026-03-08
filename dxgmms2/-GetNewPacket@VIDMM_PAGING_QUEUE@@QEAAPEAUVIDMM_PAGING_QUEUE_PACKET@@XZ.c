/*
 * XREFs of ?GetNewPacket@VIDMM_PAGING_QUEUE@@QEAAPEAUVIDMM_PAGING_QUEUE_PACKET@@XZ @ 0x1C00F11E4
 * Callers:
 *     ?QueueSystemCommandAndWaitInternal@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@AEAVVIDMM_PAGING_QUEUE@@PEAU_VIDSCH_SYNC_OBJECT@@_N@Z @ 0x1C008AC70 (-QueueSystemCommandAndWaitInternal@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@AEAVVIDMM_PAGIN.c)
 *     ?QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_NPEA_K@Z @ 0x1C008EBA0 (-QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_N.c)
 *     ?VidMmMapGpuVirtualAddressInternal@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEAUD3DDDI_MAPGPUVIRTUALADDRESS@@E@Z @ 0x1C008F0C0 (-VidMmMapGpuVirtualAddressInternal@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_A.c)
 * Callees:
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0002360 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     memset @ 0x1C001AC80 (memset.c)
 */

VIDMM_PAGING_QUEUE **__fastcall VIDMM_PAGING_QUEUE::GetNewPacket(VIDMM_PAGING_QUEUE *this)
{
  __int64 v1; // rbx
  VIDMM_PAGING_QUEUE **v3; // rdi
  VIDMM_PAGING_QUEUE *v4; // rbp
  VIDMM_PAGING_QUEUE **v5; // rbx
  VIDMM_PAGING_QUEUE *v6; // rax
  __int64 v7; // rcx
  VIDMM_PAGING_QUEUE **result; // rax

  v1 = *((_QWORD *)this + 10);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v1 + 144, 0LL);
  v3 = (VIDMM_PAGING_QUEUE **)((char *)this + 16);
  *(_QWORD *)(v1 + 152) = KeGetCurrentThread();
  v4 = (VIDMM_PAGING_QUEUE *)*((_QWORD *)this + 13);
  *((_QWORD *)this + 13) = (char *)v4 + 1;
  v5 = (VIDMM_PAGING_QUEUE **)*((_QWORD *)this + 2);
  if ( v5[1] != (VIDMM_PAGING_QUEUE *)((char *)this + 16) || (v6 = *v5, *((VIDMM_PAGING_QUEUE ***)*v5 + 1) != v5) )
    __fastfail(3u);
  *v3 = v6;
  *((_QWORD *)v6 + 1) = v3;
  v7 = *((_QWORD *)this + 10) + 144LL;
  *(_QWORD *)(v7 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(v7, 0LL);
  KeLeaveCriticalRegion();
  if ( v5 != v3 )
  {
    memset(v5, 0, 0xA0uLL);
    goto LABEL_7;
  }
  result = (VIDMM_PAGING_QUEUE **)operator new(160LL, 0x38346956u, 256LL);
  v5 = result;
  if ( result )
  {
LABEL_7:
    v5[5] = v4;
    return v5;
  }
  return result;
}
