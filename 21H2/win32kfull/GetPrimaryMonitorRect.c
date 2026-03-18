/*
 * XREFs of GetPrimaryMonitorRect @ 0x1C00F266C
 * Callers:
 *     xxxBroadcastDisplaySettingsChange @ 0x1C00F2460 (xxxBroadcastDisplaySettingsChange.c)
 *     _GetClientRect @ 0x1C00F2600 (_GetClientRect.c)
 *     xxxSoundSentry @ 0x1C011B3AC (xxxSoundSentry.c)
 * Callees:
 *     GetMonitorRect @ 0x1C007CB08 (GetMonitorRect.c)
 */

__int64 __fastcall GetPrimaryMonitorRect(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 DispInfo; // rax

  DispInfo = GetDispInfo(a1, a2, a3, a4);
  GetMonitorRect(a1, *(_QWORD *)(DispInfo + 96));
  return a1;
}
