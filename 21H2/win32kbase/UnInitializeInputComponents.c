/*
 * XREFs of UnInitializeInputComponents @ 0x1C009EA30
 * Callers:
 *     InputUnInitialize @ 0x1C009E774 (InputUnInitialize.c)
 * Callees:
 *     isChildPartition @ 0x1C00383F0 (isChildPartition.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?UnInitialize@InputExtensibilityCallout@@SAXXZ @ 0x1C009E810 (-UnInitialize@InputExtensibilityCallout@@SAXXZ.c)
 *     ??1CTouchProcessor@@QEAA@XZ @ 0x1C009E8D0 (--1CTouchProcessor@@QEAA@XZ.c)
 *     ?Uninitialize@DelayZonePalmRejection@@SAXXZ @ 0x1C009E908 (-Uninitialize@DelayZonePalmRejection@@SAXXZ.c)
 *     ?Uninitialize@CInpLockGuard@@QEAAXXZ @ 0x1C009E9F0 (-Uninitialize@CInpLockGuard@@QEAAXXZ.c)
 *     ?SetDesktopInputSink@CDesktopInputSink@@SA_NPEAXAEBU_LUID@@@Z @ 0x1C009EC88 (-SetDesktopInputSink@CDesktopInputSink@@SA_NPEAXAEBU_LUID@@@Z.c)
 *     ?GetInstance@CDesktopInputSink@@CAAEAV1@XZ @ 0x1C009ED24 (-GetInstance@CDesktopInputSink@@CAAEAV1@XZ.c)
 *     ??1CInputConfig@@AEAA@XZ @ 0x1C009ED60 (--1CInputConfig@@AEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     ?GetInstance@RootSynthesizedMouseList@InputVirtualization@@SAAEAV12@XZ @ 0x1C01E76C0 (-GetInstance@RootSynthesizedMouseList@InputVirtualization@@SAAEAV12@XZ.c)
 *     ??1VirtualTouchpadProcessor@@AEAA@XZ @ 0x1C01F2C2C (--1VirtualTouchpadProcessor@@AEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

bool __fastcall UnInitializeInputComponents(InputExtensibilityCallout *a1)
{
  char *v1; // rbx
  char *v2; // rdx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  char *v7; // rbx
  char *v8; // rbx
  char *v9; // rbx
  char *v10; // rbx
  char *v11; // rdx
  char *v12; // rbx
  PERESOURCE v13; // rcx
  char *v14; // rbx
  char *v15; // rbx
  char **Instance; // rbx
  char *v18; // rdx
  __int64 v19; // rax
  NSInstrumentation::CLeakTrackingAllocator *v20; // rcx
  struct _LUID v21; // [rsp+30h] [rbp+8h] BYREF

  v1 = (char *)qword_1C0296548;
  if ( qword_1C0296548 )
  {
    v2 = (char *)*((_QWORD *)qword_1C0296548 + 1);
    if ( v2 )
      NSInstrumentation::CLeakTrackingAllocator::Free(
        (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
        v2);
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      v1);
  }
  qword_1C0296548 = 0LL;
  InputExtensibilityCallout::UnInitialize(a1);
  v7 = (char *)gpInputGlobals;
  if ( gpInputGlobals )
  {
    if ( *((_QWORD *)gpInputGlobals + 1) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v4, v3, v5);
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      v7);
  }
  gpInputGlobals = 0LL;
  if ( gpTouchProcessor )
  {
    DelayZonePalmRejection::Uninitialize(v4, v3, v5, v6);
    v8 = (char *)VirtualTouchpadProcessor::s_instance;
    if ( VirtualTouchpadProcessor::s_instance )
    {
      VirtualTouchpadProcessor::~VirtualTouchpadProcessor((VirtualTouchpadProcessor *)VirtualTouchpadProcessor::s_instance);
      NSInstrumentation::CLeakTrackingAllocator::Free(
        (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
        v8);
      VirtualTouchpadProcessor::s_instance = 0LL;
    }
    v9 = (char *)gpTouchProcessor;
    if ( gpTouchProcessor )
    {
      CTouchProcessor::~CTouchProcessor(gpTouchProcessor);
      NSInstrumentation::CLeakTrackingAllocator::Free(
        (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
        v9);
    }
    gpTouchProcessor = 0LL;
  }
  if ( qword_1C029A1D8 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v4, v3, v5);
  v10 = (char *)gpCursorClip;
  if ( gpCursorClip )
  {
    v11 = (char *)*((_QWORD *)gpCursorClip + 33);
    if ( v11 )
      NSInstrumentation::CLeakTrackingAllocator::Free(
        (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
        v11);
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      v10);
    gpCursorClip = 0LL;
  }
  if ( gpInputThread )
  {
    (**(void (__fastcall ***)(CInputThreadBase *, __int64))gpInputThread)(gpInputThread, 1LL);
    gpInputThread = 0LL;
  }
  if ( gpKernelSensorThread )
  {
    (**(void (__fastcall ***)(CKernelSensorThread *, __int64))gpKernelSensorThread)(gpKernelSensorThread, 1LL);
    gpKernelSensorThread = 0LL;
  }
  v12 = (char *)gpInputConfig;
  if ( gpInputConfig )
  {
    CInputConfig::~CInputConfig(gpInputConfig);
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      v12);
  }
  v13 = CInputConfig::slock;
  gpInputConfig = 0LL;
  if ( CInputConfig::slock )
  {
    ExDeleteResourceLite(CInputConfig::slock);
    ExFreePoolWithTag(CInputConfig::slock, 0);
  }
  v14 = (char *)gpDeviceIdentity;
  if ( gpDeviceIdentity )
  {
    if ( *((_QWORD *)gpDeviceIdentity + 1) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v3, v5);
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      v14);
  }
  v15 = (char *)qword_1C0296BE0;
  gpDeviceIdentity = 0LL;
  if ( qword_1C0296BE0 )
  {
    CInpLockGuard::Uninitialize((PVOID *)qword_1C0296BE0 + 1);
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      v15);
  }
  qword_1C0296BE0 = 0LL;
  if ( gpInputSystemMetrics )
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      (char *)gpInputSystemMetrics);
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
      v20 = (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator;
      *Instance = (char *)v19;
      *(_QWORD *)(v19 + 8) = Instance;
      NSInstrumentation::CLeakTrackingAllocator::Free(v20, v18);
    }
  }
  CDesktopInputSink::GetInstance();
  v21 = 0LL;
  return CDesktopInputSink::SetDesktopInputSink(0LL, &v21);
}
