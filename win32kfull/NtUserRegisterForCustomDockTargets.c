/*
 * XREFs of NtUserRegisterForCustomDockTargets @ 0x1C01DA3D0
 * Callers:
 *     <none>
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C003C2A4 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C003E064 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C003E900 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     IAMThreadAccessGranted @ 0x1C009A2DC (IAMThreadAccessGranted.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C009DC7C (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     LeaveEditionCrit @ 0x1C00F5EA0 (LeaveEditionCrit.c)
 *     ?SHData_SetCustomDockTargetWindow@MOVESIZEDATA@@QEAA_NPEBUtagWND@@@Z @ 0x1C023D518 (-SHData_SetCustomDockTargetWindow@MOVESIZEDATA@@QEAA_NPEBUtagWND@@@Z.c)
 */

_BOOL8 __fastcall NtUserRegisterForCustomDockTargets(__int64 a1)
{
  __int64 v2; // r9
  char v3; // dl
  int v4; // eax
  int v5; // edx
  int v6; // r8d
  int v7; // r9d
  int v8; // ecx
  const struct tagWND *v9; // rdx
  int v10; // r8d
  int v11; // r9d
  __int64 v12; // rax
  MOVESIZEDATA *v13; // rcx
  PDEVICE_OBJECT v14; // rcx
  __int16 v15; // ax
  bool v16; // al
  BOOL v17; // ebx
  char v19; // [rsp+78h] [rbp+10h] BYREF

  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v19);
  v3 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_q(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v3,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      v2,
      4u,
      1u,
      0x3Du,
      (__int64)&WPP_dad53d594ec237dec63fae8c26dffb95_Traceguids,
      a1);
  LOBYTE(v4) = IAMThreadAccessGranted(gptiCurrent);
  if ( !v4 )
  {
    LOBYTE(v5) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
    if ( (_BYTE)v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v5,
        v6,
        v7,
        3,
        1,
        63,
        (__int64)&WPP_dad53d594ec237dec63fae8c26dffb95_Traceguids);
    }
    v8 = 5;
    goto LABEL_52;
  }
  v9 = (const struct tagWND *)ValidateHwnd(a1);
  if ( !v9 )
  {
    LOBYTE(v9) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
    if ( (_BYTE)v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v10) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)v9,
        v10,
        v11,
        3,
        1,
        64,
        (__int64)&WPP_dad53d594ec237dec63fae8c26dffb95_Traceguids);
    }
    v8 = 87;
    goto LABEL_52;
  }
  if ( !gpqForeground || (v12 = *(_QWORD *)(gpqForeground + 128LL)) == 0 )
  {
    v14 = WPP_GLOBAL_Control;
    LOBYTE(v9) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
    LOBYTE(v10) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !(_BYTE)v9 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_51;
    v15 = 65;
LABEL_50:
    WPP_RECORDER_AND_TRACE_SF_(
      v14->AttachedDevice,
      (_DWORD)v9,
      v10,
      v11,
      3,
      1,
      v15,
      (__int64)&WPP_dad53d594ec237dec63fae8c26dffb95_Traceguids);
LABEL_51:
    v8 = 5023;
LABEL_52:
    v17 = 0;
    UserSetLastError(v8);
    goto LABEL_53;
  }
  v13 = *(MOVESIZEDATA **)(*(_QWORD *)(v12 + 16) + 672LL);
  if ( !v13 )
  {
    v14 = WPP_GLOBAL_Control;
    LOBYTE(v9) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
    LOBYTE(v10) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !(_BYTE)v9 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_51;
    v15 = 66;
    goto LABEL_50;
  }
  v16 = MOVESIZEDATA::SHData_SetCustomDockTargetWindow(v13, v9);
  v17 = v16;
  if ( !v16 )
    goto LABEL_51;
LABEL_53:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v19);
  LeaveEditionCrit((__int64)&v19);
  return v17;
}
