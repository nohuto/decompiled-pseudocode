/*
 * XREFs of DxgkIsConsoleSessionDispBrokerEnabled @ 0x1C01E6318
 * Callers:
 *     ?IsAdvancedColorEnabled@MonitorColorState@DxgMonitor@@QEBA_NXZ @ 0x1C01E62E0 (-IsAdvancedColorEnabled@MonitorColorState@DxgMonitor@@QEBA_NXZ.c)
 *     DpiPdoHandleChildConnectionChange @ 0x1C020F55C (DpiPdoHandleChildConnectionChange.c)
 *     ?SetAdvancedColorEnabled@MonitorColorState@DxgMonitor@@QEAAJ_N@Z @ 0x1C03CDEB8 (-SetAdvancedColorEnabled@MonitorColorState@DxgMonitor@@QEAAJ_N@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008468 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000860C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkIsConsoleSessionDispBrokerEnabled(bool *a1)
{
  struct DXGGLOBAL *Global; // rax
  __int64 v3; // rbx
  __int64 v4; // rax
  bool v5; // bl
  _BYTE v7[24]; // [rsp+50h] [rbp-18h] BYREF

  Global = DXGGLOBAL::GetGlobal();
  v3 = *((_QWORD *)Global + 118);
  if ( v3 )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v7, *((struct DXGFASTMUTEX *const *)Global + 118), 0);
    v4 = *(_QWORD *)(v3 + 136);
    if ( v4 )
      v5 = *(_BYTE *)(v4 + 18499) != 0;
    else
      v5 = 0;
    if ( v7[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v7);
    *a1 = v5;
    return 0LL;
  }
  else
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Cannot find the session manager, status 0x%I64x.",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
}
