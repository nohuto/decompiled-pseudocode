/*
 * XREFs of GetPrimaryMonitorRect @ 0x1C00FF964
 * Callers:
 *     xxxBroadcastDisplaySettingsChange @ 0x1C00FF6F0 (xxxBroadcastDisplaySettingsChange.c)
 *     _GetClientRect @ 0x1C00FF8F8 (_GetClientRect.c)
 *     xxxSoundSentry @ 0x1C015D2B0 (xxxSoundSentry.c)
 * Callees:
 *     GetMonitorRect @ 0x1C0041D58 (GetMonitorRect.c)
 */

_OWORD *__fastcall GetPrimaryMonitorRect(_OWORD *a1, __int64 a2)
{
  __int64 DispInfo; // rax
  __int128 v4; // xmm0
  _OWORD *result; // rax
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF

  DispInfo = GetDispInfo(a1, a2);
  v4 = *GetMonitorRect(&v6, *(_QWORD *)(DispInfo + 96));
  result = a1;
  *a1 = v4;
  return result;
}
