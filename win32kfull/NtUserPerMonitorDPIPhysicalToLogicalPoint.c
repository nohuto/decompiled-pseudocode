/*
 * XREFs of NtUserPerMonitorDPIPhysicalToLogicalPoint @ 0x1C01D9320
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     ?DCEPtInRect@@YA_NPEBUtagRECT@@UtagPOINT@@@Z @ 0x1C0144B14 (-DCEPtInRect@@YA_NPEBUtagRECT@@UtagPOINT@@@Z.c)
 */

__int64 __fastcall NtUserPerMonitorDPIPhysicalToLogicalPoint(__int64 a1, struct tagPOINT *a2, __int64 a3)
{
  __int64 v4; // rbx
  __int64 v5; // rcx
  _BYTE *v6; // rdx
  __int64 v7; // r9
  unsigned int CurrentThreadDpiAwarenessContext; // r14d
  __int64 v9; // r9
  struct tagPOINT v10; // r8
  struct tagPOINT v12; // [rsp+70h] [rbp+8h] BYREF
  __int64 v13; // [rsp+80h] [rbp+18h] BYREF
  __int64 v14; // [rsp+88h] [rbp+20h] BYREF

  v4 = a1;
  EnterSharedCrit(a1, a2, a3);
  if ( !v4 || (v4 = ValidateHwnd(v4)) != 0 )
  {
    v12 = 0LL;
    v6 = a2;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      v6 = (_BYTE *)MmUserProbeAddress;
    *v6 = *v6;
    v6[7] = v6[7];
    v12 = *a2;
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(MmUserProbeAddress);
    if ( v4 )
    {
      ShouldVirtualizeWindowRect(v4, CurrentThreadDpiAwarenessContext);
      v13 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))GuessMonitorOverrideForCoordinateConversions)(
              v12,
              *(unsigned int *)(*(_QWORD *)(v4 + 40) + 288LL),
              1LL,
              v9);
      PhysicalToLogicalDPIPoint(&v12, &v12, *(unsigned int *)(*(_QWORD *)(v4 + 40) + 288LL), &v13);
      LODWORD(v4) = DCEPtInRect((const struct tagRECT *)(*(_QWORD *)(v4 + 40) + 88LL), v12);
    }
    else
    {
      v14 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))GuessMonitorOverrideForCoordinateConversions)(
              v12,
              CurrentThreadDpiAwarenessContext,
              1LL,
              v7);
      PhysicalToLogicalDPIPoint(&v12, &v12, CurrentThreadDpiAwarenessContext, &v14);
      LODWORD(v4) = 1;
      v10 = v12;
    }
    if ( (_DWORD)v4 )
    {
      *a2 = v10;
      LODWORD(v4) = 1;
    }
  }
  UserSessionSwitchLeaveCrit(v5);
  return (int)v4;
}
