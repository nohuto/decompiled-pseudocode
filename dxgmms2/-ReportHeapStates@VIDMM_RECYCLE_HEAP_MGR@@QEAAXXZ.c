/*
 * XREFs of ?ReportHeapStates@VIDMM_RECYCLE_HEAP_MGR@@QEAAXXZ @ 0x1C00F6780
 * Callers:
 *     ?ReportVidMmStateWorker@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00E7460 (-ReportVidMmStateWorker@VIDMM_GLOBAL@@QEAAXXZ.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0001DE4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0001EC0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0001F48 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?ReportBlockStates@VIDMM_RECYCLE_HEAP@@QEAAXXZ @ 0x1C00F66D4 (-ReportBlockStates@VIDMM_RECYCLE_HEAP@@QEAAXXZ.c)
 */

void __fastcall VIDMM_RECYCLE_HEAP_MGR::ReportHeapStates(VIDMM_RECYCLE_HEAP_MGR *this)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // rdx
  __int64 v37; // r8
  _BYTE v38[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v38, (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1328));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v38);
  VIDMM_RECYCLE_HEAP::ReportBlockStates((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 16), v2, v3);
  VIDMM_RECYCLE_HEAP::ReportBlockStates((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 88), v4, v5);
  VIDMM_RECYCLE_HEAP::ReportBlockStates((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 160), v6, v7);
  VIDMM_RECYCLE_HEAP::ReportBlockStates((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 232), v8, v9);
  VIDMM_RECYCLE_HEAP::ReportBlockStates((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 304), v10, v11);
  VIDMM_RECYCLE_HEAP::ReportBlockStates((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 376), v12, v13);
  VIDMM_RECYCLE_HEAP::ReportBlockStates((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 448), v14, v15);
  VIDMM_RECYCLE_HEAP::ReportBlockStates((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 520), v16, v17);
  VIDMM_RECYCLE_HEAP::ReportBlockStates((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 592), v18, v19);
  VIDMM_RECYCLE_HEAP::ReportBlockStates((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 664), v20, v21);
  VIDMM_RECYCLE_HEAP::ReportBlockStates((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 736), v22, v23);
  VIDMM_RECYCLE_HEAP::ReportBlockStates((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 808), v24, v25);
  VIDMM_RECYCLE_HEAP::ReportBlockStates((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 880), v26, v27);
  VIDMM_RECYCLE_HEAP::ReportBlockStates((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 952), v28, v29);
  VIDMM_RECYCLE_HEAP::ReportBlockStates((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1024), v30, v31);
  VIDMM_RECYCLE_HEAP::ReportBlockStates((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1096), v32, v33);
  VIDMM_RECYCLE_HEAP::ReportBlockStates((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1168), v34, v35);
  VIDMM_RECYCLE_HEAP::ReportBlockStates((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1240), v36, v37);
  if ( v38[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v38);
}
