/*
 * XREFs of ??$CreateActivationFactory@VTabSetMediatorStatics@Tabs@ComposableShell@Internal@Windows@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x180309020
 * Callers:
 *     <none>
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18009534C (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?Release@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UIAppViewTitleChangeListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@UEAAKXZ @ 0x1802A4760 (-Release@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@UIAppViewTitleChangeListenerF.c)
 *     ??$MakeAndInitialize@VTabSetMediatorStatics@Tabs@ComposableShell@Internal@Windows@@V12345@$$V@Details@WRL@Microsoft@@YAJPEAPEAVTabSetMediatorStatics@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x18030989C (--$MakeAndInitialize@VTabSetMediatorStatics@Tabs@ComposableShell@Internal@Windows@@V12345@$$V@De.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$0N@@WRL@Microsoft@@$0A@UIActivationFactory@@U?$Implements@VFtmBase@WRL@Microsoft@@UITabSetMediatorStatics@Tabs@ComposableShell@Internal@Windows@@@23@VNil@Details@23@V6723@V6723@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18030A68C (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$0N@@WRL@Microsoft@@$0A@UIActiva_ea_18030A68C.c)
 */

__int64 __fastcall Microsoft::WRL::Details::CreateActivationFactory<Windows::Internal::ComposableShell::Tabs::TabSetMediatorStatics>(
        int *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  int v8; // eax
  volatile int *v9; // rdx
  __int64 v10; // rbx
  int CanCastTo; // edi
  int v12; // eax
  __int64 v14[5]; // [rsp+20h] [rbp-28h] BYREF

  v14[0] = 0LL;
  v8 = Microsoft::WRL::Details::MakeAndInitialize<Windows::Internal::ComposableShell::Tabs::TabSetMediatorStatics,Windows::Internal::ComposableShell::Tabs::TabSetMediatorStatics,>(v14);
  v10 = v14[0];
  CanCastTo = v8;
  if ( v8 >= 0 )
  {
    CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<13>,0,IActivationFactory,Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::Internal::ComposableShell::Tabs::ITabSetMediatorStatics>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::CanCastTo(
                  v14[0],
                  a3,
                  a4);
    if ( CanCastTo >= 0 )
    {
      v12 = *a1;
      if ( (*a1 & 4) == 0 )
      {
        Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(v10 + 68), v9);
        v12 = *a1;
      }
      *(_DWORD *)(v10 + 88) = v12;
      *(_QWORD *)(v10 + 80) = a2;
      v10 = 0LL;
      CanCastTo = 0;
    }
  }
  if ( v10 )
    Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::Internal::Shell::TaskFlow::DataEngine::IAppViewTitleChangeListenerFactory>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::Release(
      v10,
      v9);
  return (unsigned int)CanCastTo;
}
