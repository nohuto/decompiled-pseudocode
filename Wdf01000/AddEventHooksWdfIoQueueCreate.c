int __fastcall AddEventHooksWdfIoQueueCreate(
        _VF_HOOK_PROCESS_INFO *HookProcessInfo,
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _WDF_IO_QUEUE_CONFIG *Config,
        _WDF_OBJECT_ATTRIBUTES *QueueAttributes,
        WDFQUEUE__ **Queue)
{
  WDFQUEUE__ **v6; // r14
  int result; // eax
  bool v12; // zf
  WDFQUEUE__ **p_queue; // r15
  __int128 v14; // xmm2
  __int128 v15; // xmm3
  __int128 v16; // xmm4
  __int128 v17; // xmm0
  void (__fastcall *EvtIoDefault)(WDFQUEUE__ *, WDFREQUEST__ *); // rax
  void (__fastcall *EvtIoRead)(WDFQUEUE__ *, WDFREQUEST__ *, unsigned __int64); // rax
  void (__fastcall *v20)(WDFQUEUE__ *, WDFREQUEST__ *, unsigned __int64); // rax
  void (__fastcall *EvtIoDeviceControl)(WDFQUEUE__ *, WDFREQUEST__ *, unsigned __int64, unsigned __int64, unsigned int); // rax
  __int128 v22; // xmm0
  void (__fastcall *v23)(WDFQUEUE__ *, WDFREQUEST__ *, unsigned __int64, unsigned __int64, unsigned int); // rax
  void (__fastcall *EvtIoStop)(WDFQUEUE__ *, WDFREQUEST__ *, unsigned int); // rax
  void (__fastcall *v25)(WDFQUEUE__ *, WDFREQUEST__ *); // rax
  void (__fastcall *EvtIoCanceledOnQueue)(WDFQUEUE__ *, WDFREQUEST__ *); // rax
  signed int v27; // eax
  int v28; // r14d
  FX_POOL_TRACKER *v29; // rdi
  WDFQUEUE__ *v30; // r8
  _VF_WDFIOQUEUECREATE_CONTEXT *v31; // rax
  FX_POOL_TRACKER *v32; // rcx
  WDFQUEUE__ *queue; // [rsp+30h] [rbp-99h] BYREF
  _WDF_IO_QUEUE_CONFIG configNew; // [rsp+40h] [rbp-89h] BYREF
  _WDF_OBJECT_ATTRIBUTES attributes; // [rsp+A0h] [rbp-29h] BYREF
  ULONG_PTR retaddr; // [rsp+118h] [rbp+4Fh]
  void *contextHeader; // [rsp+128h] [rbp+5Fh] BYREF
  _VF_WDFIOQUEUECREATE_CONTEXT *context; // [rsp+138h] [rbp+6Fh] BYREF

  v6 = Queue;
  memset(&configNew, 0, sizeof(configNew));
  queue = 0LL;
  contextHeader = 0LL;
  if ( !Config )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], retaddr);
  if ( Config->Size != 96 )
  {
    result = 0;
LABEL_6:
    HookProcessInfo->DonotCallKmdfLib = 0;
    return result;
  }
  attributes.ExecutionLevel = WdfExecutionLevelInheritFromParent;
  attributes.SynchronizationScope = WdfSynchronizationScopeInheritFromParent;
  memset(&attributes, 0, 24);
  attributes.ContextTypeInfo = WDF_VF_WDFIOQUEUECREATE_CONTEXT_TYPE_INFO.UniqueType;
  *(_OWORD *)&attributes.ParentObject = 0LL;
  attributes.Size = 56;
  result = VfAllocateContext(DriverGlobals, &attributes, &contextHeader);
  if ( result < 0 )
    goto LABEL_6;
  v12 = Config->EvtIoDefault == 0LL;
  p_queue = &queue;
  v14 = *(_OWORD *)&Config->EvtIoWrite;
  v15 = *(_OWORD *)&Config->EvtIoInternalDeviceControl;
  v16 = *(_OWORD *)&Config->EvtIoResume;
  v17 = *(_OWORD *)&Config->Size;
  *(_OWORD *)&configNew.EvtIoDefault = *(_OWORD *)&Config->EvtIoDefault;
  EvtIoDefault = configNew.EvtIoDefault;
  if ( !v12 )
    EvtIoDefault = VfEvtIoDefault;
  *(_OWORD *)&configNew.EvtIoWrite = v14;
  v12 = Config->EvtIoRead == 0LL;
  configNew.EvtIoDefault = EvtIoDefault;
  EvtIoRead = configNew.EvtIoRead;
  if ( !v12 )
    EvtIoRead = VfEvtIoRead;
  *(_OWORD *)&configNew.EvtIoInternalDeviceControl = v15;
  v12 = Config->EvtIoWrite == 0LL;
  configNew.EvtIoRead = EvtIoRead;
  v20 = (void (__fastcall *)(WDFQUEUE__ *, WDFREQUEST__ *, unsigned __int64))v14;
  if ( !v12 )
    v20 = VfEvtIoWrite;
  *(_OWORD *)&configNew.EvtIoResume = v16;
  v12 = Config->EvtIoDeviceControl == 0LL;
  configNew.EvtIoWrite = v20;
  EvtIoDeviceControl = configNew.EvtIoDeviceControl;
  if ( !v12 )
    EvtIoDeviceControl = VfEvtIoDeviceControl;
  *(_OWORD *)&configNew.Size = v17;
  v12 = Config->EvtIoInternalDeviceControl == 0LL;
  v22 = *(_OWORD *)&Config->Settings.Parallel.NumberOfPresentedRequests;
  configNew.EvtIoDeviceControl = EvtIoDeviceControl;
  v23 = (void (__fastcall *)(WDFQUEUE__ *, WDFREQUEST__ *, unsigned __int64, unsigned __int64, unsigned int))v15;
  if ( !v12 )
    v23 = VfEvtIoInternalDeviceControl;
  *(_OWORD *)&configNew.Settings.Parallel.NumberOfPresentedRequests = v22;
  v12 = Config->EvtIoStop == 0LL;
  configNew.EvtIoInternalDeviceControl = v23;
  EvtIoStop = configNew.EvtIoStop;
  if ( !v12 )
    EvtIoStop = VfEvtIoStop;
  v12 = Config->EvtIoResume == 0LL;
  configNew.EvtIoStop = EvtIoStop;
  v25 = (void (__fastcall *)(WDFQUEUE__ *, WDFREQUEST__ *))v16;
  if ( !v12 )
    v25 = VfEvtIoResume;
  v12 = Config->EvtIoCanceledOnQueue == 0LL;
  configNew.EvtIoResume = v25;
  EvtIoCanceledOnQueue = configNew.EvtIoCanceledOnQueue;
  if ( !v12 )
    EvtIoCanceledOnQueue = VfEvtIoCanceledOnQueue;
  configNew.EvtIoCanceledOnQueue = EvtIoCanceledOnQueue;
  if ( v6 )
    p_queue = v6;
  v27 = WdfVersion.Functions.pfnWdfIoQueueCreate(DriverGlobals, Device, &configNew, QueueAttributes, p_queue);
  HookProcessInfo->DonotCallKmdfLib = 1;
  v28 = v27;
  HookProcessInfo->DdiCallStatus = v27;
  if ( v27 < 0 )
  {
    v32 = (FX_POOL_TRACKER *)contextHeader;
    if ( !contextHeader )
      return v28;
    goto LABEL_31;
  }
  v29 = (FX_POOL_TRACKER *)contextHeader;
  v30 = *p_queue;
  context = 0LL;
  v28 = VfAddContextToHandle(contextHeader, &attributes, v30, (void **)&context);
  if ( v28 < 0 )
  {
    if ( !v29 )
      return v28;
    v32 = v29;
LABEL_31:
    FxPoolFree(v32);
    return v28;
  }
  v31 = context;
  context->CommonHeader.DriverGlobals = DriverGlobals;
  v31->IoQueueConfigOriginal = *Config;
  return v28;
}
