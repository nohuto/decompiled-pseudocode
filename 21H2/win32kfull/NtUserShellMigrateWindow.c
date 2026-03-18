/*
 * XREFs of NtUserShellMigrateWindow @ 0x1C01FEC10
 * Callers:
 *     <none>
 * Callees:
 *     ValidateHwndIAM @ 0x1C0022C00 (ValidateHwndIAM.c)
 *     IAMThreadAccessGranted @ 0x1C0023254 (IAMThreadAccessGranted.c)
 *     _IsTopLevelWindow @ 0x1C006D904 (_IsTopLevelWindow.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C00705E0 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     IsHungWindow @ 0x1C0076670 (IsHungWindow.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C00788F8 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0079D94 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A2750 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ?MigrateWindowAsync@ShellWindowPos@@YA?AW4PositionWindowAsyncResult@1@PEAUtagWND@@PEAUHMONITOR__@@K@Z @ 0x1C0236474 (-MigrateWindowAsync@ShellWindowPos@@YA-AW4PositionWindowAsyncResult@1@PEAUtagWND@@PEAUHMONITOR__.c)
 */

__int64 __fastcall NtUserShellMigrateWindow(__int64 a1, __int64 a2, unsigned int a3)
{
  char v5; // di
  _WORD *v7; // rdx
  int v8; // r8d
  int v9; // r9d
  __int64 v10; // rbx
  int v11; // edx
  __int64 v12; // rcx
  __int64 v13; // rax
  int v14; // r8d
  int v15; // r9d
  struct tagWND *v16; // rsi
  PDEVICE_OBJECT v17; // rcx
  int v18; // edx
  int v19; // r8d
  int v20; // r9d
  PDEVICE_OBJECT v21; // rcx
  int v22; // edx
  __int64 v23; // r8
  __int64 v24; // rcx
  __int16 v26; // [rsp+30h] [rbp-38h]
  __int16 v27; // [rsp+30h] [rbp-38h]
  char v28; // [rsp+40h] [rbp-28h]
  char v29; // [rsp+88h] [rbp+20h] BYREF

  v5 = 1;
  EnterCrit(0LL, 1LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v29);
  v10 = 0LL;
  if ( !IAMThreadAccessGranted(gptiCurrent) )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200000) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v5 = 0;
    }
    if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v11 = 52;
      LOBYTE(v11) = v5;
      LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v11,
        v8,
        v9,
        2,
        22,
        52,
        (__int64)&WPP_1a1985ee69fe3ed3820bb61b1edf259e_Traceguids);
    }
    v12 = 5LL;
    goto LABEL_66;
  }
  v13 = ValidateHwndIAM(a1);
  v16 = (struct tagWND *)v13;
  if ( !v13 )
  {
    v17 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200000) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v5 = 0;
    }
    LOBYTE(v14) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v5 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_20;
    v18 = 53;
    goto LABEL_18;
  }
  if ( !IsTopLevelWindow(v13) )
  {
    v17 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200000) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v5 = 0;
    }
    LOBYTE(v14) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v5 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_20;
    v18 = 54;
    goto LABEL_18;
  }
  if ( *((_QWORD *)v16 + 2) == gptiCurrent )
  {
    v17 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200000) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v5 = 0;
    }
    LOBYTE(v14) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v5 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_20;
    v18 = 55;
LABEL_18:
    v28 = a1;
LABEL_19:
    v26 = v18;
    LOBYTE(v18) = v5;
    WPP_RECORDER_AND_TRACE_SF_q(
      v17->AttachedDevice,
      v18,
      v14,
      v15,
      2,
      22,
      v26,
      (__int64)&WPP_1a1985ee69fe3ed3820bb61b1edf259e_Traceguids,
      v28);
LABEL_20:
    v12 = 87LL;
LABEL_66:
    UserSetLastError(v12, (__int64)v7);
    goto LABEL_67;
  }
  if ( (unsigned int)IsHungWindow(v16) )
  {
    v21 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200000) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v5 = 0;
    }
    LOBYTE(v19) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v5 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_46;
    v22 = 56;
LABEL_45:
    v27 = v22;
    LOBYTE(v22) = v5;
    WPP_RECORDER_AND_TRACE_SF_q(
      v21->AttachedDevice,
      v22,
      v19,
      v20,
      2,
      22,
      v27,
      (__int64)&WPP_1a1985ee69fe3ed3820bb61b1edf259e_Traceguids,
      a1);
LABEL_46:
    v12 = 5023LL;
    goto LABEL_66;
  }
  v7 = *(_WORD **)(*((_QWORD *)v16 + 17) + 8LL);
  if ( *v7 == *(_WORD *)(gpsi + 900LL) )
  {
    v21 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200000) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v5 = 0;
    }
    LOBYTE(v19) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v5 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_46;
    v22 = 57;
    goto LABEL_45;
  }
  if ( !ValidateHmonitor(a2, v7) )
  {
    v17 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200000) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v5 = 0;
    }
    LOBYTE(v14) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v5 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_20;
    v18 = 58;
    v28 = a2;
    goto LABEL_19;
  }
  if ( (unsigned int)ShellWindowPos::MigrateWindowAsync(v16, a2, a3) == 1 )
  {
    v12 = 14LL;
    goto LABEL_66;
  }
  v10 = 1LL;
LABEL_67:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v29, (__int64)v7, v23);
  UserSessionSwitchLeaveCrit(v24);
  return v10;
}
