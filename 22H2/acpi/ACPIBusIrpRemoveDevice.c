/*
 * XREFs of ACPIBusIrpRemoveDevice @ 0x1C004D5D0
 * Callers:
 *     ACPIEcRemoveDevice @ 0x1C0053960 (ACPIEcRemoveDevice.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0002D40 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x1C0003050 (WPP_RECORDER_SF_qsLqss.c)
 *     ACPIBuildSurpriseRemovedExtension @ 0x1C002CAA0 (ACPIBuildSurpriseRemovedExtension.c)
 *     ACPIInitResetDeviceExtension @ 0x1C002CF60 (ACPIInitResetDeviceExtension.c)
 *     ACPIInitDeleteChildDeviceList @ 0x1C002D204 (ACPIInitDeleteChildDeviceList.c)
 *     ACPIFanStopDevice @ 0x1C005570C (ACPIFanStopDevice.c)
 *     ACPIThermalStopZone @ 0x1C0060294 (ACPIThermalStopZone.c)
 *     ACPIInitStopDevice @ 0x1C0090C3C (ACPIInitStopDevice.c)
 *     IsPciBus @ 0x1C0099E04 (IsPciBus.c)
 *     EnableDisableRegions @ 0x1C009D934 (EnableDisableRegions.c)
 *     EnableDisableIPMIRegions @ 0x1C00B0090 (EnableDisableIPMIRegions.c)
 *     ACPIPepCleanupPlatformNotificationSupport @ 0x1C00B0D94 (ACPIPepCleanupPlatformNotificationSupport.c)
 *     PcisuppReleasePciInterfaces @ 0x1C00B6B38 (PcisuppReleasePciInterfaces.c)
 */

__int64 __fastcall ACPIBusIrpRemoveDevice(ULONG_PTR a1, IRP *a2)
{
  unsigned int MinorFunction; // r14d
  __int64 DeviceExtension; // rbx
  __int64 v5; // rax
  struct _DEVICE_OBJECT *v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v12; // rsi
  bool v13; // bp
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  const char *v19; // rcx
  const char *v20; // rdx
  __int64 v21; // rax

  MinorFunction = a2->Tail.Overlay.CurrentStackLocation->MinorFunction;
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  if ( (*(_DWORD *)(DeviceExtension + 960) & 0x20000000) != 0 )
  {
    v5 = *(_QWORD *)(DeviceExtension + 752);
    if ( v5 )
    {
      v6 = *(struct _DEVICE_OBJECT **)(v5 + 744);
      if ( v6 )
        IoInvalidateDeviceRelations(v6, BusRelations);
    }
  }
  v7 = *(_QWORD *)(DeviceExtension + 8);
  if ( (((v7 & 0x180) == 256) & !_bittest(&AcpiOverrideAttributes, 0x13u)) != 0 && !*(_DWORD *)(DeviceExtension + 328) )
  {
    *(_DWORD *)(DeviceExtension + 328) = 5;
    ACPIBuildSurpriseRemovedExtension(DeviceExtension);
    v7 = *(_QWORD *)(DeviceExtension + 8);
  }
  if ( (v7 & 0x100) != 0 )
  {
    if ( *(_DWORD *)(DeviceExtension + 328) == 4 )
    {
      a2->IoStatus.Status = -1073741810;
      IofCompleteRequest(a2, 0);
      return 3221225486LL;
    }
    if ( (v7 & 0x80u) == 0LL )
    {
      v12 = *(_QWORD *)(DeviceExtension + 960) & 0x8000LL;
      v13 = (*(_QWORD *)(DeviceExtension + 960) & 0x8000) != 0;
      if ( (unsigned __int8)IsPciBus(*(_QWORD *)(DeviceExtension + 728)) || v12 )
      {
        LOBYTE(v15) = v13;
        EnableDisableRegions(*(_QWORD *)(DeviceExtension + 720), 0LL, v15);
      }
      v16 = *(_QWORD *)(DeviceExtension + 8);
      if ( (v16 & 0x1000) != 0 )
      {
        EnableDisableIPMIRegions(*(_QWORD *)(DeviceExtension + 720), 0LL);
        v16 = *(_QWORD *)(DeviceExtension + 8);
      }
      if ( (v16 & 0x8000000) != 0 )
      {
        ACPIThermalStopZone(DeviceExtension);
      }
      else
      {
        v17 = *(_QWORD *)(DeviceExtension + 960);
        if ( (v17 & 0x200000000LL) != 0 )
        {
          ACPIFanStopDevice(DeviceExtension);
        }
        else if ( (v17 & 0x10000000000LL) != 0 )
        {
          ACPIPepCleanupPlatformNotificationSupport(DeviceExtension);
        }
      }
      LOBYTE(v14) = 1;
      ACPIInitStopDevice(DeviceExtension, v14);
      v7 = *(_QWORD *)(DeviceExtension + 8);
    }
    if ( (v7 & 0x2000000) != 0 )
    {
      if ( _interlockedbittestandreset((volatile signed __int32 *)(DeviceExtension + 188), 0) )
      {
        ExFreePoolWithTag(*(PVOID *)(DeviceExtension + 192), 0);
        *(_QWORD *)(DeviceExtension + 192) = 0LL;
      }
      if ( _interlockedbittestandreset((volatile signed __int32 *)(DeviceExtension + 192), 0) )
      {
        ExFreePoolWithTag(*(PVOID *)(DeviceExtension + 200), 0);
        *(_QWORD *)(DeviceExtension + 200) = 0LL;
      }
      if ( (_InterlockedCompareExchange((volatile signed __int32 *)(DeviceExtension + 184), 0, 0) & 1) != 0 )
      {
        KeSetEvent((PRKEVENT)(DeviceExtension + 248), 0, 0);
        KeWaitForSingleObject(*(PVOID *)(DeviceExtension + 296), Executive, 0, 0, 0LL);
        ObfDereferenceObject(*(PVOID *)(DeviceExtension + 296));
      }
    }
    ACPIInitDeleteChildDeviceList(DeviceExtension);
    *(_DWORD *)(DeviceExtension + 328) = 4;
    a2->IoStatus.Status = 0;
    a2->IoStatus.Information = 0LL;
    IofCompleteRequest(a2, 0);
    v18 = *(_QWORD *)(DeviceExtension + 8);
    v19 = (const char *)&unk_1C00701BA;
    v20 = (const char *)&unk_1C00701BA;
    if ( (v18 & 0x200000000000LL) != 0 )
    {
      v19 = *(const char **)(DeviceExtension + 568);
      if ( (v18 & 0x400000000000LL) != 0 )
        v20 = *(const char **)(DeviceExtension + 576);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v21 = MinorFunction;
      if ( MinorFunction >= 0x1A )
        v21 = 26LL;
      WPP_RECORDER_SF_qsLqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        0xCu,
        0x39u,
        (__int64)&WPP_aa0188d95df637fd68421574d89cc32b_Traceguids,
        (char)a2,
        ACPIDispatchPnpTableNames[v21],
        0,
        DeviceExtension,
        v19,
        v20);
    }
    ACPIInitResetDeviceExtension(DeviceExtension);
  }
  else
  {
    if ( (v7 & 0x1000) != 0 )
      EnableDisableIPMIRegions(*(_QWORD *)(DeviceExtension + 720), 0LL);
    *(_DWORD *)(DeviceExtension + 328) = 0;
    ACPIInitDeleteChildDeviceList(DeviceExtension);
    v8 = *(_QWORD *)(DeviceExtension + 8);
    if ( (v8 & 0x2000000) != 0 )
    {
      PcisuppReleasePciInterfaces(DeviceExtension);
      v8 = *(_QWORD *)(DeviceExtension + 8);
    }
    if ( (v8 & 0x8000000) != 0 )
    {
      ACPIThermalStopZone(DeviceExtension);
    }
    else
    {
      v9 = *(_QWORD *)(DeviceExtension + 960);
      if ( (v9 & 0x200000000LL) != 0 )
      {
        ACPIFanStopDevice(DeviceExtension);
      }
      else if ( (v9 & 0x10000000000LL) != 0 )
      {
        ACPIPepCleanupPlatformNotificationSupport(DeviceExtension);
      }
    }
    a2->IoStatus.Status = 0;
    IofCompleteRequest(a2, 0);
    LOBYTE(v10) = 1;
    ACPIInitStopDevice(DeviceExtension, v10);
  }
  return 0LL;
}
