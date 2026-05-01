/*
 * XREFs of ?FillArrayWithIid@?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$0A@U?$ImplementsMarker@VCActivatedEventArgsWithPrelaunchAndViewIdBase@@@Details@23@UIWeakReferenceSource@@UILaunchActivatedEventArgs@Activation@ApplicationModel@Windows@@UILaunchActivatedEventArgs2@89Windows@@U?$CloakedIid@UIValueMarshalByPropertySet@Internal@Marshaling@Foundation@Windows@@@23@@Details@WRL@Microsoft@@IEAAXPEAKPEAU_GUID@@@Z @ 0x1804E2084
 * Callers:
 *     ?GetIids@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VCActivatedEventArgsWithPrelaunchAndViewIdBase@@UILaunchActivatedEventArgs@Activation@ApplicationModel@Windows@@UILaunchActivatedEventArgs2@678@U?$CloakedIid@UIValueMarshalByPropertySet@Internal@Marshaling@Foundation@Windows@@@23@@Details@WRL@Microsoft@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x1804E2150 (-GetIids@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VCAct_ea_1804E2150.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,0,Microsoft::WRL::Details::ImplementsMarker<CActivatedEventArgsWithPrelaunchAndViewIdBase>,IWeakReferenceSource,Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs,Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs2,Microsoft::WRL::CloakedIid<Windows::Foundation::Marshaling::Internal::IValueMarshalByPropertySet>>::FillArrayWithIid(
        __int64 a1,
        unsigned int *a2,
        __int64 a3)
{
  int v3; // ecx
  __int64 result; // rax

  v3 = *a2;
  *(GUID *)(a3 + 16LL * *a2) = GUID_cf651713_cd08_4fd8_b697_a281b6544e2e;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 1)) = GUID_1cf09b9e_9962_4936_80ff_afc8e8ae5c8c;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 2)) = GUID_930cef4b_b829_40fc_88f4_8513e8a64738;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 3)) = GUID_33f288a6_5c2c_4d27_bac7_7536088f1219;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 4)) = GUID_0c44717b_19f7_48d6_b046_cf22826eaa74;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 5)) = GUID_00000038_0000_0000_c000_000000000046;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 6)) = GUID_fbc93e26_a14a_4b4f_82b0_33bed920af52;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 7)) = GUID_0fd37ebc_9dc9_46b5_9ace_bd95d4565345;
  result = (unsigned int)(v3 + 8);
  *a2 = result;
  return result;
}
