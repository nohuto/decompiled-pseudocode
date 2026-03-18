/*
 * XREFs of NtUserLogicalToPerMonitorDPIPhysicalPoint @ 0x1C01D60F0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     ?DCEPtInRect@@YA_NPEBUtagRECT@@UtagPOINT@@@Z @ 0x1C0151814 (-DCEPtInRect@@YA_NPEBUtagRECT@@UtagPOINT@@@Z.c)
 */

__int64 __fastcall NtUserLogicalToPerMonitorDPIPhysicalPoint(__int64 a1, struct tagPOINT *a2, __int64 a3)
{
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  _BYTE *v9; // rdx
  unsigned int CurrentThreadDpiAwarenessContext; // esi
  __int64 v11; // r9
  struct tagPOINT v12; // rdx
  __int64 v13; // r8
  __int64 *v14; // r9
  int v16; // [rsp+20h] [rbp-58h]
  __int64 v17; // [rsp+40h] [rbp-38h] BYREF
  struct tagPOINT v18; // [rsp+80h] [rbp+8h] BYREF
  struct tagPOINT v19; // [rsp+90h] [rbp+18h] BYREF
  __int64 v20; // [rsp+98h] [rbp+20h] BYREF

  v4 = a1;
  EnterSharedCrit(a1, a2, a3);
  if ( v4 )
  {
    v4 = ValidateHwnd(v4);
    if ( !v4 )
    {
      v16 = 0;
      goto LABEL_16;
    }
  }
  v16 = 0;
  v18 = 0LL;
  v9 = a2;
  if ( (unsigned __int64)a2 >= MmUserProbeAddress )
    v9 = (_BYTE *)MmUserProbeAddress;
  *v9 = *v9;
  v9[7] = v9[7];
  v18 = *a2;
  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(MmUserProbeAddress);
  if ( v4 )
  {
    if ( (unsigned __int8)ShouldVirtualizeWindowRect(v4, CurrentThreadDpiAwarenessContext) )
    {
      v19 = 0LL;
      TransformPointBetweenCoordinateSpaces(&v19, &v18, v4, 0LL);
      v12 = v19;
    }
    else
    {
      v12 = v18;
    }
    if ( !DCEPtInRect((const struct tagRECT *)(*(_QWORD *)(v4 + 40) + 88LL), v12) )
      goto LABEL_14;
    v20 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))GuessMonitorOverrideForCoordinateConversions)(
            v18,
            *(unsigned int *)(v7 + 288),
            0LL,
            v8);
    v13 = *(unsigned int *)(*(_QWORD *)(v4 + 40) + 288LL);
    v14 = &v20;
  }
  else
  {
    v17 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))GuessMonitorOverrideForCoordinateConversions)(
            v18,
            CurrentThreadDpiAwarenessContext,
            0LL,
            v11);
    v14 = &v17;
    v13 = CurrentThreadDpiAwarenessContext;
  }
  LogicalToPhysicalDPIPoint(&v18, &v18, v13, v14);
  v16 = 1;
LABEL_14:
  if ( v16 == 1 )
  {
    *a2 = v18;
    v16 = 1;
  }
LABEL_16:
  UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
  return v16;
}
