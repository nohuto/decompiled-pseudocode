/*
 * XREFs of ?ProcessDefaultHighPerformanceAdapterProperty@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_PROPERTIES_PROCESS_PREFERRED_ADAPTER_ID@@_N@Z @ 0x1C01D381C
 * Callers:
 *     NtDxgkGetProperties @ 0x1C01A8E80 (NtDxgkGetProperties.c)
 *     NtDxgkSetProperties @ 0x1C01D32D0 (NtDxgkSetProperties.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008CE0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008F20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008FA8 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall ProcessDefaultHighPerformanceAdapterProperty(
        struct DXGPROCESS *a1,
        struct _D3DKMT_PROPERTIES_PROCESS_PREFERRED_ADAPTER_ID *a2,
        char a3)
{
  unsigned int v6; // ebx
  _BYTE v8[24]; // [rsp+50h] [rbp-18h] BYREF

  if ( !a1 )
  {
    v6 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid process context, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return v6;
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v8, (struct DXGPROCESS *)((char *)a1 + 104), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v8);
  if ( !a3 )
  {
    *(_OWORD *)a2 = *((_OWORD *)a1 + 35);
    goto LABEL_5;
  }
  if ( !*((_BYTE *)a1 + 572) )
  {
    *((_OWORD *)a1 + 35) = *(_OWORD *)a2;
    *((_BYTE *)a1 + 572) = 1;
LABEL_5:
    v6 = 0;
    goto LABEL_6;
  }
  v6 = -1073740528;
  WdLogSingleEntry1(3LL, -1073740528LL);
LABEL_6:
  if ( v8[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v8);
  return v6;
}
