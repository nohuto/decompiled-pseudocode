/*
 * XREFs of NtUserInjectMouseInput @ 0x1C01317D0
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPoolWithQuota @ 0x1C00295D0 (Win32AllocPoolWithQuota.c)
 *     Win32FreePool @ 0x1C002ADC0 (Win32FreePool.c)
 *     EnterCrit @ 0x1C002EB00 (EnterCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0036190 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C00388BC (UserSetLastError.c)
 *     WPP_RECORDER_SF_ @ 0x1C003CBE8 (WPP_RECORDER_SF_.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C00413C0 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C00414F4 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     WPP_RECORDER_SF_d @ 0x1C0046B08 (WPP_RECORDER_SF_d.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C0057C60 (RawInputManagerDeviceObjectResolveHandle.c)
 *     memmove @ 0x1C00CF880 (memmove.c)
 *     WPP_RECORDER_SF_qd @ 0x1C0137184 (WPP_RECORDER_SF_qd.c)
 *     RIMIDECheckCurrentProcessForInjectionPermissions @ 0x1C01671D8 (RIMIDECheckCurrentProcessForInjectionPermissions.c)
 *     RIMIDECreatePseudoMouseOrKeyboardDevice @ 0x1C0168340 (RIMIDECreatePseudoMouseOrKeyboardDevice.c)
 *     RIMIDEInjectMouseFromMouseInputStruct @ 0x1C0169844 (RIMIDEInjectMouseFromMouseInputStruct.c)
 *     UserGetLastError @ 0x1C01D1DBC (UserGetLastError.c)
 */

__int64 __fastcall NtUserInjectMouseInput(char *Src, unsigned int a2, __int64 a3, __int64 a4)
{
  int v5; // ebx
  __int64 v6; // rsi
  PVOID v7; // r14
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rsi
  void *v13; // rax
  __int64 v14; // rsi
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // eax
  int v19; // r9d
  int v20; // eax
  int v21; // edx
  NTSTATUS v22; // r13d
  char LastError; // al
  int v24; // edx
  char v26; // [rsp+30h] [rbp-68h]
  __int64 v27; // [rsp+50h] [rbp-48h]
  __int64 *v28[8]; // [rsp+58h] [rbp-40h] BYREF
  unsigned int v29; // [rsp+A8h] [rbp+10h]
  _DWORD *v30; // [rsp+B0h] [rbp+18h] BYREF
  __int64 CurrentProcessWin32Process; // [rsp+B8h] [rbp+20h]

  v29 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v26 = a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qd(
      (_DWORD)gBaseLog,
      a2,
      21,
      19,
      (__int64)&WPP_72969ae93fdf3d9d80b76793b3525300_Traceguids,
      (char)Src,
      v26);
  }
  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(v28, "InjectMouseInput", 0LL, a4);
  v5 = 1;
  EnterCrit(0, 1);
  v6 = 0LL;
  v7 = 0LL;
  v30 = 0LL;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v8);
  if ( v29 - 1 > 0xF )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = 2;
      WPP_RECORDER_SF_d((_DWORD)gBaseLog, v9, 21, 20, (__int64)&WPP_72969ae93fdf3d9d80b76793b3525300_Traceguids, v29);
    }
    v11 = 87LL;
    goto LABEL_40;
  }
  if ( !(unsigned int)RIMIDECheckCurrentProcessForInjectionPermissions(0LL) )
  {
    v11 = 5LL;
LABEL_40:
    v5 = 0;
    goto LABEL_41;
  }
  v12 = 32LL * v29;
  if ( v12 )
  {
    if ( ((PsGetCurrentProcessWow64Process(v10) == 0 ? 3 : 0) & (unsigned __int8)Src) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)&Src[v12] > MmUserProbeAddress || &Src[v12] < Src )
      *(_BYTE *)MmUserProbeAddress = 0;
  }
  v13 = (void *)Win32AllocPoolWithQuota(v12, 0x6D697355u);
  v27 = (__int64)v13;
  if ( !v13 )
    ExRaiseStatus(-1073741801);
  memmove(v13, Src, v12);
  v14 = CurrentProcessWin32Process;
  if ( *(_QWORD *)(CurrentProcessWin32Process + 904) == -1LL )
  {
    v15 = RIMIDECreatePseudoMouseOrKeyboardDevice(0LL, CurrentProcessWin32Process + 904);
    if ( v15 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v16) = 2;
        WPP_RECORDER_SF_d((_DWORD)gBaseLog, v16, 21, 22, (__int64)&WPP_72969ae93fdf3d9d80b76793b3525300_Traceguids, v15);
      }
      v17 = 1359LL;
      goto LABEL_19;
    }
  }
  v18 = RawInputManagerDeviceObjectResolveHandle(*(char **)(v14 + 904), 3u, 1, (PVOID *)&v30);
  if ( v18 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v16) = 2;
      WPP_RECORDER_SF_d((_DWORD)gBaseLog, v16, 21, 23, (__int64)&WPP_72969ae93fdf3d9d80b76793b3525300_Traceguids, v18);
    }
    v5 = 0;
    UserSetLastError(6LL, v16);
    v7 = v30;
    goto LABEL_20;
  }
  v7 = v30;
  if ( (v30[68] & 0x2000) == 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
LABEL_29:
      v17 = 87LL;
LABEL_19:
      v5 = 0;
      UserSetLastError(v17, v16);
LABEL_20:
      v6 = v27;
      goto LABEL_42;
    }
    v19 = 24;
LABEL_28:
    LOBYTE(v16) = 2;
    WPP_RECORDER_SF_((_DWORD)gBaseLog, v16, 21, v19, (__int64)&WPP_72969ae93fdf3d9d80b76793b3525300_Traceguids);
    goto LABEL_29;
  }
  if ( *((_BYTE *)v30 + 136) )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_29;
    v19 = 25;
    goto LABEL_28;
  }
  v6 = v27;
  v20 = RIMIDEInjectMouseFromMouseInputStruct(v30, v27, v29);
  v22 = v20;
  if ( v20 >= 0 )
    goto LABEL_42;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v21) = 2;
    WPP_RECORDER_SF_d((_DWORD)gBaseLog, v21, 21, 26, (__int64)&WPP_72969ae93fdf3d9d80b76793b3525300_Traceguids, v20);
  }
  v5 = 0;
  v11 = RtlNtStatusToDosError(v22);
LABEL_41:
  UserSetLastError(v11, v9);
LABEL_42:
  if ( v6 )
    Win32FreePool(v6);
  if ( v7 )
    ObfDereferenceObject(v7);
  if ( !v5 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LastError = UserGetLastError();
    LOBYTE(v24) = 2;
    WPP_RECORDER_SF_d(
      (_DWORD)gBaseLog,
      v24,
      21,
      27,
      (__int64)&WPP_72969ae93fdf3d9d80b76793b3525300_Traceguids,
      LastError);
  }
  UserSessionSwitchLeaveCrit();
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v28);
  return v5;
}
