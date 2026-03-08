/*
 * XREFs of ?CreatePagingQueue@VIDMM_DEVICE@@QEAAJIHPEAPEAVVIDMM_PAGING_QUEUE@@@Z @ 0x1C00A90EC
 * Callers:
 *     ?VidMmCreatePagingQueue@@YAJPEAVVIDMM_DEVICE@@IHPEAPEAVVIDMM_PAGING_QUEUE@@@Z @ 0x1C0011F10 (-VidMmCreatePagingQueue@@YAJPEAVVIDMM_DEVICE@@IHPEAPEAVVIDMM_PAGING_QUEUE@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0002360 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_GVIDMM_PAGING_QUEUE@@QEAAPEAXI@Z @ 0x1C0011C88 (--_GVIDMM_PAGING_QUEUE@@QEAAPEAXI@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C00199EC (DxgkLogInternalTriageEvent.c)
 *     ??0VIDMM_PAGING_QUEUE@@QEAA@XZ @ 0x1C00A9174 (--0VIDMM_PAGING_QUEUE@@QEAA@XZ.c)
 *     ?InitializePagingQueue@VIDMM_PAGING_QUEUE@@QEAAJPEAVVIDMM_DEVICE@@IPEAVVIDMM_GLOBAL@@W4VIDMM_PAGING_QUEUE_TYPE@@@Z @ 0x1C00AB3C0 (-InitializePagingQueue@VIDMM_PAGING_QUEUE@@QEAAJPEAVVIDMM_DEVICE@@IPEAVVIDMM_GLOBAL@@W4VIDMM_PAG.c)
 */

__int64 __fastcall VIDMM_DEVICE::CreatePagingQueue(
        VIDMM_DEVICE *this,
        unsigned int a2,
        __int64 a3,
        struct VIDMM_PAGING_QUEUE **a4)
{
  VIDMM_PAGING_QUEUE *v7; // rax
  struct VIDMM_PAGING_QUEUE *v8; // rax
  int v9; // edi
  __int64 v11; // rcx

  v7 = (VIDMM_PAGING_QUEUE *)operator new(152LL, 0x38346956u, 256LL);
  if ( !v7 )
  {
    *a4 = 0LL;
    goto LABEL_9;
  }
  v8 = VIDMM_PAGING_QUEUE::VIDMM_PAGING_QUEUE(v7);
  *a4 = v8;
  if ( !v8 )
  {
LABEL_9:
    _InterlockedIncrement(&dword_1C00768B0);
    WdLogSingleEntry1(6LL, 572LL);
    DxgkLogInternalTriageEvent(v11, 262145LL);
    return 3221225495LL;
  }
  v9 = VIDMM_PAGING_QUEUE::InitializePagingQueue(v8, this, a2, *(_QWORD *)this, 0);
  if ( v9 < 0 )
  {
    if ( *a4 )
      VIDMM_PAGING_QUEUE::`scalar deleting destructor'(*a4);
    *a4 = 0LL;
  }
  return (unsigned int)v9;
}
