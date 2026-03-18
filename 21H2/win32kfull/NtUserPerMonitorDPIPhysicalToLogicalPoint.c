/*
 * XREFs of NtUserPerMonitorDPIPhysicalToLogicalPoint @ 0x1C01FADC0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     ?DCEPtInRect@@YA_NPEBUtagRECT@@UtagPOINT@@@Z @ 0x1C00F8768 (-DCEPtInRect@@YA_NPEBUtagRECT@@UtagPOINT@@@Z.c)
 */

__int64 __fastcall NtUserPerMonitorDPIPhysicalToLogicalPoint(__int64 a1, struct tagPOINT *a2, __int64 a3)
{
  __int64 v4; // rbx
  __int64 v5; // rcx
  _BYTE *v6; // rdx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  unsigned int v8; // r14d
  struct tagPOINT v9; // r8
  struct tagPOINT v11; // [rsp+70h] [rbp+8h] BYREF
  __int64 v12; // [rsp+80h] [rbp+18h] BYREF
  __int64 v13; // [rsp+88h] [rbp+20h] BYREF

  v4 = a1;
  EnterSharedCrit(a1, a2, a3);
  if ( !v4 || (v4 = ValidateHwnd(v4)) != 0 )
  {
    v11 = 0LL;
    v6 = a2;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      v6 = (_BYTE *)MmUserProbeAddress;
    *v6 = *v6;
    v6[7] = v6[7];
    v11 = *a2;
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(MmUserProbeAddress, v6);
    v8 = CurrentThreadDpiAwarenessContext;
    if ( v4 )
    {
      if ( (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 480) + 224LL) & 1) == 0 )
        W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      v12 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))GuessMonitorOverrideForCoordinateConversions)(
              v11,
              *(unsigned int *)(*(_QWORD *)(v4 + 40) + 288LL),
              1LL);
      PhysicalToLogicalDPIPoint(&v11, &v11, *(unsigned int *)(*(_QWORD *)(v4 + 40) + 288LL), &v12);
      LODWORD(v4) = DCEPtInRect((const struct tagRECT *)(*(_QWORD *)(v4 + 40) + 88LL), v11);
    }
    else
    {
      v13 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))GuessMonitorOverrideForCoordinateConversions)(
              v11,
              CurrentThreadDpiAwarenessContext,
              1LL);
      PhysicalToLogicalDPIPoint(&v11, &v11, v8, &v13);
      LODWORD(v4) = 1;
      v9 = v11;
    }
    if ( (_DWORD)v4 )
    {
      *a2 = v9;
      LODWORD(v4) = 1;
    }
  }
  UserSessionSwitchLeaveCrit(v5);
  return (int)v4;
}
