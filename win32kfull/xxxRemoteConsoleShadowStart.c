// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxRemoteConsoleShadowStart(__int64 a1, const WCHAR *a2, __int64 a3)
{
  int v6; // edx
  int v7; // r8d
  __int64 RemoteContext; // r12
  char v9; // si
  __int64 v10; // xmm0_8
  void *v11; // rax
  int v12; // ebx
  int v13; // ebx
  __int64 v14; // rcx
  NTSTATUS MirrorDriver; // edi
  int v16; // r8d
  int v17; // r9d
  void *v18; // rdx
  __int64 v19; // rdx
  unsigned __int64 v20; // xmm0_8
  __int64 HDEV; // rax
  PVOID Object; // [rsp+40h] [rbp-C0h] BYREF
  PVOID v24; // [rsp+48h] [rbp-B8h] BYREF
  PVOID v25; // [rsp+50h] [rbp-B0h] BYREF
  PVOID v26; // [rsp+58h] [rbp-A8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v28[68]; // [rsp+70h] [rbp-90h] BYREF
  __int16 v29; // [rsp+B4h] [rbp-4Ch]
  int v30; // [rsp+B8h] [rbp-48h]
  int v31; // [rsp+BCh] [rbp-44h]
  int v32; // [rsp+C0h] [rbp-40h]
  int v33; // [rsp+118h] [rbp+18h]
  int v34; // [rsp+11Ch] [rbp+1Ch]
  int v35; // [rsp+120h] [rbp+20h]
  _DISPLAY_DEVICEW v36; // [rsp+150h] [rbp+50h] BYREF

  memset_0(v28, 0, 0xDCuLL);
  memset_0(&v36, 0, sizeof(v36));
  DestinationString = 0LL;
  RemoteContext = GreGetRemoteContext();
  v9 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
    || (LOBYTE(v6) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(v6) = 0;
  }
  if ( (_BYTE)v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v6,
      v7,
      (_DWORD)WPP_GLOBAL_Control,
      4,
      9,
      12,
      (__int64)&WPP_b175c1f43ecf3cf0d465f249db37b465_Traceguids);
  }
  if ( gbConnected && !gProtocolType )
  {
    gConsoleShadowhDev = 0LL;
    gfRemotingConsole = 0;
    v10 = *(_QWORD *)(a1 + 268);
    gpConsoleShadowThinWireCache = ThinWireCache;
    ghConsoleShadowVideoChannel = *(HANDLE *)(a1 + 32);
    ghConsoleShadowBeepChannel = *(HANDLE *)(a1 + 40);
    ghConsoleShadowKeyboardChannel = *(HANDLE *)(a1 + 56);
    v11 = *(void **)(a1 + 64);
    gRemoteClientKeyboardType = v10;
    ghConsoleShadowThinwireChannel = v11;
    *((_DWORD *)&gRemoteClientKeyboardType + 2) = *(_DWORD *)(a1 + 276);
    v12 = *(_DWORD *)(a1 + 240);
    *(_DWORD *)(SGDGetUserSessionState(gRemoteClientKeyboardType) + 15912) = v12;
    v13 = *(_DWORD *)(a1 + 244);
    Object = 0LL;
    *(_DWORD *)(SGDGetUserSessionState(v14) + 13820) = v13;
    MirrorDriver = ObReferenceObjectByHandle(*(HANDLE *)(a1 + 72), 2u, (POBJECT_TYPE)ExEventObjectType, 0, &Object, 0LL);
    gpConsoleShadowDisplayChangeEvent = Object;
    if ( MirrorDriver < 0 )
      goto LABEL_29;
    v24 = 0LL;
    MirrorDriver = ObReferenceObjectByHandle(ghConsoleShadowVideoChannel, 0, 0LL, 0, &v24, 0LL);
    if ( MirrorDriver < 0 )
      goto LABEL_29;
    gConsoleShadowVideoFileObject = v24;
    IoGetRelatedDeviceObject((PFILE_OBJECT)v24);
    v25 = 0LL;
    MirrorDriver = ObReferenceObjectByHandle(ghConsoleShadowThinwireChannel, 0, 0LL, 0, &v25, 0LL);
    gConsoleShadowThinwireFileObject = v25;
    if ( MirrorDriver < 0 )
      goto LABEL_29;
    if ( (unsigned int)GreConsoleShadowStart(RemoteContext) )
    {
      v26 = 0LL;
      MirrorDriver = ObReferenceObjectByHandle(ghConsoleShadowBeepChannel, 0, 0LL, 0, &v26, 0LL);
      gpConsoleShadowBeepDevice = v26;
      if ( MirrorDriver < 0 )
      {
LABEL_29:
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
      MirrorDriver = FindMirrorDriver(a2, &v36);
      if ( MirrorDriver < 0 )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
          || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
        {
          v9 = 0;
        }
        if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v18 = &WPP_b175c1f43ecf3cf0d465f249db37b465_Traceguids;
          LOBYTE(v18) = v9;
          LOBYTE(v16) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            (_DWORD)v18,
            v16,
            v17,
            4,
            9,
            13,
            (__int64)&WPP_b175c1f43ecf3cf0d465f249db37b465_Traceguids);
        }
        goto LABEL_29;
      }
      RtlInitUnicodeString(&DestinationString, v36.DeviceName);
      v30 = 1835040;
      v29 = 220;
      v33 = *(_DWORD *)(a1 + 248);
      v19 = *(_QWORD *)(*gpDispInfo + 24LL);
      v20 = _mm_srli_si128(*(__m128i *)(*gpDispInfo + 24LL), 8).m128i_u64[0];
      v31 = *(_OWORD *)(*gpDispInfo + 24LL);
      v32 = HIDWORD(v19);
      v35 = HIDWORD(v20) - HIDWORD(v19);
      v34 = v20 - v19;
      if ( !(unsigned int)xxxUserChangeDisplaySettings(&DestinationString, v28, 0LL, 268435457LL, 0LL, 0, a3)
        && !(unsigned int)xxxUserChangeDisplaySettings(0LL, 0LL, 0LL, 0LL, 0LL, 0, a3) )
      {
        HDEV = DrvGetHDEV(&DestinationString);
        gConsoleShadowhDev = HDEV;
        if ( HDEV )
        {
          gfRemotingConsole = 1;
          if ( (unsigned int)bDrvReconnect(HDEV, ghConsoleShadowThinwireChannel, gConsoleShadowThinwireFileObject, 0LL) )
          {
            HDXDrvEscape(gConsoleShadowhDev, 2LL, gptmrWD, 8LL);
            return (unsigned int)MirrorDriver;
          }
        }
      }
    }
    MirrorDriver = -1073741823;
    goto LABEL_29;
  }
  return 3221225473LL;
}
