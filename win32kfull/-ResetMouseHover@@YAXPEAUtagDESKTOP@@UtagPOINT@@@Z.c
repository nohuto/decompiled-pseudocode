/*
 * XREFs of ?ResetMouseHover@@YAXPEAUtagDESKTOP@@UtagPOINT@@@Z @ 0x1C0143AD6
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00725D0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     TrackMouseEvent @ 0x1C00E01E4 (TrackMouseEvent.c)
 * Callees:
 *     _SetSystemTimer @ 0x1C0006384 (_SetSystemTimer.c)
 */

void __fastcall ResetMouseHover(struct tagDESKTOP *a1, struct tagPOINT a2)
{
  LONG x; // ebx
  __int64 v4; // rcx
  int v5; // ebp
  __int64 v6; // rcx
  int v7; // edi
  __int64 v8; // rcx
  __int64 v9; // rcx
  int v10; // esi
  int v11; // ebx
  LONG y; // [rsp+5Ch] [rbp+14h]

  y = a2.y;
  x = a2.x;
  SetSystemTimer(*((_QWORD *)a1 + 23), 65530, *((_DWORD *)a1 + 53), (int)xxxSystemTimerProc, 0);
  v5 = y + (*(_DWORD *)(SGDGetUserSessionState(v4) + 15920) >> 1);
  v7 = x + (*(_DWORD *)(SGDGetUserSessionState(v6) + 15916) >> 1);
  v9 = *(_DWORD *)(SGDGetUserSessionState(v8) + 15920) >> 1;
  v10 = y - v9;
  v11 = x - (*(_DWORD *)(SGDGetUserSessionState(v9) + 15916) >> 1);
  *((_DWORD *)a1 + 52) = v5;
  *((_DWORD *)a1 + 49) = v11;
  *((_DWORD *)a1 + 50) = v10;
  *((_DWORD *)a1 + 51) = v7;
}
