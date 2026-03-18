/*
 * XREFs of ?AppendMonitorId@DpiPersistence@@YAJIAEBU_LUID@@PEAVVIDPN_MGR@@GPEAG2@Z @ 0x1C01845C4
 * Callers:
 *     ?CreateMonitorSetId@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@PEA_N@Z @ 0x1C01838EC (-CreateMonitorSetId@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@PEA_N@Z.c)
 * Callees:
 *     ?RtlStringCchLengthW@@YAJPEBG_KPEA_K@Z @ 0x1C00038C8 (-RtlStringCchLengthW@@YAJPEBG_KPEA_K@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ?GetMonitorIdFromTargetId@DpiPersistence@@YAJIAEBU_LUID@@PEAVVIDPN_MGR@@GPEAG@Z @ 0x1C01844BC (-GetMonitorIdFromTargetId@DpiPersistence@@YAJIAEBU_LUID@@PEAVVIDPN_MGR@@GPEAG@Z.c)
 */

__int64 __fastcall DpiPersistence::AppendMonitorId(
        DpiPersistence *this,
        unsigned int *a2,
        struct _LUID *a3,
        struct VIDPN_MGR *a4,
        _WORD *a5,
        unsigned __int16 *a6)
{
  __int64 v7; // rbx
  __int64 v8; // rdi
  int v9; // eax
  unsigned __int64 v11; // [rsp+50h] [rbp-18h] BYREF

  v7 = (unsigned __int16)a4;
  LODWORD(v8) = DpiPersistence::GetMonitorIdFromTargetId(this, a2, a3, (struct VIDPN_MGR *)(unsigned __int16)a4, a6);
  if ( (int)v8 < 0 )
  {
    WdLogSingleEntry1(2LL, 161LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Unable to get Monitor ID from Target ID",
      161LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  else
  {
    v11 = 0LL;
    v9 = RtlStringCchLengthW(a6, (unsigned int)v7, &v11);
    v8 = v9;
    if ( v9 < 0 )
    {
      WdLogSingleEntry5(1LL, v9, a6, v7, (int)a2[1], *a2);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"Invalid monitor Id. (Status = 0x%I64x, o_szMonitorId = 0x%I64x, i_MonitorIdMaxLen, pDxgAdapter->GetLuid"
                  "() = 0x%I64x%08I64x)",
        v8,
        (__int64)a6,
        v7,
        (int)a2[1],
        *a2);
    }
    else
    {
      *a5 = v11;
    }
  }
  return (unsigned int)v8;
}
