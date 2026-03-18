/*
 * XREFs of InitializeInputComponents @ 0x1C0053064
 * Callers:
 *     InputInitialize @ 0x1C0052DC4 (InputInitialize.c)
 * Callees:
 *     isChildPartition @ 0x1C00383F0 (isChildPartition.c)
 *     ?Initialize@CActivationObjectManager@@SAJXZ @ 0x1C005315C (-Initialize@CActivationObjectManager@@SAJXZ.c)
 *     ?Initialize@CInputConfig@@SAJXZ @ 0x1C0053250 (-Initialize@CInputConfig@@SAJXZ.c)
 *     ?Initialize@CCursorClip@@SAJXZ @ 0x1C0053334 (-Initialize@CCursorClip@@SAJXZ.c)
 *     ?Initialize@CDeviceIdentity@@SAJXZ @ 0x1C0053414 (-Initialize@CDeviceIdentity@@SAJXZ.c)
 *     ?RegisterCoreMsgProvider@InputExtensibilityCallout@@QEAAXW4_MIT_ENDPOINT@@W4SendMessageWhen@@W4StateOfInterest@@PEAXP6AX23@Z@Z @ 0x1C005351C (-RegisterCoreMsgProvider@InputExtensibilityCallout@@QEAAXW4_MIT_ENDPOINT@@W4SendMessageWhen@@W4S.c)
 *     ?Initialize@CInputSystemMetrics@@SAJXZ @ 0x1C0053784 (-Initialize@CInputSystemMetrics@@SAJXZ.c)
 *     _anonymous_namespace_::CFrameIdGenerator::Initialize @ 0x1C00539C0 (_anonymous_namespace_--CFrameIdGenerator--Initialize.c)
 *     ?Initialize@CKernelSensorThread@@SAJXZ @ 0x1C0053A48 (-Initialize@CKernelSensorThread@@SAJXZ.c)
 *     ?Initialize@CMasterInputThread@@SAJXZ @ 0x1C0053B04 (-Initialize@CMasterInputThread@@SAJXZ.c)
 *     ?Initialize@CInputGlobals@@SAJXZ @ 0x1C0053BBC (-Initialize@CInputGlobals@@SAJXZ.c)
 *     ?Initialize@InputExtensibilityCallout@@SAJXZ @ 0x1C0053CD4 (-Initialize@InputExtensibilityCallout@@SAJXZ.c)
 *     ?GetInstance@CDesktopInputSink@@CAAEAV1@XZ @ 0x1C009ED24 (-GetInstance@CDesktopInputSink@@CAAEAV1@XZ.c)
 *     ?GetInstance@CContentRects@@CAAEAV1@XZ @ 0x1C00C5450 (-GetInstance@CContentRects@@CAAEAV1@XZ.c)
 *     ?GetInstance@RootSynthesizedMouseList@InputVirtualization@@SAAEAV12@XZ @ 0x1C01E76C0 (-GetInstance@RootSynthesizedMouseList@InputVirtualization@@SAAEAV12@XZ.c)
 */

__int64 InitializeInputComponents()
{
  int v0; // eax
  unsigned int v1; // ebx
  __int64 v2; // rcx
  struct InputVirtualization::RootSynthesizedMouseList *Instance; // rax

  v0 = InputExtensibilityCallout::Initialize();
  if ( v0 >= 0 )
  {
    v0 = CActivationObjectManager::Initialize();
    if ( v0 >= 0 )
    {
      v0 = CDeviceIdentity::Initialize();
      if ( v0 >= 0 )
      {
        v0 = CInputGlobals::Initialize();
        if ( v0 >= 0 )
        {
          v0 = CCursorClip::Initialize();
          if ( v0 >= 0 )
          {
            v0 = CMasterInputThread::Initialize();
            if ( v0 >= 0 )
            {
              v0 = CKernelSensorThread::Initialize();
              if ( v0 >= 0 )
              {
                v0 = CInputConfig::Initialize();
                if ( v0 >= 0 )
                {
                  InputDelegation::CInputDelegationInfo::gInstance = 0LL;
                  v0 = anonymous_namespace_::CFrameIdGenerator::Initialize();
                  if ( v0 >= 0 )
                  {
                    v0 = CInputSystemMetrics::Initialize();
                    if ( v0 >= 0 )
                    {
                      if ( isChildPartition() )
                      {
                        Instance = InputVirtualization::RootSynthesizedMouseList::GetInstance();
                        *((_QWORD *)Instance + 1) = Instance;
                        *(_QWORD *)Instance = Instance;
                      }
                      InputObjectMap::s_hashTable = 0;
                      v0 = 0;
                      CPTPProcessor::s_queueLock = 0LL;
                      Buffer = 0LL;
                      dword_1C029A1F4 = 0;
                      InputObjectMap::s_hashTableLock = 0LL;
                      qword_1C029A1D8 = 0LL;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  v1 = 0;
  if ( v0 < 0 )
    v1 = v0;
  CDesktopInputSink::GetInstance();
  CContentRects::GetInstance();
  InputExtensibilityCallout::RegisterCoreMsgProvider(
    v2,
    21LL,
    1LL,
    2LL,
    0LL,
    lambda_7336048acd17859272a6f98208d72592_::_lambda_invoker_cdecl_);
  return v1;
}
