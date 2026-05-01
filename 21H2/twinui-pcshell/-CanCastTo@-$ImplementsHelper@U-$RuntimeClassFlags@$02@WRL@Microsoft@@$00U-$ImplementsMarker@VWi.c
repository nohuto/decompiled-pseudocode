/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00U?$ImplementsMarker@VWindowWrapperBase@@@Details@23@UIWeakReferenceSource@@UILegacyViewWrapper@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18034A0F8
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VWindowWrapperBase@@UILegacyViewWrapper@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18034A5C0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_18034A5C0.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180043060 (InlineIsEqualGUID.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@UILegacyViewWrapper@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180312524 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakRefe_ea_180312524.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@U?$ChainInterfaces@UIWindowWrapperInternal@@UIWindowWrapper@ViewManagerInterop@Shell@Internal@Windows@@VNil@Details@WRL@Microsoft@@V789Microsoft@@V789Microsoft@@V789Microsoft@@V789Microsoft@@V789Microsoft@@V789Microsoft@@V789Microsoft@@@23@UIViewVisibilityOverride@5Desktop@678@UIViewResourcePolicies@5678@UIClientWindowState@5678@UIViewRecoveryState@5678@UIFramedViewWrapper@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18034A160 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIViewWrapper@ViewManag.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<WindowWrapperBase>,IWeakReferenceSource,ILegacyViewWrapper>::CanCastTo(
        __int64 a1,
        _DWORD *a2)
{
  BOOL IsEqualGUID; // eax
  _QWORD *v5; // r8
  unsigned int CanCastTo; // r9d

  IsEqualGUID = InlineIsEqualGUID(a2, &GUID_6d043cea_6cdf_43a3_b9d0_d755297c11d2);
  CanCastTo = 0;
  if ( IsEqualGUID )
  {
    *v5 = a1;
  }
  else
  {
    CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Internal::Shell::ViewManagerInterop::IViewWrapper,Microsoft::WRL::ChainInterfaces<IWindowWrapperInternal,Windows::Internal::Shell::ViewManagerInterop::IWindowWrapper,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Windows::Internal::Shell::Desktop::ViewManagerInterop::IViewVisibilityOverride,Windows::Internal::Shell::ViewManagerInterop::IViewResourcePolicies,Windows::Internal::Shell::ViewManagerInterop::IClientWindowState,Windows::Internal::Shell::ViewManagerInterop::IViewRecoveryState,IFramedViewWrapper,Microsoft::WRL::FtmBase>::CanCastTo(
                  a1 + 8,
                  a2,
                  v5,
                  0LL);
    if ( CanCastTo == -2147467262 )
      return (unsigned int)Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,ILegacyViewWrapper>::CanCastTo(
                             a1 + 584,
                             a2);
  }
  return CanCastTo;
}
