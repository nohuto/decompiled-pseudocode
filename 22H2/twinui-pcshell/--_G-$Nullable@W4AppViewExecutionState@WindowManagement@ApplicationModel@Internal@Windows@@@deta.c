/*
 * XREFs of ??_G?$Nullable@W4AppViewExecutionState@WindowManagement@ApplicationModel@Internal@Windows@@@details@@UEAAPEAXI@Z @ 0x180085030
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IReference@W4AppViewExecutionState@WindowManagement@ApplicationModel@Internal@Windows@@@Foundation@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAA@XZ @ 0x1800851B8 (--1-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$IReference@W4AppViewE.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180090184 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

_QWORD *__fastcall details::Nullable<enum Windows::Internal::ApplicationModel::WindowManagement::AppViewExecutionState>::`scalar deleting destructor'(
        _QWORD *a1,
        char a2)
{
  *a1 = &details::Nullable<enum Windows::Internal::ApplicationModel::WindowManagement::AppViewExecutionState>::`vftable';
  a1[1] = &details::Nullable<enum Windows::Internal::ApplicationModel::WindowManagement::AppViewExecutionState>::`vftable'{for `IWeakReferenceSource'};
  a1[2] = &details::Nullable<enum Windows::Internal::ApplicationModel::WindowManagement::AppViewExecutionState>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::IReference<enum Windows::Internal::ApplicationModel::WindowManagement::AppViewExecutionState>,Microsoft::WRL::FtmBase>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::IReference<enum Windows::Internal::ApplicationModel::WindowManagement::AppViewExecutionState>,Microsoft::WRL::FtmBase>();
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x48);
  return a1;
}
