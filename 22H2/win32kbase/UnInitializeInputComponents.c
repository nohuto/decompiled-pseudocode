/*
 * XREFs of UnInitializeInputComponents @ 0x1C00B6FA4
 * Callers:
 *     InputUnInitialize @ 0x1C00B72FC (InputUnInitialize.c)
 * Callees:
 *     isChildPartition @ 0x1C004FE70 (isChildPartition.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008C460 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?UnInitialize@CTouchProcessor@@SAJXZ @ 0x1C00B71A0 (-UnInitialize@CTouchProcessor@@SAJXZ.c)
 *     ?SetDesktopInputSink@CDesktopInputSink@@SA_NPEAXAEBU_LUID@@@Z @ 0x1C00B7224 (-SetDesktopInputSink@CDesktopInputSink@@SA_NPEAXAEBU_LUID@@@Z.c)
 *     ?GetInstance@CDesktopInputSink@@CAAEAV1@XZ @ 0x1C00B72C0 (-GetInstance@CDesktopInputSink@@CAAEAV1@XZ.c)
 *     ??1CCursorClip@@AEAA@XZ @ 0x1C00B7408 (--1CCursorClip@@AEAA@XZ.c)
 *     ??1CInputConfig@@AEAA@XZ @ 0x1C00B749C (--1CInputConfig@@AEAA@XZ.c)
 *     ?UnInitialize@InputExtensibilityCallout@@SAXXZ @ 0x1C00B75D0 (-UnInitialize@InputExtensibilityCallout@@SAXXZ.c)
 *     ?Uninitialize@CInpLockGuard@@QEAAXXZ @ 0x1C00B77D0 (-Uninitialize@CInpLockGuard@@QEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 *     ?GetInstance@RootSynthesizedMouseList@InputVirtualization@@SAAEAV12@XZ @ 0x1C01E7AC4 (-GetInstance@RootSynthesizedMouseList@InputVirtualization@@SAAEAV12@XZ.c)
 */

bool UnInitializeInputComponents()
{
  char *v0; // rbx
  char *v1; // rdx
  char *v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  char *v10; // rbx
  PERESOURCE v11; // rcx
  __int64 v12; // rbx
  char *v13; // rdi
  char *v14; // rdx
  char *Reserved; // rbx
  char **Instance; // rbx
  char *v18; // rdx
  __int64 v19; // rax
  NSInstrumentation::CLeakTrackingAllocator *v20; // rcx
  struct _LUID v21; // [rsp+30h] [rbp+8h] BYREF

  v0 = *(char **)&WPP_MAIN_CB.AlignmentRequirement;
  if ( *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement )
  {
    v1 = *(char **)(*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 8LL);
    if ( v1 )
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v1);
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v0);
  }
  *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement = 0LL;
  InputExtensibilityCallout::UnInitialize();
  v2 = (char *)*((_QWORD *)&WPP_MAIN_CB.Reserved + 1);
  if ( *((_QWORD *)&WPP_MAIN_CB.Reserved + 1) )
  {
    if ( *(_QWORD *)(*((_QWORD *)&WPP_MAIN_CB.Reserved + 1) + 8LL) )
    {
      v21.LowPart = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 28LL);
    }
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v2);
  }
  *((_QWORD *)&WPP_MAIN_CB.Reserved + 1) = 0LL;
  CTouchProcessor::UnInitialize();
  if ( *(_QWORD *)(SGDGetUserSessionState(v4, v3, v5, v6) + 3608) )
  {
    v21.LowPart = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 28LL);
  }
  Reserved = (char *)WPP_MAIN_CB.Reserved;
  if ( WPP_MAIN_CB.Reserved )
  {
    CCursorClip::~CCursorClip((CCursorClip *)WPP_MAIN_CB.Reserved);
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, Reserved);
    WPP_MAIN_CB.Reserved = 0LL;
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
  v10 = (char *)gpInputConfig;
  if ( gpInputConfig )
  {
    CInputConfig::~CInputConfig(gpInputConfig);
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v10);
  }
  v11 = CInputConfig::slock;
  gpInputConfig = 0LL;
  if ( CInputConfig::slock )
  {
    ExDeleteResourceLite(CInputConfig::slock);
    ExFreePoolWithTag(CInputConfig::slock, 0);
  }
  v12 = SGDGetUserSessionState(v11, v7, v8, v9);
  v13 = *(char **)(v12 + 16368);
  if ( v13 )
  {
    CInpLockGuard::Uninitialize((CInpLockGuard *)(v13 + 8));
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v13);
  }
  v14 = (char *)gpInputSystemMetrics;
  *(_QWORD *)(v12 + 16368) = 0LL;
  if ( v14 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v14);
  gpInputSystemMetrics = 0LL;
  if ( Buffer )
    ExFreePoolWithTag(Buffer, 0);
  if ( isChildPartition() )
  {
    Instance = (char **)InputVirtualization::RootSynthesizedMouseList::GetInstance();
    while ( 1 )
    {
      v18 = *Instance;
      if ( *Instance == (char *)Instance )
        break;
      if ( *((char ***)v18 + 1) != Instance || (v19 = *(_QWORD *)v18, *(char **)(*(_QWORD *)v18 + 8LL) != v18) )
        __fastfail(3u);
      v20 = gpLeakTrackingAllocator;
      *Instance = (char *)v19;
      *(_QWORD *)(v19 + 8) = Instance;
      NSInstrumentation::CLeakTrackingAllocator::Free(v20, v18);
    }
  }
  CDesktopInputSink::GetInstance();
  v21 = 0LL;
  return CDesktopInputSink::SetDesktopInputSink(0LL, &v21);
}
