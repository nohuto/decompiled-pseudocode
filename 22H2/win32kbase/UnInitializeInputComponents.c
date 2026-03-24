/*
 * XREFs of UnInitializeInputComponents @ 0x1C00747B0
 * Callers:
 *     InputUnInitialize @ 0x1C00B4F7C (InputUnInitialize.c)
 * Callees:
 *     Win32FreePool @ 0x1C002C230 (Win32FreePool.c)
 *     isChildPartition @ 0x1C00423A0 (isChildPartition.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0043D04 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??_GCInputConfig@@AEAAPEAXI@Z @ 0x1C0075EF4 (--_GCInputConfig@@AEAAPEAXI@Z.c)
 *     ??1CTouchProcessor@@QEAA@XZ @ 0x1C0075F88 (--1CTouchProcessor@@QEAA@XZ.c)
 *     ?Uninitialize@DelayZonePalmRejection@@SAXXZ @ 0x1C0075FC0 (-Uninitialize@DelayZonePalmRejection@@SAXXZ.c)
 *     ?Uninitialize@CInpLockGuard@@QEAAXXZ @ 0x1C00760A0 (-Uninitialize@CInpLockGuard@@QEAAXXZ.c)
 *     ?UnInitialize@InputExtensibilityCallout@@SAXXZ @ 0x1C00760E0 (-UnInitialize@InputExtensibilityCallout@@SAXXZ.c)
 *     ?CleanUp@CActivationObjectManager@@AEAAXXZ @ 0x1C0082584 (-CleanUp@CActivationObjectManager@@AEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?GetInstance@RootSynthesizedMouseList@InputVirtualization@@SAAEAV12@XZ @ 0x1C01AE2A0 (-GetInstance@RootSynthesizedMouseList@InputVirtualization@@SAAEAV12@XZ.c)
 */

void UnInitializeInputComponents()
{
  CActivationObjectManager *v0; // rbx
  unsigned int v1; // edx
  CInputGlobals *v2; // rbx
  CTouchProcessor *v3; // rbx
  CCursorClip *v4; // rbx
  __int64 v5; // rcx
  CInputDest *v6; // rbx
  CInputThread *v7; // rbx
  struct CDeviceIdentity *v8; // rbx
  struct A0xad387374::CFrameIdGenerator *v9; // rbx
  struct InputVirtualization::RootSynthesizedMouseList *Instance; // rbx
  _QWORD *v11; // rcx
  __int64 v12; // rax

  v0 = qword_1C0250798;
  if ( qword_1C0250798 )
  {
    CActivationObjectManager::CleanUp(qword_1C0250798);
    Win32FreePool((__int64)v0);
  }
  qword_1C0250798 = 0LL;
  InputExtensibilityCallout::UnInitialize();
  v2 = gpInputGlobals;
  if ( gpInputGlobals )
  {
    if ( *((_QWORD *)gpInputGlobals + 1) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 27LL);
    Win32FreePool((__int64)v2);
  }
  gpInputGlobals = 0LL;
  if ( gpTouchProcessor )
  {
    DelayZonePalmRejection::Uninitialize();
    v3 = gpTouchProcessor;
    if ( gpTouchProcessor )
    {
      CTouchProcessor::~CTouchProcessor(gpTouchProcessor);
      Win32FreePool((__int64)v3);
    }
    gpTouchProcessor = 0LL;
  }
  v4 = gpCursorClip;
  if ( gpCursorClip )
  {
    v5 = *((_QWORD *)gpCursorClip + 10);
    if ( v5 )
      Win32FreePool(v5);
    Win32FreePool((__int64)v4);
    gpCursorClip = 0LL;
  }
  v6 = gpForegroundInfo;
  if ( gpForegroundInfo )
  {
    CInputDest::SetEmpty(gpForegroundInfo);
    Win32FreePool((__int64)v6);
    gpForegroundInfo = 0LL;
  }
  v7 = gpInputThread;
  if ( gpInputThread )
  {
    if ( *((_QWORD *)gpInputThread + 1) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 27LL);
    Win32FreePool((__int64)v7);
    gpInputThread = 0LL;
  }
  if ( gpInputConfig )
    CInputConfig::`scalar deleting destructor'(gpInputConfig, v1);
  gpInputConfig = 0LL;
  if ( CInputConfig::slock )
  {
    ExDeleteResourceLite(CInputConfig::slock);
    ExFreePoolWithTag(CInputConfig::slock, 0);
  }
  v8 = gpDeviceIdentity;
  if ( gpDeviceIdentity )
  {
    if ( *((_QWORD *)gpDeviceIdentity + 1) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 27LL);
    Win32FreePool((__int64)v8);
  }
  v9 = `anonymous namespace'::CFrameIdGenerator::s_pInstance;
  gpDeviceIdentity = 0LL;
  if ( `anonymous namespace'::CFrameIdGenerator::s_pInstance )
  {
    CInpLockGuard::Uninitialize((struct A0xad387374::CFrameIdGenerator *)((char *)`anonymous namespace'::CFrameIdGenerator::s_pInstance
                                                                        + 8));
    Win32FreePool((__int64)v9);
  }
  `anonymous namespace'::CFrameIdGenerator::s_pInstance = 0LL;
  if ( gpInputSystemMetrics )
    Win32FreePool((__int64)gpInputSystemMetrics);
  gpInputSystemMetrics = 0LL;
  if ( Buffer )
    ExFreePoolWithTag(Buffer, 0);
  if ( isChildPartition() )
  {
    Instance = InputVirtualization::RootSynthesizedMouseList::GetInstance();
    while ( 1 )
    {
      v11 = *(_QWORD **)Instance;
      if ( *(struct InputVirtualization::RootSynthesizedMouseList **)Instance == Instance )
        break;
      if ( (struct InputVirtualization::RootSynthesizedMouseList *)v11[1] != Instance
        || (v12 = *v11, *(_QWORD **)(*v11 + 8LL) != v11) )
      {
        __fastfail(3u);
      }
      *(_QWORD *)Instance = v12;
      *(_QWORD *)(v12 + 8) = Instance;
      Win32FreePool((__int64)v11);
    }
  }
}
