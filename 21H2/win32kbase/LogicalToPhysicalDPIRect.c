/*
 * XREFs of LogicalToPhysicalDPIRect @ 0x1C006DD10
 * Callers:
 *     TransformRectBetweenCoordinateSpacesPerMonitor @ 0x1C006D8A0 (TransformRectBetweenCoordinateSpacesPerMonitor.c)
 *     NtUserLockCursor @ 0x1C00AD6F0 (NtUserLockCursor.c)
 *     NtUserClipCursor @ 0x1C00CF260 (NtUserClipCursor.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C002EA80 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     ScaleDPIRect @ 0x1C006E034 (ScaleDPIRect.c)
 *     CalculateLogicalMonitorRect @ 0x1C006E324 (CalculateLogicalMonitorRect.c)
 *     Is_MonitorFromRectSupported @ 0x1C006E534 (Is_MonitorFromRectSupported.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall LogicalToPhysicalDPIRect(_OWORD *a1, _OWORD *a2, unsigned int a3, _QWORD *a4)
{
  unsigned int CurrentThreadDpiAwarenessContext; // esi
  __int64 result; // rax
  _QWORD *v9; // rax
  __int64 v10; // rdi
  unsigned __int16 v11; // si
  __int64 v12; // [rsp+30h] [rbp-28h] BYREF
  __int64 v13; // [rsp+40h] [rbp-18h] BYREF

  CurrentThreadDpiAwarenessContext = a3;
  if ( !a3 )
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
  if ( (CurrentThreadDpiAwarenessContext & 0xF) == 2 || (int)Is_MonitorFromRectSupported() < 0 )
  {
    result = 0LL;
    *a1 = *a2;
  }
  else
  {
    if ( a4 )
    {
      v9 = (_QWORD *)*a4;
      if ( *a4 )
        goto LABEL_8;
    }
    v9 = qword_1C029C980;
    if ( qword_1C029C980 )
      v9 = (_QWORD *)qword_1C029C980(a2, 2LL, CurrentThreadDpiAwarenessContext);
    if ( a4 )
LABEL_8:
      *a4 = v9;
    v10 = v9[5];
    v11 = (CurrentThreadDpiAwarenessContext >> 8) & 0x1FF;
    CalculateLogicalMonitorRect(
      (unsigned int)&v12,
      v10 + 28,
      *(unsigned __int16 *)(v10 + 60),
      v11,
      *(_WORD *)(v10 + 62));
    CalculateLogicalMonitorRect((unsigned int)&v13, v10 + 28, *(unsigned __int16 *)(v10 + 60), 0, *(_WORD *)(v10 + 62));
    ScaleDPIRect((_DWORD)a1, (_DWORD)a2, *(unsigned __int16 *)(v10 + 60), v11, v13, v12);
    return 1LL;
  }
  return result;
}
