bool __fastcall UnInitializeInputComponents(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v4; // rbx
  void *v5; // rdx
  CInputGlobals *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  CInputConfig *v14; // rbx
  PERESOURCE v15; // rcx
  __int64 v16; // rbx
  PVOID *v17; // rdi
  void *v18; // rdx
  void *v20; // rbx
  struct InputVirtualization::RootSynthesizedMouseList *Instance; // rbx
  _QWORD *v22; // rdx
  __int64 v23; // rax
  NSInstrumentation::CLeakTrackingAllocator *v24; // rcx
  struct _LUID v25; // [rsp+30h] [rbp+8h] BYREF

  v4 = *(void **)&WPP_MAIN_CB.AlignmentRequirement;
  if ( *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement )
  {
    v5 = *(void **)(*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 8LL);
    if ( v5 )
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v5);
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v4);
  }
  *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement = 0LL;
  InputExtensibilityCallout::UnInitialize(a1, a2, a3, a4);
  v6 = gpInputGlobals;
  if ( gpInputGlobals )
  {
    if ( *((_QWORD *)gpInputGlobals + 1) )
    {
      v25.LowPart = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 28LL);
    }
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v6);
  }
  gpInputGlobals = 0LL;
  CTouchProcessor::UnInitialize();
  if ( *(_QWORD *)(SGDGetUserSessionState(v8, v7, v9, v10) + 3608) )
  {
    v25.LowPart = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 28LL);
  }
  v20 = (void *)*((_QWORD *)&WPP_MAIN_CB.Reserved + 1);
  if ( *((_QWORD *)&WPP_MAIN_CB.Reserved + 1) )
  {
    CCursorClip::~CCursorClip(*((CCursorClip **)&WPP_MAIN_CB.Reserved + 1));
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v20);
    *((_QWORD *)&WPP_MAIN_CB.Reserved + 1) = 0LL;
  }
  if ( WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc )
  {
    (**(void (__fastcall ***)(PKDPC, __int64))WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc)(
      WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc,
      1LL);
    WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc = 0LL;
  }
  if ( WPP_MAIN_CB.Queue.Wcb.CurrentIrp )
  {
    (**(void (__fastcall ***)(PVOID, __int64))WPP_MAIN_CB.Queue.Wcb.CurrentIrp)(WPP_MAIN_CB.Queue.Wcb.CurrentIrp, 1LL);
    WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
  }
  v14 = gpInputConfig;
  if ( gpInputConfig )
  {
    CInputConfig::~CInputConfig((struct _LIST_ENTRY **)gpInputConfig);
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v14);
  }
  v15 = CInputConfig::slock;
  gpInputConfig = 0LL;
  if ( CInputConfig::slock )
  {
    ExDeleteResourceLite(CInputConfig::slock);
    ExFreePoolWithTag(CInputConfig::slock, 0);
  }
  v16 = SGDGetUserSessionState(v15, v11, v12, v13);
  v17 = *(PVOID **)(v16 + 16368);
  if ( v17 )
  {
    CInpLockGuard::Uninitialize(v17 + 1);
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v17);
  }
  v18 = gpInputSystemMetrics;
  *(_QWORD *)(v16 + 16368) = 0LL;
  if ( v18 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v18);
  gpInputSystemMetrics = 0LL;
  if ( Buffer )
    ExFreePoolWithTag(Buffer, 0);
  if ( isChildPartition() )
  {
    Instance = InputVirtualization::RootSynthesizedMouseList::GetInstance();
    while ( 1 )
    {
      v22 = *(_QWORD **)Instance;
      if ( *(struct InputVirtualization::RootSynthesizedMouseList **)Instance == Instance )
        break;
      if ( (struct InputVirtualization::RootSynthesizedMouseList *)v22[1] != Instance
        || (v23 = *v22, *(_QWORD **)(*v22 + 8LL) != v22) )
      {
        __fastfail(3u);
      }
      v24 = gpLeakTrackingAllocator;
      *(_QWORD *)Instance = v23;
      *(_QWORD *)(v23 + 8) = Instance;
      NSInstrumentation::CLeakTrackingAllocator::Free(v24, v22);
    }
  }
  CDesktopInputSink::GetInstance();
  v25 = 0LL;
  return CDesktopInputSink::SetDesktopInputSink(0LL, &v25);
}
