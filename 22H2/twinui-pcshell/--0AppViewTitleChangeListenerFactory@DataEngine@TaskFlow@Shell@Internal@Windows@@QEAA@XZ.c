/*
 * XREFs of ??0AppViewTitleChangeListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@QEAA@XZ @ 0x18029F044
 * Callers:
 *     ??$Make@VAppViewTitleChangeListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VAppViewTitleChangeListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@@12@XZ @ 0x18029D830 (--$Make@VAppViewTitleChangeListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@$$V@Detai.c)
 *     ??$MakeAndInitialize@VAppViewTitleChangeListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@V123456@$$V@Details@WRL@Microsoft@@YAJPEAPEAVAppViewTitleChangeListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@@Z @ 0x18029DA08 (--$MakeAndInitialize@VAppViewTitleChangeListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windo.c)
 * Callees:
 *     ??0?$AgileActivationFactory@UIAppViewTitleChangeListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@VNil@Details@WRL@Microsoft@@V789Microsoft@@$0A@@WRL@Microsoft@@QEAA@XZ @ 0x18029E484 (--0-$AgileActivationFactory@UIAppViewTitleChangeListenerFactory@DataEngine@TaskFlow@Shell@Intern.c)
 */

Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListenerFactory *__fastcall Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListenerFactory::AppViewTitleChangeListenerFactory(
        Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListenerFactory *this)
{
  Microsoft::WRL::AgileActivationFactory<Windows::Internal::Shell::TaskFlow::DataEngine::IAppViewTitleChangeListenerFactory,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::AgileActivationFactory<Windows::Internal::Shell::TaskFlow::DataEngine::IAppViewTitleChangeListenerFactory,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>((__int64)this);
  *(_QWORD *)this = &Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::Internal::Shell::TaskFlow::DataEngine::IAppViewTitleChangeListenerFactory>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::`vftable';
  *((_QWORD *)this + 1) = &Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListenerFactory::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,Windows::Internal::Shell::TaskFlow::DataEngine::IAppViewTitleChangeListenerFactory>>'};
  *((_QWORD *)this + 5) = &Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListenerFactory::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::Internal::Shell::TaskFlow::DataEngine::IAppViewTitleChangeListenerFactory>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,Windows::Internal::Shell::TaskFlow::DataEngine::IAppViewTitleChangeListenerFactory>>'};
  return this;
}
