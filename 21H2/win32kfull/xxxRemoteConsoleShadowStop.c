/*
 * XREFs of xxxRemoteConsoleShadowStop @ 0x1C02208E4
 * Callers:
 *     NtUserRemoteConsoleShadowStop @ 0x1C01FBD20 (NtUserRemoteConsoleShadowStop.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0079D94 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     memset @ 0x1C0160540 (memset.c)
 *     DrvReleaseHDEV @ 0x1C0271858 (DrvReleaseHDEV.c)
 *     bDrvDisconnect @ 0x1C02BF004 (bDrvDisconnect.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 xxxRemoteConsoleShadowStop()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  _QWORD *RemoteContext; // rdi
  int v3; // r8d
  char v4; // bl
  int v6; // edx
  int v7; // r8d
  int v8; // r9d
  unsigned int v9; // ebx
  _QWORD DestinationString[3]; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD v11[10]; // [rsp+58h] [rbp-B0h] BYREF
  _DWORD v12[268]; // [rsp+A8h] [rbp-60h] BYREF

  memset(v11, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v11[1]);
  v11[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v11[3]) = 23;
  LOBYTE(v11[6]) = -1;
  memset(v12, 0, 0xDCuLL);
  memset(&v12[56], 0, 0x348uLL);
  *(_OWORD *)&DestinationString[1] = 0LL;
  RemoteContext = (_QWORD *)GreGetRemoteContext();
  v4 = 1;
  LOBYTE(v0) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)v0 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v0,
      v3,
      (_DWORD)WPP_GLOBAL_Control,
      4,
      9,
      10,
      (__int64)&WPP_03c1e4e6de07312e2b7c2fd77d6d27b0_Traceguids);
  }
  if ( PsGetCurrentProcess(v1, v0) != gpepCSRSS )
    return 3221225506LL;
  if ( !gConsoleShadowhDev )
    return 3221225473LL;
  bDrvDisconnect();
  DrvGetHdevName(gConsoleShadowhDev, &v12[57]);
  RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], (PCWSTR)&v12[57]);
  DrvReleaseHDEV();
  gfRemotingConsole = 0;
  LOWORD(v12[17]) = 220;
  v12[18] = 1572896;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
  {
    v4 = 0;
  }
  if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = v4;
    LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v6,
      v7,
      v8,
      4,
      9,
      11,
      (__int64)&WPP_03c1e4e6de07312e2b7c2fd77d6d27b0_Traceguids);
  }
  if ( (unsigned int)xxxUserChangeDisplaySettings(&DestinationString[1], v12, 0LL, 268435457LL, 0LL, 0, v11) )
  {
    v9 = -1073741823;
  }
  else
  {
    xxxUserChangeDisplaySettings(0LL, 0LL, 0LL, 0LL, 0LL, 0, v11);
    v9 = 0;
    RemoteContext[1] = G_SaveRemoteVideoFileObject;
    RemoteContext[2] = G_SaveRemoteConnectionFileObject;
    RemoteContext[4] = G_SavePerformanceStatistics;
    RemoteContext[3] = G_SaveRemoteConnectionChannel;
  }
  if ( gConsoleShadowVideoFileObject )
  {
    ObfDereferenceObject(gConsoleShadowVideoFileObject);
    gConsoleShadowVideoFileObject = 0LL;
  }
  if ( gConsoleShadowThinwireFileObject )
  {
    ObfDereferenceObject(gConsoleShadowThinwireFileObject);
    gConsoleShadowThinwireFileObject = 0LL;
  }
  if ( gpConsoleShadowBeepDevice )
  {
    ObfDereferenceObject(gpConsoleShadowBeepDevice);
    gpConsoleShadowBeepDevice = 0LL;
  }
  if ( gpConsoleShadowDisplayChangeEvent )
  {
    ObfDereferenceObject(gpConsoleShadowDisplayChangeEvent);
    gpConsoleShadowDisplayChangeEvent = 0LL;
  }
  gConsoleShadowhDev = 0LL;
  return v9;
}
