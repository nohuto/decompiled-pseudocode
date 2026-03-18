/*
 * XREFs of NtUserLogicalToPerMonitorDPIPhysicalPoint @ 0x1C01F8DC0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     ?DCEPtInRect@@YA_NPEBUtagRECT@@UtagPOINT@@@Z @ 0x1C00F8768 (-DCEPtInRect@@YA_NPEBUtagRECT@@UtagPOINT@@@Z.c)
 */

__int64 __fastcall NtUserLogicalToPerMonitorDPIPhysicalPoint(__int64 a1, struct tagPOINT *a2, __int64 a3)
{
  __int64 v4; // rbx
  __int64 v5; // rcx
  _BYTE *v6; // rdx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  unsigned int v8; // esi
  struct tagPOINT v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r8
  __int64 *v12; // r9
  int v14; // [rsp+20h] [rbp-58h]
  __int64 v15; // [rsp+40h] [rbp-38h] BYREF
  struct tagPOINT v16; // [rsp+80h] [rbp+8h] BYREF
  struct tagPOINT v17; // [rsp+90h] [rbp+18h] BYREF
  __int64 v18; // [rsp+98h] [rbp+20h] BYREF

  v4 = a1;
  EnterSharedCrit(a1, a2, a3);
  if ( v4 )
  {
    v4 = ValidateHwnd(v4);
    if ( !v4 )
    {
      v14 = 0;
      goto LABEL_18;
    }
  }
  v14 = 0;
  v16 = 0LL;
  v6 = a2;
  if ( (unsigned __int64)a2 >= MmUserProbeAddress )
    v6 = (_BYTE *)MmUserProbeAddress;
  *v6 = *v6;
  v6[7] = v6[7];
  v16 = *a2;
  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(MmUserProbeAddress, v6);
  v8 = CurrentThreadDpiAwarenessContext;
  if ( v4 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 480) + 224LL) & 1) != 0
      || (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 480) + 224LL) & 0x20) != 0
      || (((unsigned __int16)(v8 >> 8) ^ (unsigned __int16)(*(_DWORD *)(*(_QWORD *)(v4 + 40) + 288LL) >> 8)) & 0x1FF) == 0 )
    {
      v9 = v16;
    }
    else
    {
      v17 = 0LL;
      TransformPointBetweenCoordinateSpaces(&v17, &v16, v4, 0LL);
      v9 = v17;
    }
    if ( !DCEPtInRect((const struct tagRECT *)(*(_QWORD *)(v4 + 40) + 88LL), v9) )
      goto LABEL_16;
    v18 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))GuessMonitorOverrideForCoordinateConversions)(
            v16,
            *(unsigned int *)(v10 + 288),
            0LL);
    v11 = *(unsigned int *)(*(_QWORD *)(v4 + 40) + 288LL);
    v12 = &v18;
  }
  else
  {
    v15 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))GuessMonitorOverrideForCoordinateConversions)(
            v16,
            CurrentThreadDpiAwarenessContext,
            0LL);
    v12 = &v15;
    v11 = v8;
  }
  LogicalToPhysicalDPIPoint(&v16, &v16, v11, v12);
  v14 = 1;
LABEL_16:
  if ( v14 == 1 )
  {
    *a2 = v16;
    v14 = 1;
  }
LABEL_18:
  UserSessionSwitchLeaveCrit(v5);
  return v14;
}
