/*
 * XREFs of NtUserPerMonitorDPIPhysicalToLogicalPoint @ 0x1C02000C0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C005BA00 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 *     DCEPtInRect @ 0x1C00FBB98 (DCEPtInRect.c)
 */

__int64 __fastcall NtUserPerMonitorDPIPhysicalToLogicalPoint(__int64 a1, unsigned __int64 *a2)
{
  __int64 v4; // rcx
  _QWORD *v5; // rdx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  unsigned int v7; // esi
  unsigned __int64 v8; // r8
  unsigned __int64 v10; // [rsp+70h] [rbp+8h] BYREF
  __int64 v11; // [rsp+80h] [rbp+18h] BYREF
  __int64 v12; // [rsp+88h] [rbp+20h] BYREF

  EnterSharedCrit(0LL, 1LL);
  if ( !a1 || (a1 = ValidateHwnd(a1)) != 0 )
  {
    v10 = 0LL;
    v5 = a2;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      v5 = (_QWORD *)MmUserProbeAddress;
    *v5 = *v5;
    v10 = *a2;
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(MmUserProbeAddress);
    v7 = CurrentThreadDpiAwarenessContext;
    if ( a1 )
    {
      if ( (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 480) + 224LL) & 1) == 0 )
        W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      v11 = GuessMonitorOverrideForCoordinateConversions(v10, *(unsigned int *)(*(_QWORD *)(a1 + 40) + 288LL), 1LL);
      PhysicalToLogicalDPIPoint(&v10, &v10, *(unsigned int *)(*(_QWORD *)(a1 + 40) + 288LL), &v11);
      LODWORD(a1) = DCEPtInRect((_DWORD *)(*(_QWORD *)(a1 + 40) + 88LL), v10);
    }
    else
    {
      v12 = GuessMonitorOverrideForCoordinateConversions(v10, CurrentThreadDpiAwarenessContext, 1LL);
      PhysicalToLogicalDPIPoint(&v10, &v10, v7, &v12);
      LODWORD(a1) = 1;
      v8 = v10;
    }
    if ( (_DWORD)a1 )
    {
      *a2 = v8;
      LODWORD(a1) = 1;
    }
  }
  UserSessionSwitchLeaveCrit(v4);
  return (int)a1;
}
