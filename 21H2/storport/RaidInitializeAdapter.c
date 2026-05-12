/*
 * XREFs of RaidInitializeAdapter @ 0x1C0079538
 * Callers:
 *     RaDriverAddDevice @ 0x1C0034210 (RaDriverAddDevice.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C000E56C (_tlgKeywordOn.c)
 *     RaidDriverGetName @ 0x1C00124D8 (RaidDriverGetName.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C001B09C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C001D620 (__security_check_cookie.c)
 *     memset @ 0x1C0020540 (memset.c)
 *     McTemplateK0qzzqxtqqt_EtwWriteTransfer @ 0x1C002AA40 (McTemplateK0qzzqxtqqt_EtwWriteTransfer.c)
 *     RaidAllocateDeviceProperty @ 0x1C00306B0 (RaidAllocateDeviceProperty.c)
 *     RaGetBusInterface @ 0x1C0044688 (RaGetBusInterface.c)
 *     RaidQueryAcpiDsdStorageD3Property @ 0x1C00456DC (RaidQueryAcpiDsdStorageD3Property.c)
 *     StorpInitializeAdapterTelemetry @ 0x1C0052724 (StorpInitializeAdapterTelemetry.c)
 *     PortGetLinkTimeoutValue @ 0x1C0059B60 (PortGetLinkTimeoutValue.c)
 *     PortRegistryReadDeviceKey @ 0x1C0073274 (PortRegistryReadDeviceKey.c)
 *     PortRegistryWriteDeviceKey @ 0x1C0073334 (PortRegistryWriteDeviceKey.c)
 *     RiAllocateMiniportDeviceExtension @ 0x1C007AC60 (RiAllocateMiniportDeviceExtension.c)
 *     PortGetBusyPauseTimeValue @ 0x1C007C244 (PortGetBusyPauseTimeValue.c)
 *     PortGetBusyRetryCountValue @ 0x1C007C360 (PortGetBusyRetryCountValue.c)
 *     PortGetDriverParameters @ 0x1C007C47C (PortGetDriverParameters.c)
 *     PortGetIoLatencyCapValue @ 0x1C007C50C (PortGetIoLatencyCapValue.c)
 *     PortGetIoTimeoutValue @ 0x1C007C628 (PortGetIoTimeoutValue.c)
 *     PortGetRegistrySettings @ 0x1C007C74C (PortGetRegistrySettings.c)
 *     PortReadStorageBusType @ 0x1C007C980 (PortReadStorageBusType.c)
 */

__int64 __fastcall RaidInitializeAdapter(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        PDEVICE_OBJECT DeviceObject,
        __int128 *a6,
        unsigned int a7)
{
  __int64 v8; // rsi
  __int128 v9; // xmm0
  int BusInterface; // r8d
  _QWORD **v11; // r9
  _QWORD *i; // rdx
  _QWORD *v13; // rcx
  __int64 result; // rax
  int v15; // eax
  __int64 v16; // rcx
  _DWORD *v17; // r12
  __int64 v18; // rcx
  _QWORD *v19; // r15
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  int v23; // eax
  unsigned int v24; // ecx
  char v25; // al
  char v26; // al
  char v27; // al
  char v28; // al
  char v29; // al
  char v30; // al
  char v31; // al
  char v32; // al
  int v33; // eax
  __int64 v34; // rcx
  __int64 v35; // rdx
  int v36; // eax
  char v37; // al
  __int64 v38; // rdx
  __int64 v39; // r8
  int v40; // esi
  __int64 v41; // rcx
  __int64 v42; // rcx
  __int64 v43; // r8
  unsigned __int64 v44; // r9
  int v45; // [rsp+50h] [rbp-B0h]
  int v46; // [rsp+60h] [rbp-A0h] BYREF
  UUID *p_Uuid; // [rsp+68h] [rbp-98h] BYREF
  char v48; // [rsp+70h] [rbp-90h] BYREF
  char v49; // [rsp+71h] [rbp-8Fh] BYREF
  char v50; // [rsp+72h] [rbp-8Eh] BYREF
  int v51; // [rsp+74h] [rbp-8Ch] BYREF
  int v52; // [rsp+78h] [rbp-88h] BYREF
  struct _UNICODE_STRING v53; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v54; // [rsp+90h] [rbp-70h] BYREF
  int v55; // [rsp+94h] [rbp-6Ch] BYREF
  int v56; // [rsp+98h] [rbp-68h] BYREF
  int v57; // [rsp+9Ch] [rbp-64h] BYREF
  int v58; // [rsp+A0h] [rbp-60h] BYREF
  int v59; // [rsp+A4h] [rbp-5Ch] BYREF
  int v60; // [rsp+A8h] [rbp-58h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+B0h] [rbp-50h] BYREF
  int v62; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v63; // [rsp+C8h] [rbp-38h] BYREF
  __int128 v64; // [rsp+D0h] [rbp-30h] BYREF
  UUID Uuid; // [rsp+E0h] [rbp-20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v66[21]; // [rsp+F0h] [rbp-10h] BYREF

  v54 = 0;
  v55 = 0;
  *(_QWORD *)(a1 + 16) = a3;
  v8 = a1 + 320;
  v63 = a3;
  DestinationString = 0LL;
  *(_QWORD *)(a1 + 8) = a2;
  v64 = 0LL;
  *(_QWORD *)(a1 + 32) = DeviceObject;
  Uuid = 0LL;
  *(_QWORD *)(a1 + 24) = a4;
  v9 = *a6;
  v52 = -1;
  v56 = 0;
  *(_OWORD *)(a1 + 40) = v9;
  v57 = 0;
  v58 = 0;
  v59 = 0;
  v60 = 0;
  v53 = 0LL;
  v51 = 0;
  *(_DWORD *)(a1 + 2136) = a7;
  *(_DWORD *)(a1 + 2220) = 1;
  *(_BYTE *)(a1 + 5037) = 1;
  *(_DWORD *)(a1 + 5492) = 0;
  *(_QWORD *)(a1 + 320) = a1;
  BusInterface = RaGetBusInterface(DeviceObject);
  if ( BusInterface == -1 )
    BusInterface = 0;
  if ( !BusInterface )
    *(_BYTE *)(a1 + 104) |= 8u;
  v11 = (_QWORD **)(*(_QWORD *)(a1 + 16) + 96LL);
  for ( i = *v11; ; i = (_QWORD *)*i )
  {
    if ( i == v11 )
    {
      v13 = 0LL;
      goto LABEL_11;
    }
    v13 = i - 26;
    if ( (*(_DWORD *)(i - 3) & 0x800) != 0 )
      break;
    if ( *((_DWORD *)v13 + 1) == BusInterface )
      goto LABEL_11;
  }
  *((_DWORD *)v13 + 1) = BusInterface;
LABEL_11:
  *(_QWORD *)(a1 + 552) = v13;
  if ( !v13 )
    return 3221225486LL;
  v15 = *((_DWORD *)v13 + 1);
  *(_BYTE *)(a1 + 110) |= 2u;
  *(_DWORD *)(a1 + 336) = v15;
  result = RiAllocateMiniportDeviceExtension(v8);
  if ( (int)result >= 0 )
  {
    PortGetDriverParameters(*(_QWORD *)(a1 + 16) + 40LL, a7, a1 + 2144);
    v16 = *(_QWORD *)(a1 + 16) + 40LL;
    *(_DWORD *)(a1 + 2216) = 30;
    PortGetLinkTimeoutValue(v16, a7);
    v17 = (_DWORD *)(a1 + 4268);
    v18 = *(_QWORD *)(a1 + 16) + 40LL;
    *(_DWORD *)(a1 + 4268) = 0;
    PortGetIoTimeoutValue(v18, a1 + 4268);
    v19 = (_QWORD *)(a1 + 5048);
    v20 = *(_QWORD *)(a1 + 16) + 40LL;
    *(_QWORD *)(a1 + 5048) = 0LL;
    PortGetIoLatencyCapValue(v20, a1 + 5048);
    if ( *(_QWORD *)(a1 + 5048) )
      *v19 = 10000LL * *(_QWORD *)(a1 + 5048);
    v21 = *(_QWORD *)(a1 + 16) + 40LL;
    *(_DWORD *)(a1 + 5780) = 0;
    PortGetBusyRetryCountValue(v21);
    v22 = *(_QWORD *)(a1 + 16) + 40LL;
    *(_DWORD *)(a1 + 5784) = 0;
    PortGetBusyPauseTimeValue(v22);
    RtlInitUnicodeString(&DestinationString, L"StorPort");
    RtlInitUnicodeString(&v53, L"TotalSenseDataBytes");
    p_Uuid = (UUID *)&v54;
    v46 = 4;
    v23 = PortRegistryReadDeviceKey(DeviceObject, (int)&DestinationString, (int)&v53, 4, (__int64)&p_Uuid, &v46);
    v24 = v54;
    if ( v23 < 0 )
      v24 = 256;
    v54 = v24;
    if ( v24 > 0x12 )
    {
      v25 = v24;
      if ( v24 >= 0xFF )
        v25 = -1;
      *(_BYTE *)(a1 + 5036) = v25;
    }
    else
    {
      *(_BYTE *)(a1 + 5036) = 18;
    }
    RtlInitUnicodeString(&v53, L"EnableIdlePowerManagement");
    *(_BYTE *)(a1 + 104) &= ~0x20u;
    p_Uuid = (UUID *)&v55;
    v46 = 4;
    if ( (int)PortRegistryReadDeviceKey(DeviceObject, (int)&DestinationString, (int)&v53, 4, (__int64)&p_Uuid, &v46) >= 0 )
    {
      v26 = *(_BYTE *)(a1 + 104);
      if ( v55 )
        v27 = v26 | 0x20;
      else
        v27 = v26 & 0xDF;
      *(_BYTE *)(a1 + 104) = v27;
    }
    RtlInitUnicodeString(&v53, L"DisableRuntimePowerManagement");
    *(_BYTE *)(a1 + 108) &= ~0x10u;
    p_Uuid = (UUID *)&v56;
    v46 = 4;
    if ( (int)PortRegistryReadDeviceKey(DeviceObject, (int)&DestinationString, (int)&v53, 4, (__int64)&p_Uuid, &v46) >= 0 )
    {
      v28 = *(_BYTE *)(a1 + 108);
      if ( v56 )
        v29 = v28 | 0x10;
      else
        v29 = v28 & 0xEF;
      *(_BYTE *)(a1 + 108) = v29;
    }
    RtlInitUnicodeString(&v53, L"DisableD3Cold");
    v30 = *(_BYTE *)(a1 + 108) & 0xF3 | 4;
    v46 = 4;
    *(_BYTE *)(a1 + 108) = v30;
    p_Uuid = (UUID *)&v57;
    if ( (int)PortRegistryReadDeviceKey(DeviceObject, (int)&DestinationString, (int)&v53, 4, (__int64)&p_Uuid, &v46) >= 0 )
    {
      v31 = *(_BYTE *)(a1 + 108);
      if ( v57 )
        v32 = v31 & 0xFB;
      else
        v32 = v31 | 4;
      *(_BYTE *)(a1 + 108) = v32;
    }
    RtlInitUnicodeString(&v53, L"IdleTimeoutInMS");
    *(_DWORD *)(a1 + 5104) = 60000;
    v46 = 4;
    p_Uuid = (UUID *)&v58;
    if ( (int)PortRegistryReadDeviceKey(DeviceObject, (int)&DestinationString, (int)&v53, 4, (__int64)&p_Uuid, &v46) >= 0 )
    {
      v33 = v58;
      *(_BYTE *)(a1 + 108) |= 0x40u;
      *(_DWORD *)(a1 + 5104) = v33;
    }
    RtlInitUnicodeString(&v53, L"UseDMAv3");
    *(_BYTE *)(a1 + 109) &= ~2u;
    p_Uuid = (UUID *)&v59;
    v46 = 4;
    if ( (int)PortRegistryReadDeviceKey(DeviceObject, (int)&DestinationString, (int)&v53, 4, (__int64)&p_Uuid, &v46) >= 0 )
      *(_BYTE *)(a1 + 109) = (v59 != 0 ? 2 : 0) | *(_BYTE *)(a1 + 109) & 0xFD;
    RtlInitUnicodeString(&v53, L"PowerSrbTimeout");
    *(_DWORD *)(a1 + 5728) = *v17;
    p_Uuid = (UUID *)&v60;
    v46 = 4;
    if ( (int)PortRegistryReadDeviceKey(DeviceObject, (int)&DestinationString, (int)&v53, 4, (__int64)&p_Uuid, &v46) >= 0
      && v60 )
    {
      *(_DWORD *)(a1 + 5728) = v60;
    }
    if ( *(_DWORD *)(a1 + 5728) > 0x6Eu )
      *(_DWORD *)(a1 + 5728) = 110;
    *(_BYTE *)(a1 + 108) &= ~0x80u;
    *(_BYTE *)(a1 + 109) |= 0x10u;
    *(_QWORD *)(a1 + 5096) = 0LL;
    memset(v66, 0, 0x148uLL);
    v34 = *(_QWORD *)(a1 + 16) + 40LL;
    LODWORD(v66[0].Ptr) = 255;
    v66[1] = (struct _EVENT_DATA_DESCRIPTOR)_mm_load_si128((const __m128i *)&_xmm);
    v66[2].Reserved = 0;
    LODWORD(v66[2].Ptr) = -1;
    PortGetRegistrySettings(v34, a7, v66);
    *(_QWORD *)(a1 + 4432) = *(_QWORD *)&v66[1].Size;
    *(_QWORD *)(a1 + 4440) = v66[1].Ptr;
    *(_DWORD *)(a1 + 4416) = v66[2].Ptr;
    *(_DWORD *)(a1 + 4424) = v66[2].Reserved;
    *(_QWORD *)(a1 + 4464) = 0xFFFFFFFFLL;
    *(_QWORD *)(a1 + 4448) = 0LL;
    *(_QWORD *)(a1 + 4456) = 0LL;
    *(_DWORD *)(a1 + 4420) = 6;
    if ( (unsigned __int8)PortReadStorageBusType(*(_QWORD *)(a1 + 16) + 40LL, &v51) )
      *(_DWORD *)(a1 + 4420) = v51;
    RaidDriverGetName(v63, (__int64)&v64);
    *(_QWORD *)(a1 + 4864) = *((_QWORD *)&v64 + 1);
    RaidAllocateDeviceProperty(DeviceObject, v35, (_QWORD *)(a1 + 4872));
    *(_DWORD *)(a1 + 5056) = -1;
    v36 = RaidLogListSize;
    *(_DWORD *)(a1 + 5060) = RaidLogListSize;
    *(_QWORD *)(a1 + 5064) = (a1 + 5952) & -(__int64)(v36 != 0);
    if ( StorageD3AllowedOnCurrentPlatform )
      StorageD3InModernStandbyEnabled = 1;
    v37 = RaidQueryAcpiDsdStorageD3Property(a1, &v52);
    v40 = v52;
    if ( v37 )
      StorageD3InModernStandbyEnabled = v52 != 0;
    if ( StorageD3RegistryState == 1 )
    {
      StorageD3InModernStandbyEnabled = 1;
    }
    else if ( !StorageD3RegistryState )
    {
      StorageD3InModernStandbyEnabled = 0;
    }
    if ( (byte_1C0069841 & 1) != 0 )
      McTemplateK0qzzqxtqqt_EtwWriteTransfer(
        (unsigned __int8)StorageD3AllowedOnCurrentPlatform,
        v38,
        v39,
        *(_DWORD *)(a1 + 56),
        *(const wchar_t **)(a1 + 4872),
        *(const wchar_t **)(a1 + 4864),
        *(_DWORD *)(a1 + 336),
        *(_QWORD *)(a1 + 104),
        StorageD3AllowedOnCurrentPlatform,
        v52,
        v45,
        StorageD3InModernStandbyEnabled);
    RtlInitUnicodeString(&v53, L"AdapterGuid");
    v46 = 16;
    p_Uuid = &Uuid;
    if ( (int)PortRegistryReadDeviceKey(DeviceObject, (int)&DestinationString, (int)&v53, 3, (__int64)&p_Uuid, &v46) < 0
      && ExUuidCreate(&Uuid) >= 0 )
    {
      PortRegistryWriteDeviceKey(DeviceObject, (__int64)&DestinationString, (__int64)&v53, 3u, (__int64)p_Uuid, 16);
    }
    *(UUID *)(a1 + 5192) = Uuid;
    StorpInitializeAdapterTelemetry(a1);
    if ( (unsigned int)dword_1C0069058 > 5 )
    {
      if ( tlgKeywordOn(v41, 0x400000000000LL) )
      {
        v52 = *(_DWORD *)(a1 + 2216);
        v66[3].Ptr = (unsigned __int64)&v52;
        v51 = *v17;
        v66[4].Ptr = (unsigned __int64)&v51;
        *(_QWORD *)&v64 = *v19;
        v66[5].Ptr = (unsigned __int64)&v64;
        v46 = *(unsigned __int8 *)(a1 + 5036);
        v66[6].Ptr = (unsigned __int64)&v46;
        v62 = *(_DWORD *)(a1 + 5104);
        v66[7].Ptr = (unsigned __int64)&v62;
        v48 = StorageD3AllowedOnCurrentPlatform;
        v66[8].Ptr = (unsigned __int64)&v48;
        v66[9].Ptr = (unsigned __int64)&v63;
        LODWORD(p_Uuid) = StorageD3RegistryState;
        v66[10].Ptr = (unsigned __int64)&p_Uuid;
        v49 = StorageD3InModernStandbyEnabled;
        v66[11].Ptr = (unsigned __int64)&v49;
        v50 = DFxEnabled;
        v66[12].Ptr = (unsigned __int64)&v50;
        v66[2].Ptr = v44;
        *(_QWORD *)&v66[2].Size = 16LL;
        *(_QWORD *)&v66[3].Size = 4LL;
        *(_QWORD *)&v66[4].Size = 4LL;
        *(_QWORD *)&v66[5].Size = 8LL;
        *(_QWORD *)&v66[6].Size = 4LL;
        *(_QWORD *)&v66[7].Size = 4LL;
        *(_QWORD *)&v66[8].Size = 1LL;
        LODWORD(v63) = v40;
        *(_QWORD *)&v66[9].Size = 4LL;
        *(_QWORD *)&v66[10].Size = 4LL;
        *(_QWORD *)&v66[11].Size = 1LL;
        *(_QWORD *)&v66[12].Size = 1LL;
        tlgWriteTransfer_EtwWriteTransfer(v42, (unsigned __int8 *)dword_1C005D471, v43, v44, 0xDu, v66);
      }
    }
    KeInitializeDpc(
      (PRKDPC)(*(_QWORD *)(a1 + 8) + 200LL),
      (PKDEFERRED_ROUTINE)RaidpAdapterDpcRoutine,
      *(PVOID *)(a1 + 8));
    *(_DWORD *)(a1 + 120) &= ~1u;
    result = 0LL;
    *(_QWORD *)(a1 + 112) = 0LL;
  }
  return result;
}
