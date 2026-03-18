/*
 * XREFs of PhysicalToLogicalDPIPoint @ 0x1C000C4C0
 * Callers:
 *     TransformPointBetweenCoordinateSpaces @ 0x1C000C420 (TransformPointBetweenCoordinateSpaces.c)
 *     ?LogicalCursorPosFromDpiAwarenessContext@CMouseProcessor@@QEAA?AUtagPOINT@@K@Z @ 0x1C000D4B8 (-LogicalCursorPosFromDpiAwarenessContext@CMouseProcessor@@QEAA-AUtagPOINT@@K@Z.c)
 *     ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x1C00557D8 (-ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z.c)
 *     ?HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtagPOINT@@I@Z @ 0x1C01F7C08 (-HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtag.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C004D320 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     Is_MonitorFromPointSupported @ 0x1C0059E6C (Is_MonitorFromPointSupported.c)
 *     ScaleDPIPt @ 0x1C0059E98 (ScaleDPIPt.c)
 *     GetMonitorRectForDpi @ 0x1C005A3D8 (GetMonitorRectForDpi.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PhysicalToLogicalDPIPoint(_QWORD *a1, _QWORD *a2, unsigned int a3, __int64 *a4)
{
  unsigned int CurrentThreadDpiAwarenessContext; // edi
  __int64 v9; // rbx
  unsigned __int16 v10; // di
  __int64 v11; // [rsp+30h] [rbp-28h] BYREF
  __int64 v12[3]; // [rsp+40h] [rbp-18h] BYREF

  CurrentThreadDpiAwarenessContext = a3;
  if ( !a3 )
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
  if ( (CurrentThreadDpiAwarenessContext & 0xF) == 2 || (int)Is_MonitorFromPointSupported() < 0 )
  {
    *a1 = *a2;
    return 0LL;
  }
  else
  {
    if ( a4 && (v9 = *a4) != 0 || (!qword_1C0296030 ? (v9 = 0LL) : (v9 = qword_1C0296030(*a2, 2LL, 18LL)), a4) )
      *a4 = v9;
    GetMonitorRectForDpi(&v11, v9, 0LL);
    v10 = (CurrentThreadDpiAwarenessContext >> 8) & 0x1FF;
    GetMonitorRectForDpi(v12, v9, v10);
    ScaleDPIPt((_DWORD)a1, (_DWORD)a2, v10, *(unsigned __int16 *)(*(_QWORD *)(v9 + 40) + 60LL), v12[0], v11);
    return 1LL;
  }
}
