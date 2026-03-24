/*
 * XREFs of PhysicalToLogicalDPIRect @ 0x1C0071310
 * Callers:
 *     TransformRectBetweenCoordinateSpacesPerMonitor @ 0x1C0070FEC (TransformRectBetweenCoordinateSpacesPerMonitor.c)
 *     NtUserGetClipCursor @ 0x1C012EBB0 (NtUserGetClipCursor.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C002BEF4 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     ScaleDPIRect @ 0x1C0071698 (ScaleDPIRect.c)
 *     GetMonitorRectForDpiContext @ 0x1C0071778 (GetMonitorRectForDpiContext.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PhysicalToLogicalDPIRect(_OWORD *a1, _OWORD *a2, unsigned int a3, __int64 *a4)
{
  unsigned int CurrentThreadDpiAwarenessContext; // esi
  int v8; // ebp
  int v9; // eax
  __int64 v10; // rdi
  __int64 v11; // r14
  unsigned __int16 v12; // bp
  __int64 v13; // rbx
  __int64 *MonitorRectForDpiContext; // rax
  __int64 result; // rax
  _BYTE v16[40]; // [rsp+30h] [rbp-28h] BYREF

  CurrentThreadDpiAwarenessContext = a3;
  if ( !a3 )
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
  v8 = CurrentThreadDpiAwarenessContext & 0xF;
  if ( v8 == 2 && (CurrentThreadDpiAwarenessContext & 0x20000000) == 0
    || (!qword_1C0256C38 ? (v9 = -1073741637) : (v9 = qword_1C0256C38()), v9 < 0) )
  {
    result = 0LL;
    *a1 = *a2;
  }
  else
  {
    if ( a4 )
      v10 = *a4;
    else
      v10 = 0LL;
    if ( !v10 )
    {
      if ( qword_1C0256C40 )
        v10 = qword_1C0256C40(a2, 2LL, 18LL);
      else
        v10 = 0LL;
    }
    if ( a4 )
      *a4 = v10;
    if ( v8 == 2 && (CurrentThreadDpiAwarenessContext & 0x20000000) != 0 )
    {
      v11 = *(_QWORD *)(v10 + 40);
      v12 = *(_WORD *)(v11 + 68);
    }
    else
    {
      v11 = *(_QWORD *)(v10 + 40);
      v12 = (CurrentThreadDpiAwarenessContext >> 8) & 0x1FF;
    }
    v13 = *(_QWORD *)GetMonitorRectForDpiContext(v16, v10, 18LL);
    MonitorRectForDpiContext = (__int64 *)GetMonitorRectForDpiContext(v16, v10, CurrentThreadDpiAwarenessContext);
    ScaleDPIRect((_DWORD)a1, (_DWORD)a2, v12, *(unsigned __int16 *)(v11 + 64), *MonitorRectForDpiContext, v13);
    return 1LL;
  }
  return result;
}
