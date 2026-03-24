/*
 * XREFs of NtUserLogicalToPerMonitorDPIPhysicalPoint @ 0x1C0161080
 * Callers:
 *     <none>
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C005B960 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     DCEPtInRect @ 0x1C00FB848 (DCEPtInRect.c)
 */

__int64 __fastcall NtUserLogicalToPerMonitorDPIPhysicalPoint(__int64 a1, unsigned __int64 *a2)
{
  __int64 v4; // rcx
  _QWORD *v5; // rdx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  unsigned int v7; // edi
  unsigned int v8; // edx
  int v9; // ecx
  int v10; // eax
  unsigned __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r8
  __int64 *v14; // r9
  int v16; // [rsp+20h] [rbp-58h]
  __int64 v17; // [rsp+40h] [rbp-38h] BYREF
  unsigned __int64 v18; // [rsp+80h] [rbp+8h] BYREF
  unsigned __int64 v19; // [rsp+90h] [rbp+18h] BYREF
  __int64 v20; // [rsp+98h] [rbp+20h] BYREF

  EnterSharedCrit(0LL, 1LL);
  if ( a1 )
  {
    a1 = ValidateHwnd(a1);
    if ( !a1 )
    {
      v16 = 0;
      goto LABEL_20;
    }
  }
  v16 = 0;
  v18 = 0LL;
  v5 = a2;
  if ( (unsigned __int64)a2 >= MmUserProbeAddress )
    v5 = (_QWORD *)MmUserProbeAddress;
  *v5 = *v5;
  v18 = *a2;
  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(MmUserProbeAddress);
  v7 = CurrentThreadDpiAwarenessContext;
  if ( a1 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 480) + 224LL) & 1) != 0
      || (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 480) + 224LL) & 0x20) != 0
      || (v8 = *(_DWORD *)(*(_QWORD *)(a1 + 40) + 288LL),
          (((unsigned __int16)(v7 >> 8) ^ (unsigned __int16)(v8 >> 8)) & 0x1FF) == 0)
      && ((v8 & 0xF) != 2 || (v8 & 0x20000000) == 0 ? (v9 = 0) : (v9 = 1),
          (v7 & 0xF) != 2 || (v7 & 0x20000000) == 0 ? (v10 = 0) : (v10 = 1),
          v9 == v10) )
    {
      v11 = v18;
    }
    else
    {
      v19 = 0LL;
      TransformPointBetweenCoordinateSpaces(&v19, &v18, a1, 0LL);
      v11 = v19;
    }
    if ( !DCEPtInRect((_DWORD *)(*(_QWORD *)(a1 + 40) + 88LL), v11) )
      goto LABEL_18;
    v20 = GuessMonitorOverrideForCoordinateConversions(v18, *(unsigned int *)(v12 + 288), 0LL);
    v13 = *(unsigned int *)(*(_QWORD *)(a1 + 40) + 288LL);
    v14 = &v20;
  }
  else
  {
    v17 = GuessMonitorOverrideForCoordinateConversions(v18, CurrentThreadDpiAwarenessContext, 0LL);
    v14 = &v17;
    v13 = v7;
  }
  LogicalToPhysicalDPIPoint(&v18, &v18, v13, v14);
  v16 = 1;
LABEL_18:
  if ( v16 == 1 )
  {
    *a2 = v18;
    v16 = 1;
  }
LABEL_20:
  UserSessionSwitchLeaveCrit(v4);
  return v16;
}
