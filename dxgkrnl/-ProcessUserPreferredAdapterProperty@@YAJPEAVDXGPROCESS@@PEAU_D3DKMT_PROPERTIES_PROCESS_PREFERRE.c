/*
 * XREFs of ?ProcessUserPreferredAdapterProperty@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_PROPERTIES_PROCESS_PREFERRED_ADAPTER_ID@@_N@Z @ 0x1C030FA9C
 * Callers:
 *     NtDxgkGetProperties @ 0x1C01A8E80 (NtDxgkGetProperties.c)
 *     NtDxgkSetProperties @ 0x1C01D32D0 (NtDxgkSetProperties.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008CE0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008F20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008FA8 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall ProcessUserPreferredAdapterProperty(
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
  if ( a3 )
  {
    if ( *((_BYTE *)a1 + 556) )
    {
      v6 = -1073740528;
      WdLogSingleEntry1(3LL, -1073740528LL);
      goto LABEL_9;
    }
    *((_OWORD *)a1 + 34) = *(_OWORD *)a2;
    *((_BYTE *)a1 + 556) = 1;
  }
  else
  {
    *(_OWORD *)a2 = *((_OWORD *)a1 + 34);
  }
  v6 = 0;
LABEL_9:
  if ( v8[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v8);
  return v6;
}
