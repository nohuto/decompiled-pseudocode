/*
 * XREFs of ??$Make@VView@?$HashMap@U_GUID@@PEAUIInspectable@@U?$DefaultHash@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@U_GUID@@@4567@U?$DefaultLifetimeTraits@U_GUID@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@U_GUID@@PEAUIInspectable@@U?$DefaultLifetimeTraits@U_GUID@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@PEAV23456@AEAU?$DefaultEqualityPredicate@U_GUID@@@3456@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VView@?$HashMap@U_GUID@@PEAUIInspectable@@U?$DefaultHash@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@U_GUID@@@4567@U?$DefaultLifetimeTraits@U_GUID@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@U_GUID@@PEAUIInspectable@@U?$DefaultLifetimeTraits@U_GUID@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@@12@$$QEAPEAV?$HashMap@U_GUID@@PEAUIInspectable@@U?$DefaultHash@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@U_GUID@@@4567@U?$DefaultLifetimeTraits@U_GUID@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@U_GUID@@PEAUIInspectable@@U?$DefaultLifetimeTraits@U_GUID@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@AEAU?$DefaultEqualityPredicate@U_GUID@@@5678@@Z @ 0x18028DC30
 * Callers:
 *     ?GetView@?$HashMap@U_GUID@@PEAUIInspectable@@U?$DefaultHash@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@U_GUID@@@4567@U?$DefaultLifetimeTraits@U_GUID@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@U_GUID@@PEAUIInspectable@@U?$DefaultLifetimeTraits@U_GUID@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAJPEAPEAU?$IMapView@U_GUID@@PEAUIInspectable@@@345@@Z @ 0x180292BE0 (-GetView@-$HashMap@U_GUID@@PEAUIInspectable@@U-$DefaultHash@U_GUID@@@Internal@Collections@Founda.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180044B4C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??0View@?$HashMap@U_GUID@@PEAUIInspectable@@U?$DefaultHash@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@U_GUID@@@4567@U?$DefaultLifetimeTraits@U_GUID@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@U_GUID@@PEAUIInspectable@@U?$DefaultLifetimeTraits@U_GUID@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@QEAA@PEAV12345@U?$DefaultEqualityPredicate@U_GUID@@@2345@@Z @ 0x18028ED30 (--0View@-$HashMap@U_GUID@@PEAUIInspectable@@U-$DefaultHash@U_GUID@@@Internal@Collections@Foundat.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IMapView@U_GUID@@PEAUIInspectable@@@Collections@Foundation@Windows@@U?$IIterable@PEAU?$IKeyValuePair@U_GUID@@PEAUIInspectable@@@Collections@Foundation@Windows@@@567@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1802946E0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$IM_ea_1802946E0.c)
 */

__int64 *__fastcall Microsoft::WRL::Details::Make<Windows::Foundation::Collections::Internal::HashMap<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultHash<_GUID>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,0,1,0>>::View,Windows::Foundation::Collections::Internal::HashMap<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultHash<_GUID>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,0,1,0>> *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<_GUID> &>(
        __int64 *a1,
        _QWORD *a2)
{
  LPVOID v4; // rax
  __int64 v5; // rdi

  *a1 = 0LL;
  v4 = DefaultHeap::Alloc(0x60uLL);
  if ( v4 )
  {
    v5 = Windows::Foundation::Collections::Internal::HashMap<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultHash<_GUID>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,0,1,0>>::View::View(
           v4,
           *a2);
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IMapView<_GUID,IInspectable *>,Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<_GUID,IInspectable *> *>,Microsoft::WRL::FtmBase>::Release(*a1);
    *a1 = v5;
  }
  return a1;
}
