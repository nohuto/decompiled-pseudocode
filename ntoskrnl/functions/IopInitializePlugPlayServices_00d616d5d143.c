int __fastcall IopInitializePlugPlayServices(__int64 a1, __int64 a2)
{
  int result; // eax
  _QWORD *v4; // rax
  int v5; // edx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  int CachedContextBaseKey; // ebx
  int v10; // edx
  __int64 v11; // rcx
  int v12; // edx
  __int64 v13; // rcx
  int v14; // edx
  __int64 v15; // rcx
  void *v16; // rbx
  struct _DEVICE_OBJECT *v17; // rsi
  PDEVICE_OBJECT v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  unsigned int *v21; // rbx
  unsigned int *v22; // rdi
  __int64 v23; // [rsp+48h] [rbp-C0h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-B8h] BYREF
  PVOID P; // [rsp+58h] [rbp-B0h] BYREF
  UNICODE_STRING v26; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v27; // [rsp+70h] [rbp-98h] BYREF
  HANDLE KeyHandle; // [rsp+78h] [rbp-90h] BYREF
  PVOID v29; // [rsp+80h] [rbp-88h] BYREF
  void *v30; // [rsp+88h] [rbp-80h] BYREF
  PVOID v31; // [rsp+90h] [rbp-78h] BYREF
  PVOID v32; // [rsp+98h] [rbp-70h] BYREF
  __int128 v33; // [rsp+A0h] [rbp-68h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+B0h] [rbp-58h] BYREF
  UNICODE_STRING v35; // [rsp+B8h] [rbp-50h] BYREF
  ULONG Disposition; // [rsp+C8h] [rbp-40h] BYREF
  int v37; // [rsp+CCh] [rbp-3Ch] BYREF
  UNICODE_STRING GuidString; // [rsp+D0h] [rbp-38h] BYREF
  UNICODE_STRING v39; // [rsp+E0h] [rbp-28h] BYREF
  UNICODE_STRING DestinationString; // [rsp+F0h] [rbp-18h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+100h] [rbp-8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+130h] [rbp+28h] BYREF
  __int64 v43; // [rsp+140h] [rbp+38h]
  __int64 v44; // [rsp+148h] [rbp+40h]
  struct _EVENT_DATA_DESCRIPTOR v45; // [rsp+158h] [rbp+50h] BYREF
  PDEVICE_OBJECT *p_DeviceObject; // [rsp+178h] [rbp+70h]
  __int64 v47; // [rsp+180h] [rbp+78h]
  __int128 *v48; // [rsp+188h] [rbp+80h]
  __int64 v49; // [rsp+190h] [rbp+88h]
  PVOID *v50; // [rsp+198h] [rbp+90h]
  __int64 v51; // [rsp+1A0h] [rbp+98h]
  PVOID *v52; // [rsp+1A8h] [rbp+A0h]
  __int64 v53; // [rsp+1B0h] [rbp+A8h]
  void **v54; // [rsp+1B8h] [rbp+B0h]
  __int64 v55; // [rsp+1C0h] [rbp+B8h]
  PVOID *v56; // [rsp+1C8h] [rbp+C0h]
  __int64 v57; // [rsp+1D0h] [rbp+C8h]
  PVOID *p_P; // [rsp+1D8h] [rbp+D0h]
  __int64 v59; // [rsp+1E0h] [rbp+D8h]
  __int64 *v60; // [rsp+1E8h] [rbp+E0h]
  __int64 v61; // [rsp+1F0h] [rbp+E8h]
  UNICODE_STRING *v62; // [rsp+1F8h] [rbp+F0h]
  __int64 v63; // [rsp+200h] [rbp+F8h]

  *(_QWORD *)&v33 = 0LL;
  Handle = 0LL;
  v30 = 0LL;
  *(_DWORD *)(&v26.MaximumLength + 1) = 0;
  DeviceObject = 0LL;
  Disposition = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v29 = 0LL;
  P = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  KeyHandle = 0LL;
  *(_DWORD *)(&v35.MaximumLength + 1) = 0;
  *(_DWORD *)(&GuidString.MaximumLength + 1) = 0;
  LOBYTE(v23) = 0;
  DestinationString = 0LL;
  v39 = 0LL;
  if ( (_DWORD)a2 )
  {
    if ( (_DWORD)a2 != 1 )
      return -1073741584;
    result = PnpDiagInitialize();
    if ( result >= 0 )
    {
      TlgRegisterAggregateProvider(&dword_140C038F0);
      TlgRegisterAggregateProvider(&dword_140C06968);
      TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((char *)&dword_140C06930, 0LL, 0LL);
      result = PiDcInit(1LL);
      if ( result >= 0 )
      {
        result = PiUEventInit(1LL);
        if ( result >= 0 )
        {
          v19 = *(_QWORD *)(a1 + 240);
          *(_QWORD *)&UserData.Size = 80LL;
          v44 = 8LL;
          UserData.Ptr = v19 + 136;
          v43 = v19 + 3864;
          PnpDiagnosticTrace(&KMPnPEvt_OsLoader_Time, 2u, &UserData);
          if ( (unsigned int)dword_140C06728 > 4 && tlgKeywordOn((__int64)&dword_140C06728, 0x400000000000LL) )
          {
            v20 = *(_QWORD *)(a1 + 240);
            DeviceObject = *(PDEVICE_OBJECT *)(v20 + 136);
            p_DeviceObject = &DeviceObject;
            v47 = 8LL;
            *(_QWORD *)&v33 = *(_QWORD *)(v20 + 144);
            v48 = &v33;
            v49 = 8LL;
            v32 = *(PVOID *)(v20 + 152);
            v50 = &v32;
            v51 = 8LL;
            v31 = *(PVOID *)(v20 + 160);
            v52 = &v31;
            v53 = 8LL;
            v30 = *(void **)(v20 + 184);
            v54 = &v30;
            v55 = 8LL;
            v29 = *(PVOID *)(v20 + 192);
            v56 = &v29;
            v57 = 8LL;
            P = *(PVOID *)(v20 + 168);
            p_P = &P;
            v59 = 8LL;
            v27 = *(_QWORD *)(v20 + 176);
            v60 = &v27;
            v61 = 8LL;
            *(_QWORD *)&v35.Length = *(_QWORD *)(v20 + 3864);
            v62 = &v35;
            v63 = 8LL;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_140C06728,
              (unsigned __int8 *)byte_14002C49F,
              0LL,
              0LL,
              0xBu,
              &v45);
          }
          TraceLoggingUnregister_EtwUnregister((__int64)&dword_140C06728);
          result = PiPnpRtlInit(1u);
          if ( result >= 0 )
          {
            result = PiCslInitialize();
            if ( result >= 0 )
            {
              CachedContextBaseKey = PiDmaGuardInitialize(1);
              if ( CachedContextBaseKey < 0 )
                return CachedContextBaseKey;
              *(_QWORD *)&v35.Length = 0LL;
              if ( (int)KsrGetFirmwareInformation(&v35) >= 0 )
              {
                PnpKsrEnabled = 1;
                result = PiKsrNotifyInitialize();
                if ( result < 0 )
                  return result;
              }
              else
              {
                PnpKsrEnabled = 0;
              }
              PnpRequestDeviceAction(*((PVOID *)IopRootDeviceNode + 4), 10, 0, 0LL, 0LL, 0LL, 0LL);
              LOWORD(PnpShutdownEvent.Header.Lock) = 0;
              PnpShutdownEvent.Header.WaitListHead.Blink = &PnpShutdownEvent.Header.WaitListHead;
              PnpShutdownEvent.Header.WaitListHead.Flink = &PnpShutdownEvent.Header.WaitListHead;
              PnpShutdownEvent.Header.Size = 6;
              PnpShutdownEvent.Header.SignalState = 0;
              if ( (*(_DWORD *)(*(_QWORD *)(a1 + 240) + 132LL) & 0x400) == 0 )
                PpInitializeBootDDB(a1, 1LL);
              return 0;
            }
          }
        }
      }
    }
  }
  else
  {
    PnPInitialized = 0;
    PnpSystemHiveLimits = 80;
    dword_140C6A9CC = 90;
    CmRegisterSystemHiveLimitCallback(a1, a2, (__int64)&PnpSystemHiveLimits);
    PnpSystemHiveTooLarge = 0;
    ObjectAttributes.ObjectName = &CmRegistryMachineHardwareDescriptionSystemName;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwCreateKey(&KeyHandle, 0xF003Fu, &ObjectAttributes, 0, 0LL, 0, &Disposition) >= 0 )
    {
      if ( IopGetRegistryValue(KeyHandle, L"OldSystemBiosDate", 0, &v29) >= 0 )
      {
        v21 = (unsigned int *)v29;
        if ( v29 )
        {
          if ( IopGetRegistryValue(KeyHandle, L"SystemBiosDate", 0, &P) >= 0 )
          {
            v22 = (unsigned int *)P;
            if ( P )
            {
              RtlInitUnicodeString(&DestinationString, (PCWSTR)((char *)v21 + v21[2]));
              RtlInitUnicodeString(&v39, (PCWSTR)((char *)v22 + v22[2]));
              PnpLogEvent((const void **)&DestinationString, (const void **)&v39, 1073741868, 0LL, 0);
              ExFreePoolWithTag(v22, 0);
            }
          }
          ExFreePoolWithTag(v21, 0);
        }
      }
      ZwClose(KeyHandle);
    }
    qword_140C5C6A8 = 0LL;
    qword_140C5C668 = (__int64)&PnpDeviceCompletionQueue;
    *(_QWORD *)&PnpDeviceCompletionQueue = &PnpDeviceCompletionQueue;
    dword_140C5C670 = 0;
    qword_140C5C698 = (__int64)&qword_140C5C690;
    qword_140C5C690 = (__int64)&qword_140C5C690;
    qword_140C5C680 = (__int64)&qword_140C5C678;
    qword_140C5C678 = (__int64)&qword_140C5C678;
    byte_140C5C688 = 5;
    byte_140C5C68A = 8;
    dword_140C5C68C = 0;
    dword_140C5C6A0 = 0x7FFFFFFF;
    PiInitFirmwareResources(a1);
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 240) + 132LL) & 0x400) == 0 )
      PpInitializeBootDDB(a1, 0LL);
    PipInitDeviceOverrideCache();
    LOWORD(PnpSystemDeviceEnumerationComplete.Header.Lock) = 0;
    PnpSystemDeviceEnumerationComplete.Header.WaitListHead.Blink = &PnpSystemDeviceEnumerationComplete.Header.WaitListHead;
    PnpSystemDeviceEnumerationComplete.Header.WaitListHead.Flink = &PnpSystemDeviceEnumerationComplete.Header.WaitListHead;
    PnpSystemDeviceEnumerationComplete.Header.Size = 6;
    PnpSystemDeviceEnumerationComplete.Header.SignalState = 0;
    result = PiInitCacheGroupInformation();
    if ( result >= 0 )
    {
      PpRegistrySemaphore.Header.Type = 5;
      PpRegistrySemaphore.Header.WaitListHead.Blink = &PpRegistrySemaphore.Header.WaitListHead;
      PpRegistrySemaphore.Header.WaitListHead.Flink = &PpRegistrySemaphore.Header.WaitListHead;
      v4 = &IopLegacyBusInformationTable;
      PpRegistrySemaphore.Header.Size = 8;
      PpRegistrySemaphore.Header.SignalState = 1;
      PpRegistrySemaphore.Limit = 1;
      do
      {
        v4[1] = v4;
        *v4 = v4;
        v4 += 2;
      }
      while ( (__int64)v4 < (__int64)&PiDDBLock );
      IopInitializeResourceMap(a1);
      IopAllocateBootResourcesRoutine = (__int64)IopReportBootResources;
      IopInitReservedResourceList = 0LL;
      PnpDefaultInterfaceType = 1;
      ArbInitializeOsInaccessibleRange((unsigned int)dword_140C65760);
      CachedContextBaseKey = IopPortInitialize(v6, v5);
      if ( CachedContextBaseKey < 0 )
        return CachedContextBaseKey;
      CachedContextBaseKey = IopMemInitialize(v8, v7);
      if ( CachedContextBaseKey < 0 )
        return CachedContextBaseKey;
      CachedContextBaseKey = IopDmaInitialize(v11, v10);
      if ( CachedContextBaseKey < 0 )
        return CachedContextBaseKey;
      CachedContextBaseKey = IopIrqInitialize(v13, v12);
      if ( CachedContextBaseKey < 0 )
        return CachedContextBaseKey;
      CachedContextBaseKey = IopBusNumberInitialize(v15, v14);
      if ( CachedContextBaseKey < 0 )
        return CachedContextBaseKey;
      CachedContextBaseKey = PiPnpRtlInit(0);
      if ( CachedContextBaseKey < 0 )
        return CachedContextBaseKey;
      PipMigratePnpState();
      CachedContextBaseKey = PiDmInit();
      if ( CachedContextBaseKey < 0 )
        return CachedContextBaseKey;
      CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(*(__int64 *)&PiPnpRtlCtx, 4, (__int64)&v30);
      if ( CachedContextBaseKey < 0 )
        return CachedContextBaseKey;
      v26.Buffer = L"Control\\Pnp";
      *(_DWORD *)&v26.Length = 1572886;
      if ( (int)IopCreateRegistryKeyEx(&Handle, v30, &v26, 0xF003Fu, 0, 0LL) >= 0 )
      {
        if ( IopGetRegistryValue(Handle, L"BootOptions", 0, &v31) >= 0 )
        {
          if ( *((_DWORD *)v31 + 1) == 4 && *((_DWORD *)v31 + 3) == 4 )
            PnpBootOptions = *(_DWORD *)((char *)v31 + *((unsigned int *)v31 + 2));
          ExFreePoolWithTag(v31, 0);
        }
        if ( IopGetRegistryValue(Handle, L"FindBestConfigurationTimeout", 0, &v32) >= 0 )
        {
          if ( *((_DWORD *)v32 + 1) == 4 && *((_DWORD *)v32 + 3) == 4 )
            PnpFindBestConfigurationTimeout = *(_DWORD *)((char *)v32 + *((unsigned int *)v32 + 2));
          ExFreePoolWithTag(v32, 0);
        }
        LODWORD(v27) = 0;
        if ( (int)PnpGetRegistryDword(Handle, (__int64)L"DmaGuardTestMode", &v27) >= 0 && (_DWORD)v27 == 1 )
          PipDmaGuardTestMode = 1;
        qword_140C5D210 = (__int64)PipUpdateAsyncOptionsCallback;
        qword_140C5D218 = (__int64)Handle;
        *(_QWORD *)PnpAsyncOptionsWorkItem = 0LL;
        PipUpdateAsyncOptionsCallback(Handle);
        Handle = 0LL;
      }
      *(_DWORD *)&v26.Length = 4063292;
      v26.Buffer = L"\\Registry\\Machine\\System\\Setup";
      if ( IopOpenRegistryKeyEx(&Handle, 0LL, &v26, 0x20019u) >= 0 )
      {
        PipUpdateSetupInProgress(Handle);
        if ( IopGetRegistryValue(Handle, L"Upgrade", 0, &P) >= 0 )
        {
          if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) == 4 && *(_DWORD *)((char *)P + *((unsigned int *)P + 2)) )
            PnpSetupUpgradeInProgress = 1;
          ExFreePoolWithTag(P, 0);
        }
        if ( IopGetRegistryValue(Handle, L"RollbackActive", 0, &P) >= 0 )
        {
          if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) == 4 && *(_DWORD *)((char *)P + *((unsigned int *)P + 2)) )
            PnpSetupRollbackActiveInProgress = 1;
          ExFreePoolWithTag(P, 0);
        }
        if ( PnpSetupInProgress || PnpSetupOOBEInProgress )
        {
          qword_140C5D250 = (__int64)PipUpdateSetupInProgressCallback;
          qword_140C5D258 = (__int64)Handle;
          *(_QWORD *)PnpSetupWorkItem = 0LL;
          PipUpdateSetupInProgressNotify(Handle, 0);
        }
        else
        {
          ZwClose(Handle);
        }
        Handle = 0LL;
      }
      CachedContextBaseKey = PipHardwareConfigInit((GUID *)(*(_QWORD *)(a1 + 240) + 2568LL));
      if ( CachedContextBaseKey < 0 )
        return CachedContextBaseKey;
      PipCheckSystemFirmwareUpdated(&v23);
      CachedContextBaseKey = PiDcInit(0LL);
      if ( CachedContextBaseKey < 0 )
        return CachedContextBaseKey;
      CachedContextBaseKey = PiAuCreateSecurityObjects();
      if ( CachedContextBaseKey < 0 )
        return CachedContextBaseKey;
      CachedContextBaseKey = PiDqInit();
      if ( CachedContextBaseKey < 0 )
        return CachedContextBaseKey;
      CachedContextBaseKey = PpDevCfgInit();
      if ( CachedContextBaseKey < 0 )
        return CachedContextBaseKey;
      PipResetDevices();
      CachedContextBaseKey = CmCreateDevice(
                               *(__int64 *)&PiPnpRtlCtx,
                               (__int64)L"HTREE\\ROOT\\0",
                               983103,
                               (HANDLE *)&v33,
                               0LL,
                               0);
      if ( CachedContextBaseKey < 0 )
        return CachedContextBaseKey;
      v16 = (void *)v33;
      CmSetDeviceRegProp(
        *(__int64 *)&PiPnpRtlCtx,
        (__int64)L"HTREE\\ROOT\\0",
        v33,
        0x25u,
        1u,
        (__int64)L"{00000000-0000-0000-FFFF-FFFFFFFFFFFF}",
        0x4Eu,
        0);
      v37 = 0;
      CmSetDeviceRegProp(
        *(__int64 *)&PiPnpRtlCtx,
        (__int64)L"HTREE\\ROOT\\0",
        (__int64)v16,
        0xBu,
        4u,
        (__int64)&v37,
        4u,
        0);
      ZwClose(v16);
      qword_140C5C6F8 = (__int64)&IopPendingEjects;
      IopPendingEjects = (__int64)&IopPendingEjects;
      qword_140C5C6E8 = (__int64)&IopPendingSurpriseRemovals;
      IopPendingSurpriseRemovals = &IopPendingSurpriseRemovals;
      ExInitializeResourceLite(&IopDeviceTreeLock);
      ExInitializeResourceLite(&IopSurpriseRemoveListLock);
      ExInitializeResourceLite(&PiEngineLock);
      PnpSpinLock = 0LL;
      PiResourceListLock.Event.Header.WaitListHead.Blink = &PiResourceListLock.Event.Header.WaitListHead;
      PiResourceListLock.Event.Header.WaitListHead.Flink = &PiResourceListLock.Event.Header.WaitListHead;
      PnpRebuildPowerRelationsQueueLock.Event.Header.WaitListHead.Blink = &PnpRebuildPowerRelationsQueueLock.Event.Header.WaitListHead;
      PnpRebuildPowerRelationsQueueLock.Event.Header.WaitListHead.Flink = &PnpRebuildPowerRelationsQueueLock.Event.Header.WaitListHead;
      PiResourceListLock.Count = 1;
      PiResourceListLock.Owner = 0LL;
      PiResourceListLock.Contention = 0;
      LOWORD(PiResourceListLock.Event.Header.Lock) = 1;
      PiResourceListLock.Event.Header.Size = 6;
      PiResourceListLock.Event.Header.SignalState = 0;
      PnpRebuildPowerRelationsQueueLock.Count = 1;
      PnpRebuildPowerRelationsQueueLock.Owner = 0LL;
      PnpRebuildPowerRelationsQueueLock.Contention = 0;
      LOWORD(PnpRebuildPowerRelationsQueueLock.Event.Header.Lock) = 1;
      PnpRebuildPowerRelationsQueueLock.Event.Header.Size = 6;
      PnpRebuildPowerRelationsQueueLock.Event.Header.SignalState = 0;
      CachedContextBaseKey = PiDeviceDependencyInit();
      if ( CachedContextBaseKey < 0 )
        return CachedContextBaseKey;
      _InterlockedExchange64((volatile __int64 *)&PnpDeviceActionThread, 0LL);
      PnpEnumerationInProgress = 0;
      PnpEnumerationLock.Header.WaitListHead.Blink = &PnpEnumerationLock.Header.WaitListHead;
      PnpEnumerationLock.Header.WaitListHead.Flink = &PnpEnumerationLock.Header.WaitListHead;
      qword_140C5B0D8 = (__int64)&PnpEnumerationRequestList;
      PnpEnumerationRequestList = (__int64)&PnpEnumerationRequestList;
      LOWORD(PnpEnumerationLock.Header.Lock) = 0;
      PnpEnumerationLock.Header.Size = 6;
      PnpEnumerationLock.Header.SignalState = 1;
      PpProfileInit();
      IopWarmEjectPdo = 0LL;
      IopWarmEjectLock.Header.WaitListHead.Blink = &IopWarmEjectLock.Header.WaitListHead;
      IopWarmEjectLock.Header.WaitListHead.Flink = &IopWarmEjectLock.Header.WaitListHead;
      LOWORD(IopWarmEjectLock.Header.Lock) = 1;
      v26.Buffer = L"\\Driver\\PnpManager";
      IopWarmEjectLock.Header.Size = 6;
      IopWarmEjectLock.Header.SignalState = 1;
      *(_DWORD *)&v26.Length = 2490404;
      CachedContextBaseKey = IoCreateDriver(&v26, (__int64 (__fastcall *)(void **, _QWORD))PipPnPDriverEntry);
      if ( CachedContextBaseKey < 0 )
        return CachedContextBaseKey;
      CachedContextBaseKey = IoCreateDevice(PnpDriverObject, 0, 0LL, 4u, 0, 0, &DeviceObject);
      if ( CachedContextBaseKey < 0 )
        return CachedContextBaseKey;
      v17 = DeviceObject;
      v18 = DeviceObject;
      DeviceObject->Flags |= 0x1000u;
      CachedContextBaseKey = PipAllocateDeviceNode((__int64)v18, (__int64)&IopRootDeviceNode);
      if ( IopRootDeviceNode )
      {
        PipSetDevNodeFlags((__int64)IopRootDeviceNode, 305);
        PipSetDevNodeUserFlags((__int64)IopRootDeviceNode, 10);
        *((_DWORD *)IopRootDeviceNode + 165) = -2;
        CachedContextBaseKey = PnpAllocateDeviceInstancePath((__int64)IopRootDeviceNode, 0x1Au);
        if ( CachedContextBaseKey >= 0 )
        {
          *(_DWORD *)&v35.Length = 1703960;
          v35.Buffer = (wchar_t *)L"HTREE\\ROOT\\0";
          PnpCopyDeviceInstancePath((__int64)IopRootDeviceNode, &v35);
          CachedContextBaseKey = PnpMapDeviceObjectToDeviceInstance(
                                   *((_QWORD *)IopRootDeviceNode + 4),
                                   (__int64)IopRootDeviceNode + 40);
          if ( CachedContextBaseKey >= 0 )
          {
            *(_DWORD *)&GuidString.Length = 5111884;
            GuidString.Buffer = L"{00000000-0000-0000-FFFF-FFFFFFFFFFFF}";
            RtlGUIDFromString(&GuidString, (GUID *)((char *)IopRootDeviceNode + 664));
            PnpQueryAndSaveDeviceNodeCapabilities((__int64)IopRootDeviceNode);
            PipSetDevNodeState((__int64)IopRootDeviceNode, 778);
            goto LABEL_43;
          }
        }
      }
      else
      {
        IoDeleteDevice(v17);
        IoDeleteDriver((unsigned __int16 *)PnpDriverObject);
        if ( CachedContextBaseKey >= 0 )
        {
LABEL_43:
          CachedContextBaseKey = CmAddDeviceToContainer(
                                   *(__int64 *)&PiPnpRtlCtx,
                                   (__int64)L"{00000000-0000-0000-FFFF-FFFFFFFFFFFF}",
                                   (__int64)L"{00000000-0000-0000-FFFF-FFFFFFFFFFFF}",
                                   (__int64)L"HTREE\\ROOT\\0",
                                   0LL);
          if ( CachedContextBaseKey >= 0 )
          {
            if ( (_BYTE)v23 )
              PiDcHandleSystemFirmwareUpdate();
            PnpInitializePnpWatchdogs();
            CachedContextBaseKey = PnpInitializeDeviceEvents();
            if ( CachedContextBaseKey >= 0 )
            {
              PnpInitializeNotification();
              CachedContextBaseKey = PnpBusTypeGuidInitialize();
              if ( CachedContextBaseKey >= 0 )
              {
                LOWORD(PnpReplaceEvent.Header.Lock) = 1;
                PnpReplaceEvent.Header.WaitListHead.Blink = &PnpReplaceEvent.Header.WaitListHead;
                PnpReplaceEvent.Header.WaitListHead.Flink = &PnpReplaceEvent.Header.WaitListHead;
                PnpReplaceEvent.Header.Size = 6;
                PnpReplaceEvent.Header.SignalState = 1;
                CachedContextBaseKey = PiSwInit();
                if ( CachedContextBaseKey >= 0 )
                {
                  CachedContextBaseKey = PiUEventInit(0LL);
                  if ( CachedContextBaseKey >= 0 )
                  {
                    *(_QWORD *)&v33 = 2359330LL;
                    *((_QWORD *)&v33 + 1) = L"\\Driver\\DeviceApi";
                    CachedContextBaseKey = IoCreateDriver(
                                             &v33,
                                             (__int64 (__fastcall *)(void **, _QWORD))PiDaDriverEntry);
                    if ( CachedContextBaseKey >= 0 )
                    {
                      CachedContextBaseKey = PiDmaGuardInitialize(0);
                      if ( CachedContextBaseKey >= 0 )
                      {
                        if ( (int)PipProcessPendingServices() >= 0 )
                          PipProcessPendingOsExtensionResources();
                        PnpRequestDeviceAction(*((PVOID *)IopRootDeviceNode + 4), 10, 0, 0LL, 0LL, 0LL, 0LL);
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      return CachedContextBaseKey;
    }
  }
  return result;
}
