/*
 * XREFs of DxgkStartDisplayCalloutBatch @ 0x1C01E6D04
 * Callers:
 *     DxgkQueryConnectionChanges @ 0x1C001BFA0 (DxgkQueryConnectionChanges.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070C4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008CE0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008F20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008FA8 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGAUTOMUTEX@@QEAA@XZ @ 0x1C0016DE4 (--1DXGAUTOMUTEX@@QEAA@XZ.c)
 */

__int64 __fastcall DxgkStartDisplayCalloutBatch(__int64 a1)
{
  __int64 v1; // rbx
  bool v2; // zf
  unsigned int v3; // edi
  _BYTE v5[24]; // [rsp+50h] [rbp-18h] BYREF

  v1 = *(_QWORD *)(a1 + 2920);
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(v1 + 16)) )
  {
    WdLogSingleEntry1(1LL, 8755LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsCoreResourceSharedOwner()", 8755LL, 0LL, 0LL, 0LL, 0LL);
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v5, (struct DXGFASTMUTEX *const)(v1 + 536), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v5);
  if ( *(_BYTE *)(v1 + 584) )
  {
    v3 = -1073741811;
    WdLogSingleEntry2(2LL, *(_QWORD *)(v1 + 16), -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Multiple display callout batches have been started on adapter 0x%I64x, returning 0x%I64x.",
      *(_QWORD *)(v1 + 16),
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    DXGAUTOMUTEX::~DXGAUTOMUTEX((DXGAUTOMUTEX *)v5);
  }
  else
  {
    v2 = v5[8] == 0;
    *(_BYTE *)(v1 + 584) = 1;
    if ( !v2 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v5);
    return 0;
  }
  return v3;
}
