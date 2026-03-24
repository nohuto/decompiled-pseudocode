/*
 * XREFs of InitializeInputComponents @ 0x1C008C56C
 * Callers:
 *     InputInitialize @ 0x1C008B0FC (InputInitialize.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C00298B0 (Win32AllocPoolZInit.c)
 *     Win32AllocPool @ 0x1C002C2D0 (Win32AllocPool.c)
 *     isChildPartition @ 0x1C00423A0 (isChildPartition.c)
 *     ?GetInstance@CDesktopInputTransform@@CAAEAV1@XZ @ 0x1C00886C8 (-GetInstance@CDesktopInputTransform@@CAAEAV1@XZ.c)
 *     ?Initialize@InputExtensibilityCallout@@SAJXZ @ 0x1C008B324 (-Initialize@InputExtensibilityCallout@@SAJXZ.c)
 *     ??0CInputGlobals@@AEAA@XZ @ 0x1C008B3AC (--0CInputGlobals@@AEAA@XZ.c)
 *     ?Initialize@CForegroundInfo@@SAJXZ @ 0x1C008B44C (-Initialize@CForegroundInfo@@SAJXZ.c)
 *     ?Initialize@CInputThread@@SAJXZ @ 0x1C008B4B8 (-Initialize@CInputThread@@SAJXZ.c)
 *     ?Initialize@CCursorClip@@SAJXZ @ 0x1C008B810 (-Initialize@CCursorClip@@SAJXZ.c)
 *     ?Initialize@CDeviceIdentity@@SAJXZ @ 0x1C008B884 (-Initialize@CDeviceIdentity@@SAJXZ.c)
 *     ?Initialize@CInputConfig@@SAJXZ @ 0x1C008B8DC (-Initialize@CInputConfig@@SAJXZ.c)
 *     _anonymous_namespace_::CFrameIdGenerator::Initialize @ 0x1C008C1FC (_anonymous_namespace_--CFrameIdGenerator--Initialize.c)
 *     ?Initialize@CInputSystemMetrics@@SAJXZ @ 0x1C008C24C (-Initialize@CInputSystemMetrics@@SAJXZ.c)
 *     ??0CActivationObjectManager@@AEAA@XZ @ 0x1C008CC6C (--0CActivationObjectManager@@AEAA@XZ.c)
 *     ?GetInstance@RootSynthesizedMouseList@InputVirtualization@@SAAEAV12@XZ @ 0x1C01AE2A0 (-GetInstance@RootSynthesizedMouseList@InputVirtualization@@SAAEAV12@XZ.c)
 */

__int64 InitializeInputComponents()
{
  CActivationObjectManager *v0; // rax
  CInputGlobals *v1; // rax
  unsigned int v2; // ecx
  struct InputVirtualization::RootSynthesizedMouseList *Instance; // rax

  if ( (int)InputExtensibilityCallout::Initialize() >= 0 )
  {
    v0 = (CActivationObjectManager *)Win32AllocPool(40LL, 0x6D676155u);
    if ( v0 )
      v0 = CActivationObjectManager::CActivationObjectManager(v0);
    qword_1C0250798 = v0;
    if ( v0 && (int)CDeviceIdentity::Initialize() >= 0 )
    {
      v1 = (CInputGlobals *)Win32AllocPoolZInit(0x70uLL, 1919964227LL);
      if ( v1 )
        v1 = CInputGlobals::CInputGlobals(v1);
      gpInputGlobals = v1;
      if ( v1 )
      {
        if ( (int)CCursorClip::Initialize() >= 0
          && (int)CForegroundInfo::Initialize() >= 0
          && (int)CInputThread::Initialize() >= 0
          && CInputConfig::Initialize() >= 0 )
        {
          InputDelegation::CInputDelegationInfo::gInstance = 0LL;
          if ( (int)anonymous_namespace_::CFrameIdGenerator::Initialize() >= 0
            && (int)CInputSystemMetrics::Initialize() >= 0 )
          {
            if ( isChildPartition() )
            {
              Instance = InputVirtualization::RootSynthesizedMouseList::GetInstance();
              *((_QWORD *)Instance + 1) = Instance;
              *(_QWORD *)Instance = Instance;
            }
            InputObjectMap::s_hashTable = 0;
            Buffer = 0LL;
            dword_1C0254554 = 0;
            InputObjectMap::s_hashTableLock = 0LL;
          }
        }
      }
    }
  }
  CDesktopInputTransform::GetInstance();
  return v2;
}
