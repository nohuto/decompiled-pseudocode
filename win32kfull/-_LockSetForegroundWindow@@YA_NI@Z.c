// write access to const memory has been detected, the output may be wrong!
char __fastcall _LockSetForegroundWindow(__int64 a1)
{
  int v1; // esi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v3; // rbx
  int v4; // edx
  bool v5; // bp
  int v6; // r8d
  char v7; // di
  int v8; // r8d
  int v9; // r9d
  int v10; // esi
  char v11; // dl
  int v13; // [rsp+48h] [rbp-30h]
  int v14; // [rsp+50h] [rbp-28h]
  int v15; // [rsp+58h] [rbp-20h]

  v1 = a1;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  v3 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
    v3 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
  v5 = (unsigned int)IsImmersiveAppRestricted(v3) != 0;
  v7 = 1;
  LOBYTE(v4) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v8 = gppiLockSFW;
    if ( gppiLockSFW )
      v9 = *(_DWORD *)(gppiLockSFW + 56LL);
    else
      v9 = 0;
    LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    v15 = v9;
    v14 = (*(_DWORD *)(v3 + 812) >> 4) & 3;
    v13 = *(_DWORD *)(v3 + 56);
    WPP_RECORDER_AND_TRACE_SF_DDdD(WPP_GLOBAL_Control->AttachedDevice, v4, v8, v9);
  }
  v10 = v1 - 1;
  if ( v10 )
  {
    if ( v10 == 1 && v3 == gppiLockSFW )
    {
      gppiLockSFW = 0LL;
      LOBYTE(v4) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
                && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      if ( (_BYTE)v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v6) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v4,
          v6,
          67,
          4,
          2,
          67,
          (__int64)&WPP_1f5084c5bd003b11755bdb3c506305c0_Traceguids);
      }
      return 1;
    }
  }
  else if ( !gppiLockSFW && !v5 && CanForceForeground((const struct tagPROCESSINFO *)v3) )
  {
    gppiLockSFW = v3;
    v11 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_D(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v11,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        (__int64)gFullLog,
        4u,
        2u,
        0x42u,
        (__int64)&WPP_1f5084c5bd003b11755bdb3c506305c0_Traceguids,
        *(_DWORD *)(v3 + 56),
        v13,
        v14,
        v15);
    return 1;
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
  {
    v7 = 0;
  }
  if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_D(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v7,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (__int64)gFullLog,
      4u,
      2u,
      0x44u,
      (__int64)&WPP_1f5084c5bd003b11755bdb3c506305c0_Traceguids,
      *(_DWORD *)(v3 + 56),
      v13,
      v14,
      v15);
  UserSetLastError(5);
  return 0;
}
