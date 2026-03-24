/*
 * XREFs of EditionCreateWindowStationEntryPoint @ 0x1C000C1A0
 * Callers:
 *     <none>
 * Callees:
 *     xxxCreateWindowStation @ 0x1C000C6EC (xxxCreateWindowStation.c)
 *     ?RtlStringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x1C000CCB4 (-RtlStringCchCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C00BF9A0 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C00BFA20 (PushW32ThreadLock.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     ?ProbeAndDeepCaptureWinStaDesktopObjectAttributes@@YAJHPEAU_OBJECT_ATTRIBUTES@@AEAY0BAA@GAEAU1@AEAU_SECURITY_QUALITY_OF_SERVICE@@AEAPEAXAEAU_UNICODE_STRING@@AEAPEAG@Z @ 0x1C01686D4 (-ProbeAndDeepCaptureWinStaDesktopObjectAttributes@@YAJHPEAU_OBJECT_ATTRIBUTES@@AEAY0BAA@GAEAU1@A.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C016D990 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall EditionCreateWindowStationEntryPoint(
        struct _OBJECT_ATTRIBUTES *a1,
        int a2,
        __int64 a3,
        int a4,
        int a5,
        unsigned __int64 a6,
        ULONG64 a7,
        int a8)
{
  int v8; // r13d
  ULONG64 v11; // rdi
  int v12; // eax
  const unsigned __int16 *v13; // rdi
  unsigned __int64 v14; // rsi
  ULONG64 v15; // rdx
  _BYTE **v16; // rcx
  _DWORD *v17; // rdi
  void *v18; // rcx
  _OWORD *v19; // rcx
  _OWORD *v20; // rdx
  __int64 v21; // r8
  __int64 v22; // rax
  _OWORD *v23; // rcx
  _OWORD *v24; // rax
  __int64 v25; // rdx
  NTSTATUS v26; // eax
  ULONG v27; // eax
  int v28; // edx
  unsigned __int16 *v29; // rsi
  __int64 ThreadWin32Thread; // rax
  ULONG v31; // eax
  int v34; // [rsp+58h] [rbp-670h]
  int Status; // [rsp+5Ch] [rbp-66Ch]
  void *v36; // [rsp+60h] [rbp-668h] BYREF
  __int64 v37; // [rsp+68h] [rbp-660h] BYREF
  unsigned __int16 *v38; // [rsp+70h] [rbp-658h] BYREF
  _DWORD *v39; // [rsp+78h] [rbp-650h]
  int v40; // [rsp+80h] [rbp-648h]
  int v41; // [rsp+88h] [rbp-640h]
  __int64 v42; // [rsp+90h] [rbp-638h]
  __int128 v43; // [rsp+98h] [rbp-630h]
  __int128 v44; // [rsp+A8h] [rbp-620h] BYREF
  __int64 v45; // [rsp+B8h] [rbp-610h]
  __int128 v46; // [rsp+C0h] [rbp-608h] BYREF
  __int64 v47; // [rsp+D0h] [rbp-5F8h]
  __int128 v48; // [rsp+D8h] [rbp-5F0h] BYREF
  __int64 v49; // [rsp+E8h] [rbp-5E0h]
  struct _UNICODE_STRING v50; // [rsp+F8h] [rbp-5D0h] BYREF
  struct _OBJECT_ATTRIBUTES v51; // [rsp+108h] [rbp-5C0h] BYREF
  _BYTE v52[792]; // [rsp+138h] [rbp-590h] BYREF
  struct _SECURITY_QUALITY_OF_SERVICE v53; // [rsp+450h] [rbp-278h] BYREF
  unsigned __int16 v54[272]; // [rsp+460h] [rbp-268h] BYREF

  v8 = a3;
  v40 = a2;
  v42 = a3;
  v41 = a4;
  v11 = a7;
  memset(&v51, 0, sizeof(v51));
  *(_QWORD *)&v53.Length = 0LL;
  *(_DWORD *)&v53.ContextTrackingMode = 0;
  v36 = 0LL;
  v50 = 0LL;
  v43 = 0LL;
  v39 = 0LL;
  v38 = 0LL;
  v46 = 0LL;
  v47 = 0LL;
  v48 = 0LL;
  v49 = 0LL;
  v37 = 0LL;
  EnterCrit(0LL, 1LL);
  if ( a7 >= MmUserProbeAddress )
    v11 = MmUserProbeAddress;
  v12 = *(_DWORD *)v11;
  v34 = *(_DWORD *)v11;
  LODWORD(v43) = *(_DWORD *)v11;
  v13 = *(const unsigned __int16 **)(v11 + 8);
  *((_QWORD *)&v43 + 1) = v13;
  if ( ((unsigned __int8)v13 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v14 = (unsigned __int16)v12;
  v15 = (ULONG64)v13 + (unsigned __int16)v12 + 2;
  v16 = (_BYTE **)MmUserProbeAddress;
  if ( v15 < MmUserProbeAddress && (unsigned __int16)v12 <= HIWORD(v34) )
  {
    if ( (v12 & 1) != 0 )
    {
LABEL_10:
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 517LL);
      v16 = (_BYTE **)MmUserProbeAddress;
      goto LABEL_11;
    }
    if ( v15 > (unsigned __int64)v13 )
      goto LABEL_12;
  }
  if ( (v12 & 1) != 0 )
    goto LABEL_10;
LABEL_11:
  **v16 = 0;
LABEL_12:
  RtlStringCchCopyNW(v54, 9uLL, v13, v14 >> 1);
  v17 = (_DWORD *)Win32AllocPoolWithQuota(792LL, 1702064981LL);
  v39 = v17;
  if ( v17 )
  {
    v19 = (_OWORD *)a6;
    if ( a6 + 792 < a6 || a6 + 792 > MmUserProbeAddress )
      v19 = (_OWORD *)MmUserProbeAddress;
    v20 = v52;
    v21 = 6LL;
    v22 = 6LL;
    do
    {
      *v20 = *v19;
      v20[1] = v19[1];
      v20[2] = v19[2];
      v20[3] = v19[3];
      v20[4] = v19[4];
      v20[5] = v19[5];
      v20[6] = v19[6];
      v20 += 8;
      *(v20 - 1) = v19[7];
      v19 += 8;
      --v22;
    }
    while ( v22 );
    *v20 = *v19;
    *((_QWORD *)v20 + 2) = *((_QWORD *)v19 + 2);
    v23 = v17;
    v24 = v52;
    do
    {
      *v23 = *v24;
      v23[1] = v24[1];
      v23[2] = v24[2];
      v23[3] = v24[3];
      v23[4] = v24[4];
      v23[5] = v24[5];
      v23[6] = v24[6];
      v23 += 8;
      *(v23 - 1) = v24[7];
      v24 += 8;
      --v21;
    }
    while ( v21 );
    *v23 = *v24;
    *((_QWORD *)v23 + 2) = *((_QWORD *)v24 + 2);
    if ( *v17 < 8u )
    {
      v26 = ProbeAndDeepCaptureWinStaDesktopObjectAttributes(
              1,
              a1,
              (unsigned __int16 (*)[256])&v54[16],
              &v51,
              &v53,
              &v36,
              &v50,
              &v38);
      if ( v26 >= 0 )
      {
        if ( v36 )
          PushW32ThreadLock(v36, &v48, CleanupSecurityDescriptor);
        PushW32ThreadLock(v17, &v46, Win32FreePool);
        v44 = 0LL;
        v45 = 0LL;
        v29 = v38;
        if ( v38 )
          PushW32ThreadLock(v38, &v44, Win32FreePool);
        LOBYTE(v28) = 0;
        Status = xxxCreateWindowStation(
                   (unsigned int)&v51,
                   v28,
                   a2,
                   v8,
                   a4,
                   a5,
                   (__int64)v17,
                   (__int64)v54,
                   a8,
                   (__int64)&v37);
        if ( v29 )
        {
          PopAndFreeAlwaysW32ThreadLock(&v44);
          v38 = 0LL;
        }
        ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
        *(_QWORD *)(ThreadWin32Thread + 16) = v46;
        if ( v36 )
        {
          PopAndFreeAlwaysW32ThreadLock(&v48);
          v36 = 0LL;
        }
        if ( Status < 0 )
        {
          v37 = 0LL;
          v31 = RtlNtStatusToDosError(Status);
          UserSetLastError(v31);
        }
        v17 = v39;
      }
      else
      {
        v37 = 0LL;
        v27 = RtlNtStatusToDosError(v26);
        UserSetLastError(v27);
      }
    }
    else
    {
      v37 = 0LL;
      UserSetLastError(87LL);
    }
    if ( v17 )
      Win32FreePool(v17);
    if ( v38 )
    {
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 613LL);
      Win32FreePool(v38);
    }
    v18 = v36;
    if ( v36 )
    {
      LOBYTE(v25) = 1;
      SeReleaseSecurityDescriptor(v36, v25, 0LL);
      v36 = 0LL;
    }
  }
  else
  {
    v37 = 0LL;
    UserSetLastError(8LL);
  }
  UserSessionSwitchLeaveCrit(v18);
  return v37;
}
