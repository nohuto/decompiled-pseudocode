/*
 * XREFs of ?GetBackingAddress@VIDMM_RECYCLE_HEAP_MGR@@UEAA_KPEAX@Z @ 0x1C00965A0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0001DE4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0001EC0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0001F48 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?CopyPfnArray@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAXPEA_K_K1@Z @ 0x1C0096624 (-CopyPfnArray@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAXPEA_K_K1@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
unsigned __int64 __fastcall VIDMM_RECYCLE_HEAP_MGR::GetBackingAddress(VIDMM_RECYCLE_HEAP_MGR *this, _QWORD *a2)
{
  unsigned __int64 v3; // r8
  __int64 v4; // rcx
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rbx
  __int64 v8; // rcx
  _BYTE v9[24]; // [rsp+30h] [rbp-18h] BYREF
  unsigned __int64 v10; // [rsp+50h] [rbp+8h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v9, (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1328));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v9);
  v3 = a2[4];
  v4 = a2[10];
  v10 = 0LL;
  VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW::CopyPfnArray((VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *)(v4 + 88), &v10, v3, v3 + 4096);
  v5 = v10;
  if ( !v10 )
  {
    v8 = a2[4];
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 52LL, 20LL, v8, 0LL);
  }
  v6 = v5 << 12;
  if ( v9[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v9);
  return v6;
}
