int __fastcall AddEventHooksWdfDeviceCreate(
        _VF_HOOK_PROCESS_INFO *HookProcessInfo,
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT **DeviceInit,
        _WDF_OBJECT_ATTRIBUTES *DeviceAttributes,
        WDFDEVICE__ **Device)
{
  WDFDEVICE_INIT *v5; // rbx
  _FX_DRIVER_GLOBALS *v7; // rcx
  WDFDEVICE__ **v11; // rdi
  PnpPowerInit *p_PnpPower; // rbx
  int result; // eax
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  signed int v21; // eax
  int v22; // ebx
  WDFDEVICE__ *v23; // r8
  FX_POOL_TRACKER *v24; // rdi
  _VF_WDFDEVICECREATE_CONTEXT *v25; // rax
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  FX_POOL_TRACKER *v34; // rcx
  PnpPowerInit *v35; // rcx
  __int128 v36; // xmm1
  __int128 v37; // xmm0
  __int128 v38; // xmm1
  __int128 v39; // xmm0
  __int128 v40; // xmm1
  __int128 v41; // xmm0
  __int128 v42; // xmm1
  __int128 v43; // xmm0
  _WDF_OBJECT_ATTRIBUTES attributes; // [rsp+30h] [rbp-B1h] BYREF
  _WDF_PNPPOWER_EVENT_CALLBACKS pnpPowerEvtsOriginal; // [rsp+70h] [rbp-71h]
  ULONG_PTR retaddr; // [rsp+138h] [rbp+57h]
  void *contextHeader; // [rsp+148h] [rbp+67h] BYREF
  _VF_WDFDEVICECREATE_CONTEXT *context; // [rsp+150h] [rbp+6Fh] BYREF

  v5 = *DeviceInit;
  contextHeader = 0LL;
  v7 = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8];
  if ( !v5 )
    FxVerifierNullBugCheck(v7, retaddr);
  v11 = Device;
  if ( !Device )
    FxVerifierNullBugCheck(v7, retaddr);
  p_PnpPower = &v5->PnpPower;
  if ( p_PnpPower->PnpPowerEventCallbacks.Size != 144 )
  {
    result = 0;
LABEL_8:
    HookProcessInfo->DonotCallKmdfLib = 0;
    return result;
  }
  attributes.ExecutionLevel = WdfExecutionLevelInheritFromParent;
  attributes.SynchronizationScope = WdfSynchronizationScopeInheritFromParent;
  memset(&attributes, 0, 24);
  attributes.ContextTypeInfo = WDF_VF_WDFDEVICECREATE_CONTEXT_TYPE_INFO.UniqueType;
  *(_OWORD *)&attributes.ParentObject = 0LL;
  attributes.Size = 56;
  result = VfAllocateContext(DriverGlobals, &attributes, &contextHeader);
  if ( result < 0 )
    goto LABEL_8;
  v14 = *(_OWORD *)&p_PnpPower->PnpPowerEventCallbacks.EvtDeviceD0EntryPostInterruptsEnabled;
  *(_OWORD *)&pnpPowerEvtsOriginal.Size = *(_OWORD *)&p_PnpPower->PnpPowerEventCallbacks.Size;
  v15 = *(_OWORD *)&p_PnpPower->PnpPowerEventCallbacks.EvtDeviceD0ExitPreInterruptsDisabled;
  *(_OWORD *)&pnpPowerEvtsOriginal.EvtDeviceD0EntryPostInterruptsEnabled = v14;
  v16 = *(_OWORD *)&p_PnpPower->PnpPowerEventCallbacks.EvtDeviceReleaseHardware;
  *(_OWORD *)&pnpPowerEvtsOriginal.EvtDeviceD0ExitPreInterruptsDisabled = v15;
  v17 = *(_OWORD *)&p_PnpPower->PnpPowerEventCallbacks.EvtDeviceSelfManagedIoFlush;
  *(_OWORD *)&pnpPowerEvtsOriginal.EvtDeviceReleaseHardware = v16;
  v18 = *(_OWORD *)&p_PnpPower->PnpPowerEventCallbacks.EvtDeviceSelfManagedIoSuspend;
  *(_OWORD *)&pnpPowerEvtsOriginal.EvtDeviceSelfManagedIoFlush = v17;
  v19 = *(_OWORD *)&p_PnpPower->PnpPowerEventCallbacks.EvtDeviceSurpriseRemoval;
  *(_OWORD *)&pnpPowerEvtsOriginal.EvtDeviceSelfManagedIoSuspend = v18;
  v20 = *(_OWORD *)&p_PnpPower->PnpPowerEventCallbacks.EvtDeviceRelationsQuery;
  *(_OWORD *)&pnpPowerEvtsOriginal.EvtDeviceSurpriseRemoval = v19;
  *(_OWORD *)&pnpPowerEvtsOriginal.EvtDeviceQueryStop = *(_OWORD *)&p_PnpPower->PnpPowerEventCallbacks.EvtDeviceQueryStop;
  *(_OWORD *)&pnpPowerEvtsOriginal.EvtDeviceRelationsQuery = v20;
  if ( p_PnpPower->PnpPowerEventCallbacks.EvtDeviceD0Entry )
    p_PnpPower->PnpPowerEventCallbacks.EvtDeviceD0Entry = VfEvtDeviceD0Entry;
  if ( p_PnpPower->PnpPowerEventCallbacks.EvtDeviceD0EntryPostInterruptsEnabled )
    p_PnpPower->PnpPowerEventCallbacks.EvtDeviceD0EntryPostInterruptsEnabled = VfEvtDeviceD0EntryPostInterruptsEnabled;
  if ( p_PnpPower->PnpPowerEventCallbacks.EvtDeviceD0Exit )
    p_PnpPower->PnpPowerEventCallbacks.EvtDeviceD0Exit = VfEvtDeviceD0Exit;
  if ( p_PnpPower->PnpPowerEventCallbacks.EvtDeviceD0ExitPreInterruptsDisabled )
    p_PnpPower->PnpPowerEventCallbacks.EvtDeviceD0ExitPreInterruptsDisabled = VfEvtDeviceD0ExitPreInterruptsDisabled;
  if ( p_PnpPower->PnpPowerEventCallbacks.EvtDevicePrepareHardware )
    p_PnpPower->PnpPowerEventCallbacks.EvtDevicePrepareHardware = VfEvtDevicePrepareHardware;
  if ( p_PnpPower->PnpPowerEventCallbacks.EvtDeviceReleaseHardware )
    p_PnpPower->PnpPowerEventCallbacks.EvtDeviceReleaseHardware = VfEvtDeviceReleaseHardware;
  if ( p_PnpPower->PnpPowerEventCallbacks.EvtDeviceSelfManagedIoCleanup )
    p_PnpPower->PnpPowerEventCallbacks.EvtDeviceSelfManagedIoCleanup = VfEvtDeviceSelfManagedIoCleanup;
  if ( p_PnpPower->PnpPowerEventCallbacks.EvtDeviceSelfManagedIoFlush )
    p_PnpPower->PnpPowerEventCallbacks.EvtDeviceSelfManagedIoFlush = VfEvtDeviceSelfManagedIoFlush;
  if ( p_PnpPower->PnpPowerEventCallbacks.EvtDeviceSelfManagedIoInit )
    p_PnpPower->PnpPowerEventCallbacks.EvtDeviceSelfManagedIoInit = VfEvtDeviceSelfManagedIoInit;
  if ( p_PnpPower->PnpPowerEventCallbacks.EvtDeviceSelfManagedIoSuspend )
    p_PnpPower->PnpPowerEventCallbacks.EvtDeviceSelfManagedIoSuspend = VfEvtDeviceSelfManagedIoSuspend;
  if ( p_PnpPower->PnpPowerEventCallbacks.EvtDeviceSelfManagedIoRestart )
    p_PnpPower->PnpPowerEventCallbacks.EvtDeviceSelfManagedIoRestart = VfEvtDeviceSelfManagedIoRestart;
  if ( p_PnpPower->PnpPowerEventCallbacks.EvtDeviceSurpriseRemoval )
    p_PnpPower->PnpPowerEventCallbacks.EvtDeviceSurpriseRemoval = VfEvtDeviceSurpriseRemoval;
  if ( p_PnpPower->PnpPowerEventCallbacks.EvtDeviceQueryRemove )
    p_PnpPower->PnpPowerEventCallbacks.EvtDeviceQueryRemove = VfEvtDeviceQueryRemove;
  if ( p_PnpPower->PnpPowerEventCallbacks.EvtDeviceQueryStop )
    p_PnpPower->PnpPowerEventCallbacks.EvtDeviceQueryStop = VfEvtDeviceQueryStop;
  if ( p_PnpPower->PnpPowerEventCallbacks.EvtDeviceUsageNotification )
    p_PnpPower->PnpPowerEventCallbacks.EvtDeviceUsageNotification = VfEvtDeviceUsageNotification;
  if ( p_PnpPower->PnpPowerEventCallbacks.EvtDeviceUsageNotificationEx )
    p_PnpPower->PnpPowerEventCallbacks.EvtDeviceUsageNotificationEx = VfEvtDeviceUsageNotificationEx;
  if ( p_PnpPower->PnpPowerEventCallbacks.EvtDeviceRelationsQuery )
    p_PnpPower->PnpPowerEventCallbacks.EvtDeviceRelationsQuery = VfEvtDeviceRelationsQuery;
  v21 = WdfVersion.Functions.pfnWdfDeviceCreate(DriverGlobals, DeviceInit, DeviceAttributes, v11);
  HookProcessInfo->DonotCallKmdfLib = 1;
  v22 = v21;
  HookProcessInfo->DdiCallStatus = v21;
  if ( v21 < 0 )
  {
    if ( *DeviceInit )
    {
      v35 = &(*DeviceInit)->PnpPower;
      v36 = *(_OWORD *)&pnpPowerEvtsOriginal.EvtDeviceD0EntryPostInterruptsEnabled;
      *(_OWORD *)&v35->PnpPowerEventCallbacks.Size = *(_OWORD *)&pnpPowerEvtsOriginal.Size;
      v37 = *(_OWORD *)&pnpPowerEvtsOriginal.EvtDeviceD0ExitPreInterruptsDisabled;
      *(_OWORD *)&v35->PnpPowerEventCallbacks.EvtDeviceD0EntryPostInterruptsEnabled = v36;
      v38 = *(_OWORD *)&pnpPowerEvtsOriginal.EvtDeviceReleaseHardware;
      *(_OWORD *)&v35->PnpPowerEventCallbacks.EvtDeviceD0ExitPreInterruptsDisabled = v37;
      v39 = *(_OWORD *)&pnpPowerEvtsOriginal.EvtDeviceSelfManagedIoFlush;
      *(_OWORD *)&v35->PnpPowerEventCallbacks.EvtDeviceReleaseHardware = v38;
      v40 = *(_OWORD *)&pnpPowerEvtsOriginal.EvtDeviceSelfManagedIoSuspend;
      *(_OWORD *)&v35->PnpPowerEventCallbacks.EvtDeviceSelfManagedIoFlush = v39;
      v41 = *(_OWORD *)&pnpPowerEvtsOriginal.EvtDeviceSurpriseRemoval;
      *(_OWORD *)&v35->PnpPowerEventCallbacks.EvtDeviceSelfManagedIoSuspend = v40;
      v42 = *(_OWORD *)&pnpPowerEvtsOriginal.EvtDeviceQueryStop;
      *(_OWORD *)&v35->PnpPowerEventCallbacks.EvtDeviceSurpriseRemoval = v41;
      v43 = *(_OWORD *)&pnpPowerEvtsOriginal.EvtDeviceRelationsQuery;
      *(_OWORD *)&v35->PnpPowerEventCallbacks.EvtDeviceQueryStop = v42;
      *(_OWORD *)&v35->PnpPowerEventCallbacks.EvtDeviceRelationsQuery = v43;
    }
    v34 = (FX_POOL_TRACKER *)contextHeader;
    if ( !contextHeader )
      return v22;
    goto LABEL_51;
  }
  v23 = *v11;
  v24 = (FX_POOL_TRACKER *)contextHeader;
  context = 0LL;
  v22 = VfAddContextToHandle(contextHeader, &attributes, v23, (void **)&context);
  if ( v22 < 0 )
  {
    if ( !v24 )
      return v22;
    v34 = v24;
LABEL_51:
    FxPoolFree(v34);
    return v22;
  }
  v25 = context;
  context->CommonHeader.DriverGlobals = DriverGlobals;
  v26 = *(_OWORD *)&pnpPowerEvtsOriginal.EvtDeviceD0EntryPostInterruptsEnabled;
  *(_OWORD *)&v25->PnpPowerEventCallbacksOriginal.Size = *(_OWORD *)&pnpPowerEvtsOriginal.Size;
  v27 = *(_OWORD *)&pnpPowerEvtsOriginal.EvtDeviceD0ExitPreInterruptsDisabled;
  *(_OWORD *)&v25->PnpPowerEventCallbacksOriginal.EvtDeviceD0EntryPostInterruptsEnabled = v26;
  v28 = *(_OWORD *)&pnpPowerEvtsOriginal.EvtDeviceReleaseHardware;
  *(_OWORD *)&v25->PnpPowerEventCallbacksOriginal.EvtDeviceD0ExitPreInterruptsDisabled = v27;
  v29 = *(_OWORD *)&pnpPowerEvtsOriginal.EvtDeviceSelfManagedIoFlush;
  *(_OWORD *)&v25->PnpPowerEventCallbacksOriginal.EvtDeviceReleaseHardware = v28;
  v30 = *(_OWORD *)&pnpPowerEvtsOriginal.EvtDeviceSelfManagedIoSuspend;
  *(_OWORD *)&v25->PnpPowerEventCallbacksOriginal.EvtDeviceSelfManagedIoFlush = v29;
  v31 = *(_OWORD *)&pnpPowerEvtsOriginal.EvtDeviceSurpriseRemoval;
  *(_OWORD *)&v25->PnpPowerEventCallbacksOriginal.EvtDeviceSelfManagedIoSuspend = v30;
  v32 = *(_OWORD *)&pnpPowerEvtsOriginal.EvtDeviceQueryStop;
  *(_OWORD *)&v25->PnpPowerEventCallbacksOriginal.EvtDeviceSurpriseRemoval = v31;
  v33 = *(_OWORD *)&pnpPowerEvtsOriginal.EvtDeviceRelationsQuery;
  *(_OWORD *)&v25->PnpPowerEventCallbacksOriginal.EvtDeviceQueryStop = v32;
  *(_OWORD *)&v25->PnpPowerEventCallbacksOriginal.EvtDeviceRelationsQuery = v33;
  return v22;
}
