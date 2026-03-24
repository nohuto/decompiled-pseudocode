/*
 * XREFs of GetMonitorMaxArea @ 0x1C00413D4
 * Callers:
 *     CkptUpdate @ 0x1C00412C8 (CkptUpdate.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C0064CA0 (xxxInitSendValidateMinMaxInfoEx.c)
 *     ?CloneWindowPosAndArrangementAsync@@YA_NPEAUtagWND@@PEBU1@1W4CloneWindowPosOptions@@@Z @ 0x1C01CF5C8 (-CloneWindowPosAndArrangementAsync@@YA_NPEAUtagWND@@PEBU1@1W4CloneWindowPosOptions@@@Z.c)
 *     ?xxxCloneWindowPosAndArrangement@@YAXPEAUtagWND@@AEBUWINDOWPOSANDCHECKPOINT@@@Z @ 0x1C01CFF5C (-xxxCloneWindowPosAndArrangement@@YAXPEAUtagWND@@AEBUWINDOWPOSANDCHECKPOINT@@@Z.c)
 * Callees:
 *     GetMonitorWorkRectForWindow @ 0x1C002C4C0 (GetMonitorWorkRectForWindow.c)
 *     _HungWindowFromGhostWindow @ 0x1C0041468 (_HungWindowFromGhostWindow.c)
 *     GetMonitorRectForWindow @ 0x1C00427D4 (GetMonitorRectForWindow.c)
 */

_OWORD *__fastcall GetMonitorMaxArea(_OWORD *a1, const struct tagWND *a2, __int64 a3)
{
  __int64 v6; // rax
  __int64 v7; // r9
  __int64 v8; // rcx
  __int128 *MonitorWorkRectForWindow; // rax
  __int128 v10; // xmm0
  _OWORD *result; // rax
  __int128 v12; // [rsp+20h] [rbp-18h] BYREF

  v6 = HungWindowFromGhostWindow(a2);
  v7 = (__int64)a2;
  if ( v6 )
    v7 = v6;
  v8 = *(_QWORD *)(v7 + 40);
  if ( (*(_BYTE *)(v8 + 30) & 1) != 0 && (*(_BYTE *)(v8 + 16) & 8) != 0 && !*(_WORD *)(gpDispInfo + 160LL) )
    MonitorWorkRectForWindow = GetMonitorWorkRectForWindow(&v12, a3, a2);
  else
    MonitorWorkRectForWindow = (__int128 *)GetMonitorRectForWindow(&v12, a3, a2);
  v10 = *MonitorWorkRectForWindow;
  result = a1;
  *a1 = v10;
  return result;
}
