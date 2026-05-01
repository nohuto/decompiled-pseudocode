/*
 * XREFs of ??$MakeAndInitialize@VTabSetMediatorStatics@Tabs@ComposableShell@Internal@Windows@@V12345@$$V@Details@WRL@Microsoft@@YAJPEAPEAVTabSetMediatorStatics@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x18030989C
 * Callers:
 *     ??$CreateActivationFactory@VTabSetMediatorStatics@Tabs@ComposableShell@Internal@Windows@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x180309020 (--$CreateActivationFactory@VTabSetMediatorStatics@Tabs@ComposableShell@Internal@Windows@@@Detail.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD44 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?AddRef@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UIUserPresenceListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@UEAAKXZ @ 0x1802A0400 (-AddRef@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@UIUserPresenceListenerFactory@.c)
 *     ?Release@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UIAppViewTitleChangeListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@UEAAKXZ @ 0x1802A4760 (-Release@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@UIAppViewTitleChangeListenerF.c)
 *     ??0?$AgileActivationFactory@UITabSetMediatorStatics@Tabs@ComposableShell@Internal@Windows@@VNil@Details@WRL@Microsoft@@V6789@$0A@@WRL@Microsoft@@QEAA@XZ @ 0x180309C34 (--0-$AgileActivationFactory@UITabSetMediatorStatics@Tabs@ComposableShell@Internal@Windows@@VNil@.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Windows::Internal::ComposableShell::Tabs::TabSetMediatorStatics,Windows::Internal::ComposableShell::Tabs::TabSetMediatorStatics,>(
        _QWORD *a1)
{
  unsigned int v1; // edi
  _QWORD *v3; // rax
  _QWORD *v4; // rbx
  volatile int *v5; // rdx
  volatile int *v6; // rdx

  v1 = 0;
  *a1 = 0LL;
  v3 = operator new(0x60uLL, (const struct std::nothrow_t *)&std::nothrow);
  v4 = v3;
  if ( v3 )
  {
    Microsoft::WRL::AgileActivationFactory<Windows::Internal::ComposableShell::Tabs::ITabSetMediatorStatics,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::AgileActivationFactory<Windows::Internal::ComposableShell::Tabs::ITabSetMediatorStatics,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>(v3);
    *v4 = &Windows::Internal::ComposableShell::Tabs::TabSetMediatorStatics::`vftable';
    v4[1] = &Windows::Internal::ComposableShell::Tabs::TabSetMediatorStatics::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,Windows::Internal::ComposableShell::Tabs::ITabSetMediatorStatics>>'};
    v4[5] = &Windows::Internal::ComposableShell::Tabs::TabSetMediatorStatics::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::Internal::ComposableShell::Tabs::ITabSetMediatorStatics>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,Windows::Internal::ComposableShell::Tabs::ITabSetMediatorStatics>>'};
    Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::Internal::Shell::TaskFlow::DataEngine::IUserPresenceListenerFactory>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::AddRef(
      (__int64)v4,
      v5);
    *a1 = v4;
    Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::Internal::Shell::TaskFlow::DataEngine::IAppViewTitleChangeListenerFactory>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::Release(
      (__int64)v4,
      v6);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v1;
}
