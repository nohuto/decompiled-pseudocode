__int64 __fastcall NtUserShellMigrateWindow(__int64 a1, __int64 a2, unsigned int a3)
{
  char v5; // di
  int v7; // eax
  int v8; // r8d
  int v9; // r9d
  __int64 v10; // rbx
  int v11; // edx
  int v12; // ecx
  __int64 v13; // rax
  __int64 v14; // r9
  __int64 v15; // rsi
  PDEVICE_OBJECT v16; // rcx
  char v17; // r8
  unsigned __int16 v18; // dx
  __int64 v19; // r8
  __int64 v20; // r9
  PDEVICE_OBJECT v21; // rcx
  char v22; // r8
  unsigned __int16 v23; // dx
  _WORD *v24; // rdx
  __int64 v25; // r9
  __int64 v26; // rcx
  char v28; // [rsp+88h] [rbp+20h] BYREF

  v5 = 1;
  EnterCrit(0LL, 1LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v28);
  LOBYTE(v7) = IAMThreadAccessGranted(gptiCurrent);
  v10 = 0LL;
  if ( !v7 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200000) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 3u )
    {
      v5 = 0;
    }
    if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v11 = 54;
      LOBYTE(v11) = v5;
      LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v11,
        v8,
        v9,
        3,
        22,
        54,
        (__int64)&WPP_dad53d594ec237dec63fae8c26dffb95_Traceguids);
    }
    v12 = 5;
    goto LABEL_65;
  }
  v13 = ValidateHwndIAM(a1);
  v15 = v13;
  if ( !v13 )
  {
    v16 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200000) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v5 = 0;
    }
    v17 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v5 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_19;
    v18 = 55;
LABEL_18:
    WPP_RECORDER_AND_TRACE_SF_q(
      (__int64)v16->AttachedDevice,
      v5,
      v17,
      v14,
      2u,
      0x16u,
      v18,
      (__int64)&WPP_dad53d594ec237dec63fae8c26dffb95_Traceguids,
      a1);
LABEL_19:
    v12 = 87;
LABEL_65:
    UserSetLastError(v12);
    goto LABEL_66;
  }
  if ( !IsTopLevelWindow(v13) )
  {
    v16 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200000) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v5 = 0;
    }
    v17 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v5 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_19;
    v18 = 56;
    goto LABEL_18;
  }
  if ( *(_QWORD *)(v15 + 16) == gptiCurrent )
  {
    v16 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200000) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v5 = 0;
    }
    v17 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v5 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_19;
    v18 = 57;
    goto LABEL_18;
  }
  if ( IsHungWindow((const struct tagTHREADINFO **)v15) )
  {
    v21 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200000) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v5 = 0;
    }
    v22 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v5 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_45;
    v23 = 58;
LABEL_44:
    WPP_RECORDER_AND_TRACE_SF_q(
      (__int64)v21->AttachedDevice,
      v5,
      v22,
      v20,
      2u,
      0x16u,
      v23,
      (__int64)&WPP_dad53d594ec237dec63fae8c26dffb95_Traceguids,
      a1);
LABEL_45:
    v12 = 5023;
    goto LABEL_65;
  }
  v24 = *(_WORD **)(*(_QWORD *)(v15 + 136) + 8LL);
  if ( *v24 == *(_WORD *)(gpsi + 900LL) )
  {
    v21 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200000) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v5 = 0;
    }
    v22 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v5 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_45;
    v23 = 59;
    goto LABEL_44;
  }
  if ( !ValidateHmonitor(a2, v24, v19, v20) )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200000) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v5 = 0;
    }
    if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_q(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v5,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        v25,
        2u,
        0x16u,
        0x3Cu,
        (__int64)&WPP_dad53d594ec237dec63fae8c26dffb95_Traceguids,
        a2);
    goto LABEL_19;
  }
  if ( (unsigned int)ShellWindowPos::MigrateWindowAsync(v15, a2, a3) == 1 )
  {
    v12 = 14;
    goto LABEL_65;
  }
  v10 = 1LL;
LABEL_66:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v28);
  UserSessionSwitchLeaveCrit(v26);
  return v10;
}
