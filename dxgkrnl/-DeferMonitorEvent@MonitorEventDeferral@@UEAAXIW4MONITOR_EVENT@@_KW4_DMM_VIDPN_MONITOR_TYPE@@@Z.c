/*
 * XREFs of ?DeferMonitorEvent@MonitorEventDeferral@@UEAAXIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C021A7C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MonitorEventDeferral::DeferMonitorEvent(__int64 a1, int a2, int a3, __int64 a4, unsigned int a5)
{
  __int64 v5; // r11
  __int64 v7; // rcx
  __int64 result; // rax

  v5 = *(unsigned int *)(a1 + 112);
  if ( (unsigned int)v5 >= 4 )
    return WdLogSingleEntry0(1LL);
  v7 = 3 * v5;
  *(_DWORD *)(a1 + 112) = v5 + 1;
  result = a5;
  *(_DWORD *)(a1 + 8 * v7 + 32) = a5;
  *(_DWORD *)(a1 + 8 * v7 + 16) = a2;
  *(_DWORD *)(a1 + 8 * v7 + 20) = a3;
  *(_QWORD *)(a1 + 8 * v7 + 24) = a4;
  return result;
}
