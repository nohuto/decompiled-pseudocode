/*
 * XREFs of GetPrimaryMonitorRect @ 0x1C00C4674
 * Callers:
 *     _GetClientRect @ 0x1C00C4608 (_GetClientRect.c)
 *     xxxSoundSentry @ 0x1C01F6208 (xxxSoundSentry.c)
 * Callees:
 *     GetMonitorRect @ 0x1C00C46EC (GetMonitorRect.c)
 */

__int64 __fastcall GetPrimaryMonitorRect(__int64 a1)
{
  __int64 DispInfo; // rax

  DispInfo = GetDispInfo(a1);
  GetMonitorRect(a1, *(_QWORD *)(DispInfo + 96));
  return a1;
}
