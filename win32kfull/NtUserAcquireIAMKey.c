__int64 __fastcall NtUserAcquireIAMKey(_QWORD *Address)
{
  int v2; // r8d
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rax
  int v6; // ebx
  __int64 v7; // rcx
  PDEVICE_OBJECT v9; // r9
  bool v10; // cl
  int v11; // edx
  __int16 v12; // [rsp+30h] [rbp-28h]

  EnterCrit(0LL, 0LL);
  v3 = *(_QWORD *)(gptiCurrent + 456LL);
  v4 = *(_QWORD *)(v3 + 8);
  v5 = *(_QWORD *)(v4 + 176);
  v6 = 0;
  if ( !v5 || !*(_QWORD *)(v4 + 168) )
  {
    v9 = WPP_GLOBAL_Control;
    v10 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    LOBYTE(v2) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v10 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_41;
    v11 = 26;
    goto LABEL_40;
  }
  if ( *(_QWORD *)(gptiCurrent + 424LL) != v5 )
  {
    v9 = WPP_GLOBAL_Control;
    v10 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    LOBYTE(v2) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v10 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_41;
    v11 = 27;
    goto LABEL_40;
  }
  if ( *(_QWORD *)(v3 + 280) )
  {
    v9 = WPP_GLOBAL_Control;
    v10 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    LOBYTE(v2) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v10 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_41;
    v11 = 28;
    goto LABEL_40;
  }
  if ( !*(_DWORD *)(v3 + 264) )
  {
    v9 = WPP_GLOBAL_Control;
    v10 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    LOBYTE(v2) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v10 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_41;
    v11 = 29;
LABEL_40:
    v12 = v11;
    LOBYTE(v11) = v10;
    WPP_RECORDER_AND_TRACE_SF_(
      v9->AttachedDevice,
      v11,
      v2,
      (_DWORD)v9,
      4,
      2,
      v12,
      (__int64)&WPP_dad53d594ec237dec63fae8c26dffb95_Traceguids);
LABEL_41:
    UserSetLastError(5);
    goto LABEL_7;
  }
  ProbeForWrite(Address, 8uLL, 4u);
  *Address = *(_QWORD *)(v3 + 272);
  *(_DWORD *)(v3 + 264) = 0;
  *(_QWORD *)(v3 + 280) = gptiCurrent;
  v6 = 1;
LABEL_7:
  UserSessionSwitchLeaveCrit(v7);
  return v6;
}
