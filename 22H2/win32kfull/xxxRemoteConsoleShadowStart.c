/*
 * XREFs of xxxRemoteConsoleShadowStart @ 0x1C0226450
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C004D9D8 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     memset @ 0x1C016DE00 (memset.c)
 *     ?FindMirrorDriver@@YAJPEBGPEAU_DISPLAY_DEVICEW@@@Z @ 0x1C02259E4 (-FindMirrorDriver@@YAJPEBGPEAU_DISPLAY_DEVICEW@@@Z.c)
 *     bDrvReconnect @ 0x1C02BFDB8 (bDrvReconnect.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxRemoteConsoleShadowStart(__int64 a1, const WCHAR *a2, __int64 a3)
{
  int v6; // edx
  _QWORD *RemoteContext; // rsi
  __int64 v8; // xmm0_8
  void *v9; // rax
  NTSTATUS MirrorDriver; // edi
  NTSTATUS v11; // eax
  PVOID v12; // rcx
  int v13; // edx
  int v14; // ecx
  __int64 v15; // rdx
  unsigned __int64 v16; // xmm0_8
  __int64 HDEV; // rax
  PVOID Object; // [rsp+40h] [rbp-C0h] BYREF
  PVOID v20; // [rsp+48h] [rbp-B8h] BYREF
  PVOID v21; // [rsp+50h] [rbp-B0h] BYREF
  PVOID v22; // [rsp+58h] [rbp-A8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD v24[56]; // [rsp+70h] [rbp-90h] BYREF
  _DISPLAY_DEVICEW v25; // [rsp+150h] [rbp+50h] BYREF

  memset(v24, 0, 0xDCuLL);
  memset(&v25, 0, sizeof(v25));
  DestinationString = 0LL;
  RemoteContext = (_QWORD *)GreGetRemoteContext();
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = 4;
    WPP_RECORDER_SF_(
      (unsigned int)&WPP_RECORDER_INITIALIZED,
      v6,
      9,
      12,
      (__int64)&WPP_a65f4517be503488af1f6543f5ef864f_Traceguids);
  }
  if ( gbConnected && !gProtocolType )
  {
    gConsoleShadowhDev = 0LL;
    Object = 0LL;
    gfRemotingConsole = 0;
    v8 = *(_QWORD *)(a1 + 268);
    gpConsoleShadowThinWireCache = ThinWireCache;
    ghConsoleShadowVideoChannel = *(HANDLE *)(a1 + 32);
    ghConsoleShadowBeepChannel = *(HANDLE *)(a1 + 40);
    ghConsoleShadowKeyboardChannel = *(HANDLE *)(a1 + 56);
    v9 = *(void **)(a1 + 64);
    gRemoteClientKeyboardType = v8;
    ghConsoleShadowThinwireChannel = v9;
    *((_DWORD *)&gRemoteClientKeyboardType + 2) = *(_DWORD *)(a1 + 276);
    gbClientDoubleClickSupport = *(_DWORD *)(a1 + 240);
    gfEnableWindowsKey = *(_DWORD *)(a1 + 244);
    MirrorDriver = ObReferenceObjectByHandle(*(HANDLE *)(a1 + 72), 2u, (POBJECT_TYPE)ExEventObjectType, 0, &Object, 0LL);
    gpConsoleShadowDisplayChangeEvent = Object;
    if ( MirrorDriver < 0 )
      goto LABEL_20;
    v20 = 0LL;
    MirrorDriver = ObReferenceObjectByHandle(ghConsoleShadowVideoChannel, 0, 0LL, 0, &v20, 0LL);
    if ( MirrorDriver < 0 )
      goto LABEL_20;
    gConsoleShadowVideoFileObject = v20;
    IoGetRelatedDeviceObject((PFILE_OBJECT)v20);
    v21 = 0LL;
    v11 = ObReferenceObjectByHandle(ghConsoleShadowThinwireChannel, 0, 0LL, 0, &v21, 0LL);
    v12 = v21;
    MirrorDriver = v11;
    gConsoleShadowThinwireFileObject = v21;
    if ( v11 < 0 )
      goto LABEL_20;
    G_SaveRemoteVideoFileObject = (struct _FILE_OBJECT *)RemoteContext[1];
    G_SaveRemoteConnectionFileObject = (struct _FILE_OBJECT *)RemoteContext[2];
    G_SavePerformanceStatistics = (unsigned __int8 *)RemoteContext[4];
    G_SaveRemoteConnectionChannel = (void *)RemoteContext[3];
    RemoteContext[1] = gConsoleShadowVideoFileObject;
    RemoteContext[4] = gpConsoleShadowThinWireCache;
    RemoteContext[3] = ghConsoleShadowThinwireChannel;
    RemoteContext[2] = v12;
    v22 = 0LL;
    MirrorDriver = ObReferenceObjectByHandle(ghConsoleShadowBeepChannel, 0, 0LL, 0, &v22, 0LL);
    gpConsoleShadowBeepDevice = v22;
    if ( MirrorDriver < 0 )
      goto LABEL_20;
    MirrorDriver = FindMirrorDriver(a2, &v25);
    if ( MirrorDriver >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, v25.DeviceName);
      v24[18] = 1835040;
      LOWORD(v24[17]) = 220;
      v24[42] = *(_DWORD *)(a1 + 248);
      v15 = *(_QWORD *)(*gpDispInfo + 24LL);
      v16 = _mm_srli_si128(*(__m128i *)(*gpDispInfo + 24LL), 8).m128i_u64[0];
      v24[19] = *(_OWORD *)(*gpDispInfo + 24LL);
      v24[20] = HIDWORD(v15);
      v24[44] = HIDWORD(v16) - HIDWORD(v15);
      v24[43] = v16 - v15;
      if ( (unsigned int)xxxUserChangeDisplaySettings(&DestinationString, v24, 0LL, 268435457LL, 0LL, 0, a3)
        || (unsigned int)xxxUserChangeDisplaySettings(0LL, 0LL, 0LL, 0LL, 0LL, 0, a3) )
      {
        MirrorDriver = -1073741823;
      }
      else
      {
        HDEV = DrvGetHDEV(&DestinationString);
        gConsoleShadowhDev = HDEV;
        if ( !HDEV
          || (gfRemotingConsole = 1,
              !(unsigned int)bDrvReconnect(HDEV, ghConsoleShadowThinwireChannel, gConsoleShadowThinwireFileObject, 0LL)) )
        {
          MirrorDriver = -1073741823;
          goto LABEL_20;
        }
        HDXDrvEscape(gConsoleShadowhDev, 2LL, gptmrWD, 8LL);
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v13) = 4;
      WPP_RECORDER_SF_(v14, v13, 9, 13, (__int64)&WPP_a65f4517be503488af1f6543f5ef864f_Traceguids);
    }
    if ( MirrorDriver >= 0 )
      return (unsigned int)MirrorDriver;
LABEL_20:
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
    return (unsigned int)MirrorDriver;
  }
  return 3221225473LL;
}
