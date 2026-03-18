/*
 * XREFs of EditionCreateWindowStationEntryPointEx @ 0x1C013BF60
 * Callers:
 *     EditionCreateWindowStationEntryPoint @ 0x1C006BA40 (EditionCreateWindowStationEntryPoint.c)
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0024460 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C00621E0 (PushW32ThreadLock.c)
 *     xxxCreateWindowStation @ 0x1C006B42C (xxxCreateWindowStation.c)
 *     ?RtlStringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x1C006BA8C (-RtlStringCchCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     PopW32ThreadLock @ 0x1C006BB00 (PopW32ThreadLock.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     ?ProbeAndDeepCaptureWinStaDesktopObjectAttributes@@YAJHPEAU_OBJECT_ATTRIBUTES@@AEAY0BAA@GAEAU1@AEAU_SECURITY_QUALITY_OF_SERVICE@@AEAPEAXAEAU_UNICODE_STRING@@AEAPEAG@Z @ 0x1C013B3F8 (-ProbeAndDeepCaptureWinStaDesktopObjectAttributes@@YAJHPEAU_OBJECT_ATTRIBUTES@@AEAY0BAA@GAEAU1@A.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C01410D8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

HANDLE __fastcall EditionCreateWindowStationEntryPointEx(
        struct _OBJECT_ATTRIBUTES *a1,
        ACCESS_MASK a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        unsigned __int64 a6,
        ULONG64 a7,
        int a8)
{
  ULONG64 v12; // rdi
  int v13; // ecx
  char *v14; // r8
  ULONG64 v15; // rdx
  _DWORD *v16; // rsi
  __int64 v17; // rdx
  void *v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  _OWORD *v21; // rcx
  _OWORD *v22; // rdx
  __int64 v23; // r8
  __int64 v24; // rax
  _OWORD *v25; // rcx
  _OWORD *v26; // rax
  unsigned __int16 *v27; // rdi
  NTSTATUS v28; // eax
  ULONG v29; // eax
  NTSTATUS v30; // r14d
  ULONG v31; // eax
  int v33; // [rsp+54h] [rbp-674h]
  void *v34; // [rsp+58h] [rbp-670h] BYREF
  HANDLE v35; // [rsp+60h] [rbp-668h] BYREF
  unsigned __int16 *v36; // [rsp+68h] [rbp-660h] BYREF
  NTSTATUS v37; // [rsp+70h] [rbp-658h]
  ACCESS_MASK v38; // [rsp+78h] [rbp-650h]
  unsigned int v39; // [rsp+80h] [rbp-648h]
  _DWORD *v40; // [rsp+88h] [rbp-640h]
  __int64 v41; // [rsp+90h] [rbp-638h]
  __int128 v42; // [rsp+98h] [rbp-630h] BYREF
  __int64 v43; // [rsp+A8h] [rbp-620h]
  __int128 v44; // [rsp+B0h] [rbp-618h] BYREF
  __int64 v45; // [rsp+C0h] [rbp-608h]
  __int128 v46; // [rsp+C8h] [rbp-600h] BYREF
  __int64 v47; // [rsp+D8h] [rbp-5F0h]
  int v48; // [rsp+E8h] [rbp-5E0h]
  char *v49; // [rsp+F0h] [rbp-5D8h]
  struct _UNICODE_STRING v50; // [rsp+F8h] [rbp-5D0h] BYREF
  struct _OBJECT_ATTRIBUTES v51; // [rsp+108h] [rbp-5C0h] BYREF
  _BYTE v52[792]; // [rsp+138h] [rbp-590h] BYREF
  struct _SECURITY_QUALITY_OF_SERVICE v53; // [rsp+450h] [rbp-278h] BYREF
  unsigned __int16 v54[272]; // [rsp+460h] [rbp-268h] BYREF

  v38 = a2;
  v41 = a3;
  v39 = a4;
  v12 = a7;
  memset(&v51, 0, sizeof(v51));
  *(_QWORD *)&v53.Length = 0LL;
  *(_DWORD *)&v53.ContextTrackingMode = 0;
  v34 = 0LL;
  v50 = 0LL;
  v40 = 0LL;
  v36 = 0LL;
  v44 = 0LL;
  v45 = 0LL;
  v46 = 0LL;
  v47 = 0LL;
  v35 = 0LL;
  EnterCrit(0LL, 0LL);
  if ( a7 >= MmUserProbeAddress )
    v12 = MmUserProbeAddress;
  v13 = *(_DWORD *)v12;
  v33 = *(_DWORD *)v12;
  v48 = *(_DWORD *)v12;
  v14 = *(char **)(v12 + 8);
  v49 = v14;
  if ( ((unsigned __int8)v14 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v15 = (ULONG64)&v14[(unsigned __int16)v13 + 2];
  if ( v15 <= (unsigned __int64)v14 || v15 >= MmUserProbeAddress )
    ExRaiseAccessViolation();
  if ( (unsigned __int16)v13 > HIWORD(v33) )
  {
    if ( (v13 & 1) == 0 )
      goto LABEL_23;
    goto LABEL_22;
  }
  if ( (v13 & 1) != 0 )
  {
LABEL_22:
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 702LL);
LABEL_23:
    ExRaiseAccessViolation();
  }
  RtlStringCchCopyNW((char *)v54, 9LL, v14, (unsigned __int64)(unsigned __int16)v13 >> 1);
  v16 = (_DWORD *)Win32AllocPoolWithQuotaZInit(792LL, 1702064981LL);
  v40 = v16;
  if ( v16 )
  {
    v21 = (_OWORD *)a6;
    if ( a6 + 792 < a6 || a6 + 792 > MmUserProbeAddress )
      v21 = (_OWORD *)MmUserProbeAddress;
    v22 = v52;
    v23 = 6LL;
    v24 = 6LL;
    do
    {
      *v22 = *v21;
      v22[1] = v21[1];
      v22[2] = v21[2];
      v22[3] = v21[3];
      v22[4] = v21[4];
      v22[5] = v21[5];
      v22[6] = v21[6];
      v22 += 8;
      *(v22 - 1) = v21[7];
      v21 += 8;
      --v24;
    }
    while ( v24 );
    *v22 = *v21;
    *((_QWORD *)v22 + 2) = *((_QWORD *)v21 + 2);
    v25 = v16;
    v26 = v52;
    do
    {
      *v25 = *v26;
      v25[1] = v26[1];
      v25[2] = v26[2];
      v25[3] = v26[3];
      v25[4] = v26[4];
      v25[5] = v26[5];
      v25[6] = v26[6];
      v25 += 8;
      *(v25 - 1) = v26[7];
      v26 += 8;
      --v23;
    }
    while ( v23 );
    *v25 = *v26;
    *((_QWORD *)v25 + 2) = *((_QWORD *)v26 + 2);
    if ( *v16 < 8u )
    {
      v28 = ProbeAndDeepCaptureWinStaDesktopObjectAttributes(
              1,
              a1,
              (unsigned __int16 (*)[256])&v54[16],
              &v51,
              &v53,
              &v34,
              &v50,
              &v36);
      v37 = v28;
      if ( v28 >= 0 )
      {
        if ( v34 )
          PushW32ThreadLock((__int64)v34, &v46, (__int64)CleanupSecurityDescriptor);
        PushW32ThreadLock((__int64)v16, &v44, (__int64)Win32FreePool);
        v42 = 0LL;
        v43 = 0LL;
        v27 = v36;
        if ( v36 )
          PushW32ThreadLock((__int64)v36, &v42, (__int64)Win32FreePool);
        v30 = xxxCreateWindowStation((__int64)&v51, 0, a2, a3, a4, a5, (__int64)v16, (__int64)v54, a8, &v35);
        if ( v27 )
        {
          PopAndFreeAlwaysW32ThreadLock((__int64)&v42);
          v27 = 0LL;
        }
        PopW32ThreadLock(&v44);
        if ( v34 )
        {
          PopAndFreeAlwaysW32ThreadLock((__int64)&v46);
          v34 = 0LL;
        }
        if ( v30 < 0 )
        {
          v35 = 0LL;
          v31 = RtlNtStatusToDosError(v30);
          UserSetLastError(v31);
        }
      }
      else
      {
        v35 = 0LL;
        v29 = RtlNtStatusToDosError(v28);
        UserSetLastError(v29);
        v27 = v36;
      }
    }
    else
    {
      v35 = 0LL;
      UserSetLastError(87);
      v27 = v36;
    }
    Win32FreePool(v16);
    if ( v27 )
    {
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 798LL);
      Win32FreePool(v27);
    }
    v18 = v34;
    if ( v34 )
    {
      LOBYTE(v17) = 1;
      SeReleaseSecurityDescriptor(v34, v17, 0LL);
      v34 = 0LL;
    }
  }
  else
  {
    v35 = 0LL;
    UserSetLastError(8);
  }
  UserSessionSwitchLeaveCrit(v18, v17, v19, v20);
  return v35;
}
