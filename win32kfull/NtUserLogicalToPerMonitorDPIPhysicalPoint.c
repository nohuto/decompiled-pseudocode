/*
 * XREFs of NtUserLogicalToPerMonitorDPIPhysicalPoint @ 0x1C01D7120
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     ?DCEPtInRect@@YA_NPEBUtagRECT@@UtagPOINT@@@Z @ 0x1C0144B14 (-DCEPtInRect@@YA_NPEBUtagRECT@@UtagPOINT@@@Z.c)
 */

__int64 __fastcall NtUserLogicalToPerMonitorDPIPhysicalPoint(__int64 a1, struct tagPOINT *a2, __int64 a3)
{
  __int64 v4; // rbx
  __int64 v5; // rcx
  _BYTE *v6; // rdx
  unsigned int CurrentThreadDpiAwarenessContext; // esi
  __int64 v8; // r9
  struct tagPOINT v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r8
  __int64 *v13; // r9
  int v15; // [rsp+20h] [rbp-58h]
  __int64 v16; // [rsp+40h] [rbp-38h] BYREF
  struct tagPOINT v17; // [rsp+80h] [rbp+8h] BYREF
  struct tagPOINT v18; // [rsp+90h] [rbp+18h] BYREF
  __int64 v19; // [rsp+98h] [rbp+20h] BYREF

  v4 = a1;
  EnterSharedCrit(a1, a2, a3);
  if ( v4 )
  {
    v4 = ValidateHwnd(v4);
    if ( !v4 )
    {
      v15 = 0;
      goto LABEL_16;
    }
  }
  v15 = 0;
  v17 = 0LL;
  v6 = a2;
  if ( (unsigned __int64)a2 >= MmUserProbeAddress )
    v6 = (_BYTE *)MmUserProbeAddress;
  *v6 = *v6;
  v6[7] = v6[7];
  v17 = *a2;
  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(MmUserProbeAddress);
  if ( v4 )
  {
    if ( (unsigned __int8)ShouldVirtualizeWindowRect(v4, CurrentThreadDpiAwarenessContext) )
    {
      v18 = 0LL;
      TransformPointBetweenCoordinateSpaces(&v18, &v17, v4, 0LL);
      v9 = v18;
    }
    else
    {
      v9 = v17;
    }
    if ( !DCEPtInRect((const struct tagRECT *)(*(_QWORD *)(v4 + 40) + 88LL), v9) )
      goto LABEL_14;
    v19 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))GuessMonitorOverrideForCoordinateConversions)(
            v17,
            *(unsigned int *)(v10 + 288),
            0LL,
            v11);
    v12 = *(unsigned int *)(*(_QWORD *)(v4 + 40) + 288LL);
    v13 = &v19;
  }
  else
  {
    v16 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))GuessMonitorOverrideForCoordinateConversions)(
            v17,
            CurrentThreadDpiAwarenessContext,
            0LL,
            v8);
    v13 = &v16;
    v12 = CurrentThreadDpiAwarenessContext;
  }
  LogicalToPhysicalDPIPoint(&v17, &v17, v12, v13);
  v15 = 1;
LABEL_14:
  if ( v15 == 1 )
  {
    *a2 = v17;
    v15 = 1;
  }
LABEL_16:
  UserSessionSwitchLeaveCrit(v5);
  return v15;
}
