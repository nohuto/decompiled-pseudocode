/*
 * XREFs of LogicalCursorPosFromDpiAwarenessContext @ 0x1C006DE50
 * Callers:
 *     <none>
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C002EA80 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     ScaleDPIPt @ 0x1C006DFB0 (ScaleDPIPt.c)
 *     CalculateLogicalMonitorRect @ 0x1C006E324 (CalculateLogicalMonitorRect.c)
 *     Is_MonitorFromPointSupported @ 0x1C006E508 (Is_MonitorFromPointSupported.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall LogicalCursorPosFromDpiAwarenessContext(unsigned int CurrentThreadDpiAwarenessContext)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // r8
  __int64 v5; // rdx
  _QWORD *v7; // r14
  __int64 v8; // rcx
  __int64 v9; // rdi
  unsigned __int16 v10; // si
  __int64 v11; // [rsp+30h] [rbp-38h] BYREF
  __int64 v12; // [rsp+40h] [rbp-28h] BYREF
  __int64 v13; // [rsp+78h] [rbp+10h] BYREF

  v2 = 0LL;
  if ( qword_1C0288018 )
  {
    v3 = (*(__int64 (__fastcall **)(CMouseSensor *))(*(_QWORD *)qword_1C0288018 + 8LL))(qword_1C0288018);
    v4 = v3;
    if ( v3 )
    {
      v5 = *(_DWORD *)(v3 + 68) >> 8;
      LOWORD(v5) = (CurrentThreadDpiAwarenessContext >> 8) ^ v5;
      v13 = 0LL;
      if ( (v5 & 0x1FF) == 0 )
        return *(_QWORD *)(v3 + 60);
      v7 = gpsi;
      if ( !CurrentThreadDpiAwarenessContext )
        CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
      v8 = CurrentThreadDpiAwarenessContext;
      if ( (CurrentThreadDpiAwarenessContext & 0xF) == 2 )
        return v7[620];
      LOBYTE(v8) = CurrentThreadDpiAwarenessContext & 0xF;
      if ( (int)Is_MonitorFromPointSupported(v8, v5, v4) < 0 )
        return v7[620];
      if ( qword_1C029C960 )
        v2 = qword_1C029C960(v7[620], 2LL, 18LL);
      v9 = *(_QWORD *)(v2 + 40);
      CalculateLogicalMonitorRect((unsigned int)&v11, v9 + 28, *(unsigned __int16 *)(v9 + 60), 0, *(_WORD *)(v9 + 62));
      v10 = (CurrentThreadDpiAwarenessContext >> 8) & 0x1FF;
      CalculateLogicalMonitorRect((unsigned int)&v12, v9 + 28, *(unsigned __int16 *)(v9 + 60), v10, *(_WORD *)(v9 + 62));
      ScaleDPIPt((unsigned int)&v13, (_DWORD)v7 + 4960, v10, *(unsigned __int16 *)(v9 + 60), v12, v11);
      return v13;
    }
  }
  return v2;
}
