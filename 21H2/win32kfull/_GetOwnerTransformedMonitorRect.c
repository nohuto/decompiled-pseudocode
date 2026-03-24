/*
 * XREFs of _GetOwnerTransformedMonitorRect @ 0x1C0161BE8
 * Callers:
 *     NtUserGetOwnerTransformedMonitorRect @ 0x1C0161AF0 (NtUserGetOwnerTransformedMonitorRect.c)
 * Callees:
 *     GetMonitorWorkRect @ 0x1C0041430 (GetMonitorWorkRect.c)
 *     GetMonitorRect @ 0x1C0041DF8 (GetMonitorRect.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C005BA00 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 */

char __fastcall GetOwnerTransformedMonitorRect(__int64 a1, __int64 a2, int a3, _OWORD *a4)
{
  __int128 *MonitorWorkRect; // rax
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rbx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int128 v14; // [rsp+20h] [rbp-58h] BYREF
  __int128 v15; // [rsp+30h] [rbp-48h] BYREF
  __int128 v16; // [rsp+40h] [rbp-38h] BYREF

  if ( a3 )
    MonitorWorkRect = GetMonitorWorkRect(&v14, a2);
  else
    MonitorWorkRect = GetMonitorRect(&v15, a2);
  v9 = *(_QWORD *)(a1 + 40);
  v16 = *MonitorWorkRect;
  LOBYTE(MonitorWorkRect) = *(_DWORD *)(v9 + 288) & 0xF;
  if ( (_BYTE)MonitorWorkRect != 2 )
  {
    MonitorWorkRect = (__int128 *)ValidateHmonitorNoRip(*(_QWORD *)(v9 + 256));
    *(_QWORD *)&v14 = MonitorWorkRect;
    if ( MonitorWorkRect )
    {
      if ( MonitorWorkRect != (__int128 *)a2 )
      {
        v11 = *(_QWORD *)(a2 + 40) + (a3 != 0 ? 44LL : 28LL);
        CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v10);
        LOBYTE(MonitorWorkRect) = PhysicalToLogicalDPIRect(&v16, v11, CurrentThreadDpiAwarenessContext, &v14);
      }
    }
  }
  *a4 = v16;
  return (char)MonitorWorkRect;
}
