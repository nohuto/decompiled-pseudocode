__int64 __fastcall ACPIBusIrpRemoveDevice(ULONG_PTR a1, IRP *a2)
{
  unsigned int MinorFunction; // r14d
  __int64 DeviceExtension; // rax
  ULONG_PTR v5; // rbx
  __int64 v6; // rax
  struct _DEVICE_OBJECT *v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v12; // rsi
  bool v13; // bp
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rcx
  __int64 v17; // rax
  const char *v18; // rcx
  const char *v19; // rdx
  __int64 v20; // rax

  MinorFunction = a2->Tail.Overlay.CurrentStackLocation->MinorFunction;
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v5 = DeviceExtension;
  if ( (*(_DWORD *)(DeviceExtension + 1008) & 0x20000000) != 0 )
  {
    v6 = *(_QWORD *)(DeviceExtension + 792);
    if ( v6 )
    {
      v7 = *(struct _DEVICE_OBJECT **)(v6 + 784);
      if ( v7 )
        IoInvalidateDeviceRelations(v7, BusRelations);
    }
  }
  if ( (((*(_DWORD *)(v5 + 8) & 0x180) == 256LL) & !_bittest(&AcpiOverrideAttributes, 0x13u)) != 0
    && !*(_DWORD *)(v5 + 368) )
  {
    *(_DWORD *)(v5 + 368) = 5;
    ACPIBuildSurpriseRemovedExtension(v5);
  }
  v8 = *(_QWORD *)(v5 + 8);
  if ( (v8 & 0x100) != 0 )
  {
    if ( *(_DWORD *)(v5 + 368) == 4 )
    {
      a2->IoStatus.Status = -1073741810;
      IofCompleteRequest(a2, 0);
      return 3221225486LL;
    }
    if ( (v8 & 0x80u) == 0LL )
    {
      v12 = *(_QWORD *)(v5 + 1008) & 0x8000LL;
      v13 = (*(_QWORD *)(v5 + 1008) & 0x8000) != 0;
      if ( (unsigned __int8)IsPciBus(*(_QWORD *)(v5 + 768)) || v12 )
      {
        LOBYTE(v15) = v13;
        EnableDisableRegions(*(_QWORD *)(v5 + 760), 0LL, v15);
      }
      if ( (*(_DWORD *)(v5 + 8) & 0x1000LL) != 0 )
        EnableDisableIPMIRegions(*(_QWORD *)(v5 + 760), 0LL);
      if ( (*(_DWORD *)(v5 + 8) & 0x8000000) != 0 )
      {
        ACPIThermalStopZone(v5);
      }
      else
      {
        v16 = *(_QWORD *)(v5 + 1008);
        if ( (v16 & 0x200000000LL) != 0 )
        {
          ACPIFanStopDevice(v5);
        }
        else if ( (v16 & 0x10000000000LL) != 0 )
        {
          ACPIPepCleanupPlatformNotificationSupport(v5);
        }
      }
      LOBYTE(v14) = 1;
      ACPIInitStopDevice(v5, v14);
    }
    if ( (*(_DWORD *)(v5 + 8) & 0x2000000) != 0 )
    {
      if ( _interlockedbittestandreset((volatile signed __int32 *)(v5 + 188), 0) )
      {
        ExFreePoolWithTag(*(PVOID *)(v5 + 192), 0);
        *(_QWORD *)(v5 + 192) = 0LL;
      }
      if ( _interlockedbittestandreset((volatile signed __int32 *)(v5 + 192), 0) )
      {
        ExFreePoolWithTag(*(PVOID *)(v5 + 200), 0);
        *(_QWORD *)(v5 + 200) = 0LL;
      }
      if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v5 + 184), 0, 0) & 1) != 0 )
      {
        KeSetEvent((PRKEVENT)(v5 + 248), 0, 0);
        KeWaitForSingleObject(*(PVOID *)(v5 + 296), Executive, 0, 0, 0LL);
        ObfDereferenceObject(*(PVOID *)(v5 + 296));
      }
    }
    ACPIInitDeleteChildDeviceList(v5);
    ACPIWakeDisconnectWakeInterrupts(v5);
    *(_DWORD *)(v5 + 368) = 4;
    a2->IoStatus.Status = 0;
    a2->IoStatus.Information = 0LL;
    IofCompleteRequest(a2, 0);
    v17 = *(_QWORD *)(v5 + 8);
    v18 = (const char *)&unk_1C00622D0;
    v19 = (const char *)&unk_1C00622D0;
    if ( (v17 & 0x200000000000LL) != 0 )
    {
      v18 = *(const char **)(v5 + 608);
      if ( (v17 & 0x400000000000LL) != 0 )
        v19 = *(const char **)(v5 + 616);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v20 = MinorFunction;
      if ( MinorFunction >= 0x1A )
        v20 = 26LL;
      WPP_RECORDER_SF_qsLqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        0xCu,
        0x39u,
        (__int64)&WPP_efe410a963c03a77fa130710cec25e42_Traceguids,
        (char)a2,
        (__int64)(&ACPIDispatchPnpTableNames)[v20],
        0,
        v5,
        v18,
        v19);
    }
    ACPIInitResetDeviceExtension(v5);
  }
  else
  {
    if ( (v8 & 0x1000) != 0 )
      EnableDisableIPMIRegions(*(_QWORD *)(v5 + 760), 0LL);
    *(_DWORD *)(v5 + 368) = 0;
    ACPIInitDeleteChildDeviceList(v5);
    if ( (*(_DWORD *)(v5 + 8) & 0x2000000) != 0 )
      PcisuppReleasePciInterfaces(v5);
    if ( (*(_DWORD *)(v5 + 8) & 0x8000000) != 0 )
    {
      ACPIThermalStopZone(v5);
    }
    else
    {
      v9 = *(_QWORD *)(v5 + 1008);
      if ( (v9 & 0x200000000LL) != 0 )
      {
        ACPIFanStopDevice(v5);
      }
      else if ( (v9 & 0x10000000000LL) != 0 )
      {
        ACPIPepCleanupPlatformNotificationSupport(v5);
      }
    }
    a2->IoStatus.Status = 0;
    IofCompleteRequest(a2, 0);
    LOBYTE(v10) = 1;
    ACPIInitStopDevice(v5, v10);
  }
  return 0LL;
}
