/*
 * XREFs of GetPrimaryMonitorRect @ 0x1C00FFCB4
 * Callers:
 *     xxxBroadcastDisplaySettingsChange @ 0x1C00FFA40 (xxxBroadcastDisplaySettingsChange.c)
 *     _GetClientRect @ 0x1C00FFC48 (_GetClientRect.c)
 *     xxxSoundSentry @ 0x1C015DA30 (xxxSoundSentry.c)
 * Callees:
 *     GetMonitorRect @ 0x1C0041DF8 (GetMonitorRect.c)
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
