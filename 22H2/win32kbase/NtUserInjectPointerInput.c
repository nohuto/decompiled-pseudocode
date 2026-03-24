/*
 * XREFs of NtUserInjectPointerInput @ 0x1C0131EC0
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPoolWithQuota @ 0x1C002AA40 (Win32AllocPoolWithQuota.c)
 *     Win32FreePool @ 0x1C002C230 (Win32FreePool.c)
 *     EnterCrit @ 0x1C002FF70 (EnterCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0037600 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C0039D2C (UserSetLastError.c)
 *     WPP_RECORDER_SF_ @ 0x1C003E058 (WPP_RECORDER_SF_.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C0042830 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C0042964 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     WPP_RECORDER_SF_d @ 0x1C0047F78 (WPP_RECORDER_SF_d.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C0058C60 (RawInputManagerDeviceObjectResolveHandle.c)
 *     WPP_RECORDER_SF_qqd @ 0x1C00AC264 (WPP_RECORDER_SF_qqd.c)
 *     memmove @ 0x1C00CF9C0 (memmove.c)
 *     WPP_RECORDER_SF_Dd @ 0x1C013732C (WPP_RECORDER_SF_Dd.c)
 *     RIMIDECheckCurrentProcessForInjectionPermissions @ 0x1C0167108 (RIMIDECheckCurrentProcessForInjectionPermissions.c)
 *     RIMIDEInjectHIDReportFromPointerInfo @ 0x1C0168DEC (RIMIDEInjectHIDReportFromPointerInfo.c)
 *     UserGetLastError @ 0x1C01D1CEC (UserGetLastError.c)
 */

__int64 __fastcall NtUserInjectPointerInput(char *a1, char *a2, unsigned int a3, __int64 a4)
{
  __int64 v4; // r15
  int v6; // ebx
  _QWORD *v7; // r13
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // r9d
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r12
  int *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r12
  int v19; // ecx
  int v20; // r9d
  __int64 v21; // rcx
  unsigned int v22; // ecx
  int v23; // eax
  int v24; // edx
  NTSTATUS v25; // r15d
  char LastError; // al
  int v27; // edx
  char v29; // [rsp+28h] [rbp-70h]
  char v30; // [rsp+30h] [rbp-68h]
  int *v31; // [rsp+50h] [rbp-48h]
  PVOID Object; // [rsp+58h] [rbp-40h] BYREF
  __int64 *v33[2]; // [rsp+60h] [rbp-38h] BYREF
  char *Src; // [rsp+A8h] [rbp+10h]
  int v35; // [rsp+B8h] [rbp+20h]

  Src = a2;
  v4 = a3;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v30 = (char)a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qqd(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      (_DWORD)a2,
      21,
      37,
      (__int64)&WPP_72969ae93fdf3d9d80b76793b3525300_Traceguids,
      (char)a1,
      v30,
      a3);
  }
  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(v33, "InjectPointerInput", 0LL, a4);
  v6 = 1;
  EnterCrit(0, 1);
  v7 = 0LL;
  Object = 0LL;
  if ( (unsigned int)RIMIDECheckCurrentProcessForInjectionPermissions(0LL) )
  {
    if ( !(_DWORD)v4 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v10 = 38;
LABEL_54:
        LOBYTE(v8) = 2;
        WPP_RECORDER_SF_(
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          v8,
          21,
          v10,
          (__int64)&WPP_72969ae93fdf3d9d80b76793b3525300_Traceguids);
        goto LABEL_55;
      }
      goto LABEL_55;
    }
    v11 = RawInputManagerDeviceObjectResolveHandle(a1, 3u, 1, &Object);
    if ( v11 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v12) = 2;
        WPP_RECORDER_SF_d(
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          v12,
          21,
          39,
          (__int64)&WPP_72969ae93fdf3d9d80b76793b3525300_Traceguids,
          v11);
      }
      v6 = 0;
      UserSetLastError(6LL, v12);
      v7 = Object;
      goto LABEL_57;
    }
    v7 = Object;
    v8 = 0x2000LL;
    if ( (*((_DWORD *)Object + 68) & 0x2000) == 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v10 = 40;
        goto LABEL_54;
      }
LABEL_55:
      v9 = 87LL;
      goto LABEL_56;
    }
    if ( (*((_DWORD *)Object + 72) & 0x80u) == 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v10 = 41;
        goto LABEL_54;
      }
      goto LABEL_55;
    }
    v13 = *((_QWORD *)Object + 71);
    v14 = *(unsigned int *)(v13 + 312);
    if ( (v14 & 8) == 0 || (v14 & 0x2000) != 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v10 = 42;
        goto LABEL_54;
      }
      goto LABEL_55;
    }
    v35 = *(_DWORD *)(v13 + 24);
    v15 = 152 * v4;
    if ( 152 * v4 )
    {
      if ( ((PsGetCurrentProcessWow64Process(v14) == 0 ? 3 : 0) & (unsigned __int8)Src) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)&Src[v15] > MmUserProbeAddress || &Src[v15] < Src )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
    v16 = (int *)Win32AllocPoolWithQuota(152 * v4, 0x74697355u);
    v31 = v16;
    if ( !v16 )
      ExRaiseStatus(-1073741801);
    memmove(v16, Src, 152 * v4);
    v18 = (__int64)v31;
    v19 = *v31;
    if ( *v31 == 3 )
    {
      LOBYTE(v19) = v35;
      if ( v35 != 5 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
LABEL_34:
          v6 = 0;
          v21 = 87LL;
          goto LABEL_35;
        }
        v20 = 44;
        goto LABEL_32;
      }
      if ( (_DWORD)v4 != 1 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_34;
        v20 = 45;
        v29 = v4;
        goto LABEL_33;
      }
LABEL_44:
      v23 = RIMIDEInjectHIDReportFromPointerInfo(v7, v31, (unsigned int)v4);
      v25 = v23;
      if ( v23 >= 0 )
        goto LABEL_58;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v24) = 2;
        WPP_RECORDER_SF_d(
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          v24,
          21,
          49,
          (__int64)&WPP_72969ae93fdf3d9d80b76793b3525300_Traceguids,
          v23);
      }
      v6 = 0;
      v21 = RtlNtStatusToDosError(v25);
LABEL_35:
      UserSetLastError(v21, v17);
      goto LABEL_58;
    }
    if ( v19 == 2 )
    {
      LOBYTE(v19) = v35;
      if ( v35 == 3 )
      {
        v22 = *(_DWORD *)(v7[71] + 720LL);
        if ( (unsigned int)v4 > v22 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v17) = 2;
            WPP_RECORDER_SF_Dd(
              WPP_MAIN_CB.Queue.ListEntry.Flink,
              v17,
              21,
              47,
              (__int64)&WPP_72969ae93fdf3d9d80b76793b3525300_Traceguids,
              v4,
              v22);
          }
          goto LABEL_34;
        }
        goto LABEL_44;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_34;
      v20 = 46;
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_34;
      v20 = 48;
    }
LABEL_32:
    v29 = v19;
LABEL_33:
    LOBYTE(v17) = 2;
    WPP_RECORDER_SF_d(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      v17,
      21,
      v20,
      (__int64)&WPP_72969ae93fdf3d9d80b76793b3525300_Traceguids,
      v29);
    goto LABEL_34;
  }
  v9 = 5LL;
LABEL_56:
  v6 = 0;
  UserSetLastError(v9, v8);
LABEL_57:
  v18 = 0LL;
LABEL_58:
  if ( v7 )
    ObfDereferenceObject(v7);
  if ( v18 )
    Win32FreePool(v18);
  if ( !v6 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LastError = UserGetLastError();
    LOBYTE(v27) = 2;
    WPP_RECORDER_SF_d(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      v27,
      21,
      50,
      (__int64)&WPP_72969ae93fdf3d9d80b76793b3525300_Traceguids,
      LastError);
  }
  UserSessionSwitchLeaveCrit();
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v33);
  return v6;
}
