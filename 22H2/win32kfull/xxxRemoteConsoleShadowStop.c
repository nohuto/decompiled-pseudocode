/*
 * XREFs of xxxRemoteConsoleShadowStop @ 0x1C0203D54
 * Callers:
 *     NtUserRemoteConsoleShadowStop @ 0x1C01D9AC0 (NtUserRemoteConsoleShadowStop.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C00E4884 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0141600 (memset_0.c)
 *     DrvReleaseHDEV @ 0x1C026C128 (DrvReleaseHDEV.c)
 *     GreConsoleShadowStop @ 0x1C02DCE2C (GreConsoleShadowStop.c)
 *     bDrvDisconnect @ 0x1C02DD250 (bDrvDisconnect.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 xxxRemoteConsoleShadowStop()
{
  __int64 v0; // rdx
  __int64 Timer_high; // rcx
  __int64 RemoteContext; // rdi
  __int64 v3; // r8
  char v4; // bl
  int v6; // edx
  int v7; // r8d
  int v8; // r9d
  unsigned int v9; // ebx
  _QWORD DestinationString[3]; // [rsp+40h] [rbp-C8h] BYREF
  _BYTE v11[8]; // [rsp+58h] [rbp-B0h] BYREF
  GUID ActivityId; // [rsp+60h] [rbp-A8h] BYREF
  int v13; // [rsp+70h] [rbp-98h]
  char v14; // [rsp+88h] [rbp-80h]
  __int64 v15; // [rsp+98h] [rbp-70h]
  _BYTE v16[68]; // [rsp+A8h] [rbp-60h] BYREF
  __int16 v17; // [rsp+ECh] [rbp-1Ch]
  int v18; // [rsp+F0h] [rbp-18h]
  _BYTE v19[4]; // [rsp+188h] [rbp+80h] BYREF
  WCHAR SourceString[422]; // [rsp+18Ch] [rbp+84h] BYREF

  memset_0(v11, 0, 0x48uLL);
  EtwActivityIdControl(3u, &ActivityId);
  v15 = MEMORY[0xFFFFF78000000014];
  v13 = 23;
  v14 = -1;
  memset_0(v16, 0, 0xDCuLL);
  memset_0(v19, 0, 0x348uLL);
  *(_OWORD *)&DestinationString[1] = 0LL;
  RemoteContext = GreGetRemoteContext();
  v4 = 1;
  LOBYTE(v0) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (Timer_high = HIDWORD(WPP_GLOBAL_Control->Timer), (Timer_high & 4) != 0)
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  LOBYTE(v3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)v0 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v0,
      v3,
      (_DWORD)WPP_GLOBAL_Control,
      4,
      3,
      10,
      (__int64)&WPP_38afe8d8a8303f1671169ac824553c0d_Traceguids);
  if ( PsGetCurrentProcess(Timer_high, v0, v3) != gpepCSRSS )
    return 3221225506LL;
  if ( !gConsoleShadowhDev )
    return 3221225473LL;
  bDrvDisconnect();
  DrvGetHdevName(gConsoleShadowhDev, SourceString);
  RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], SourceString);
  DrvReleaseHDEV();
  gfRemotingConsole = 0;
  v17 = 220;
  v18 = 1572896;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) == 0
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
      3,
      11,
      (__int64)&WPP_38afe8d8a8303f1671169ac824553c0d_Traceguids);
  }
  if ( (unsigned int)xxxUserChangeDisplaySettings(&DestinationString[1], v16, 0LL, 268435457LL, 0LL, 0, v11) )
  {
    v9 = -1073741823;
  }
  else
  {
    xxxUserChangeDisplaySettings(0LL, 0LL, 0LL, 0LL, 0LL, 0, v11);
    GreConsoleShadowStop(RemoteContext);
    v9 = 0;
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
