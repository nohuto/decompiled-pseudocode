/*
 * XREFs of LogicalToPhysicalDPIPoint @ 0x1C00C1BB0
 * Callers:
 *     TransformPointBetweenCoordinateSpaces @ 0x1C000ACB0 (TransformPointBetweenCoordinateSpaces.c)
 * Callees:
 *     Is_MonitorFromPointSupported @ 0x1C003B86C (Is_MonitorFromPointSupported.c)
 *     ScaleDPIPt @ 0x1C003B898 (ScaleDPIPt.c)
 *     GetMonitorRectForDpi @ 0x1C003BDD8 (GetMonitorRectForDpi.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0041AF0 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall LogicalToPhysicalDPIPoint(_DWORD *a1, _QWORD *a2, unsigned int a3, __int64 *a4)
{
  unsigned int CurrentThreadDpiAwarenessContext; // ebx
  __int64 v9; // rdi
  unsigned __int16 v10; // bx
  __m128i v11; // [rsp+30h] [rbp-28h] BYREF
  __m128i v12; // [rsp+40h] [rbp-18h] BYREF

  CurrentThreadDpiAwarenessContext = a3;
  if ( !a3 )
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
  if ( (CurrentThreadDpiAwarenessContext & 0xF) == 2 || (int)Is_MonitorFromPointSupported() < 0 )
  {
    *(_QWORD *)a1 = *a2;
    return 0LL;
  }
  else
  {
    if ( a4 && (v9 = *a4) != 0
      || (!qword_1C02D71A8 ? (v9 = 0LL) : (v9 = qword_1C02D71A8(*a2, 2LL, CurrentThreadDpiAwarenessContext)), a4) )
    {
      *a4 = v9;
    }
    v10 = (CurrentThreadDpiAwarenessContext >> 8) & 0x1FF;
    GetMonitorRectForDpi(&v11, v9, v10);
    GetMonitorRectForDpi(&v12, v9, 0);
    ScaleDPIPt(a1, a2, *(_WORD *)(*(_QWORD *)(v9 + 40) + 60LL), v10, v12.m128i_i64[0], v11.m128i_i64[0]);
    return 1LL;
  }
}
