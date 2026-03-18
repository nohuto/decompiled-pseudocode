/*
 * XREFs of ?CreatePagingQueue@VIDMM_DEVICE@@QEAAJIHPEAPEAVVIDMM_PAGING_QUEUE@@@Z @ 0x1C008F8F4
 * Callers:
 *     ?VidMmCreatePagingQueue@@YAJPEAVVIDMM_DEVICE@@IHPEAPEAVVIDMM_PAGING_QUEUE@@@Z @ 0x1C0003AC0 (-VidMmCreatePagingQueue@@YAJPEAVVIDMM_DEVICE@@IHPEAPEAVVIDMM_PAGING_QUEUE@@@Z.c)
 * Callees:
 *     ??_GVIDMM_PAGING_QUEUE@@QEAAPEAXI@Z @ 0x1C0001EE8 (--_GVIDMM_PAGING_QUEUE@@QEAAPEAXI@Z.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0005F60 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C00199AC (DxgkLogInternalTriageEvent.c)
 *     ?InitializePagingQueue@VIDMM_PAGING_QUEUE@@QEAAJPEAVVIDMM_DEVICE@@IPEAVVIDMM_GLOBAL@@W4VIDMM_PAGING_QUEUE_TYPE@@@Z @ 0x1C008E718 (-InitializePagingQueue@VIDMM_PAGING_QUEUE@@QEAAJPEAVVIDMM_DEVICE@@IPEAVVIDMM_GLOBAL@@W4VIDMM_PAG.c)
 *     ??0VIDMM_PAGING_QUEUE@@QEAA@XZ @ 0x1C008F97C (--0VIDMM_PAGING_QUEUE@@QEAA@XZ.c)
 */

__int64 __fastcall VIDMM_DEVICE::CreatePagingQueue(
        VIDMM_DEVICE *this,
        int a2,
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
    _InterlockedIncrement(&dword_1C00768A0);
    WdLogSingleEntry1(6LL, 572LL);
    DxgkLogInternalTriageEvent(v11, 262145LL);
    return 3221225495LL;
  }
  v9 = VIDMM_PAGING_QUEUE::InitializePagingQueue((__int64)v8, (__int64)this, a2, *(_QWORD *)this, 0);
  if ( v9 < 0 )
  {
    if ( *a4 )
      VIDMM_PAGING_QUEUE::`scalar deleting destructor'(*a4);
    *a4 = 0LL;
  }
  return (unsigned int)v9;
}
