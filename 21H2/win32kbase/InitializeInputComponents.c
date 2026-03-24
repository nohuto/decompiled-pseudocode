/*
 * XREFs of InitializeInputComponents @ 0x1C008B6CC
 * Callers:
 *     InputInitialize @ 0x1C008A25C (InputInitialize.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C0028440 (Win32AllocPoolZInit.c)
 *     Win32AllocPool @ 0x1C002AE60 (Win32AllocPool.c)
 *     isChildPartition @ 0x1C0040F30 (isChildPartition.c)
 *     ?GetInstance@CDesktopInputTransform@@CAAEAV1@XZ @ 0x1C008782C (-GetInstance@CDesktopInputTransform@@CAAEAV1@XZ.c)
 *     ?Initialize@InputExtensibilityCallout@@SAJXZ @ 0x1C008A484 (-Initialize@InputExtensibilityCallout@@SAJXZ.c)
 *     ??0CInputGlobals@@AEAA@XZ @ 0x1C008A50C (--0CInputGlobals@@AEAA@XZ.c)
 *     ?Initialize@CForegroundInfo@@SAJXZ @ 0x1C008A5AC (-Initialize@CForegroundInfo@@SAJXZ.c)
 *     ?Initialize@CInputThread@@SAJXZ @ 0x1C008A618 (-Initialize@CInputThread@@SAJXZ.c)
 *     ?Initialize@CCursorClip@@SAJXZ @ 0x1C008A970 (-Initialize@CCursorClip@@SAJXZ.c)
 *     ?Initialize@CDeviceIdentity@@SAJXZ @ 0x1C008A9E4 (-Initialize@CDeviceIdentity@@SAJXZ.c)
 *     ?Initialize@CInputConfig@@SAJXZ @ 0x1C008AA3C (-Initialize@CInputConfig@@SAJXZ.c)
 *     _anonymous_namespace_::CFrameIdGenerator::Initialize @ 0x1C008B35C (_anonymous_namespace_--CFrameIdGenerator--Initialize.c)
 *     ?Initialize@CInputSystemMetrics@@SAJXZ @ 0x1C008B3AC (-Initialize@CInputSystemMetrics@@SAJXZ.c)
 *     ??0CActivationObjectManager@@AEAA@XZ @ 0x1C008BDCC (--0CActivationObjectManager@@AEAA@XZ.c)
 *     ?GetInstance@RootSynthesizedMouseList@InputVirtualization@@SAAEAV12@XZ @ 0x1C01AE370 (-GetInstance@RootSynthesizedMouseList@InputVirtualization@@SAAEAV12@XZ.c)
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
    qword_1C0251778 = v0;
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
            dword_1C0255524 = 0;
            InputObjectMap::s_hashTableLock = 0LL;
          }
        }
      }
    }
  }
  CDesktopInputTransform::GetInstance();
  return v2;
}
