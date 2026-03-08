/*
 * XREFs of ?SubmitSingleEntry@DXGDISPLAYCALLOUTQUEUE@@QEAAJPEAUDISPLAY_CALLOUT_ENTRY@@_K@Z @ 0x1C0216854
 * Callers:
 *     ?RequestAsyncMonitorEventCallout@ADAPTER_DISPLAY@@QEAAJIW4MONITOR_EVENT@@_KEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0216630 (-RequestAsyncMonitorEventCallout@ADAPTER_DISPLAY@@QEAAJIW4MONITOR_EVENT@@_KEPEAU_DXGK_DISPLAY_SC.c)
 *     ?RequestAsyncDisplaySwitchCallout@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02BA704 (-RequestAsyncDisplaySwitchCallout@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_D.c)
 *     DxgkRequestAsyncDisplaySwitchCallout @ 0x1C0311340 (DxgkRequestAsyncDisplaySwitchCallout.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008CE0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008F20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008FA8 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     DpiGdiAsyncDisplayCallout @ 0x1C02168F4 (DpiGdiAsyncDisplayCallout.c)
 */

__int64 __fastcall DXGDISPLAYCALLOUTQUEUE::SubmitSingleEntry(
        DXGDISPLAYCALLOUTQUEUE ***this,
        struct DISPLAY_CALLOUT_ENTRY *a2,
        __int64 a3)
{
  DXGDISPLAYCALLOUTQUEUE **v6; // rdx
  int v7; // eax
  __int64 v8; // rdi
  _BYTE v10[24]; // [rsp+50h] [rbp-18h] BYREF

  *((_BYTE *)a2 + 20) = 0;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v10, (struct DXGFASTMUTEX *const)this, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v10);
  v6 = this[7];
  if ( *v6 != (DXGDISPLAYCALLOUTQUEUE *)(this + 6) )
    __fastfail(3u);
  *(_QWORD *)a2 = this + 6;
  *((_QWORD *)a2 + 1) = v6;
  *v6 = a2;
  this[7] = (DXGDISPLAYCALLOUTQUEUE **)a2;
  if ( this[8] || (DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v10), v7 = DpiGdiAsyncDisplayCallout(a3), v8 = v7, v7 >= 0) )
  {
    LODWORD(v8) = 0;
  }
  else
  {
    WdLogSingleEntry1(2LL, v7);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed request an asynchronous Display Callout (Status == 0x%I64x)",
      v8,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( v10[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v10);
  return (unsigned int)v8;
}
