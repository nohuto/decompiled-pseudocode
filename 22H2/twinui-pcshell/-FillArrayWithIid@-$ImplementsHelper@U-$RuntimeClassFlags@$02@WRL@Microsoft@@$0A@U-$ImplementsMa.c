/*
 * XREFs of ?FillArrayWithIid@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@U?$ImplementsMarker@VCApplicationViewBase@@@Details@23@UIWeakReferenceSource@@UIWin32ApplicationView@@UIAppSizeConstraintsCallback@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAXPEAKPEAU_GUID@@@Z @ 0x180202634
 * Callers:
 *     ?GetIids@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApplicationViewBase@@UIWin32ApplicationView@@UIAppSizeConstraintsCallback@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x1802034D0 (-GetIids@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApp_ea_1802034D0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,0,Microsoft::WRL::Details::ImplementsMarker<CApplicationViewBase>,IWeakReferenceSource,IWin32ApplicationView,IAppSizeConstraintsCallback,Microsoft::WRL::FtmBase>::FillArrayWithIid(
        __int64 a1,
        unsigned int *a2,
        __int64 a3)
{
  int v3; // ecx
  __int64 result; // rax

  v3 = *a2;
  *(GUID *)(a3 + 16LL * *a2) = GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 1)) = GUID_7f25223a_79ad_4e72_a39a_6a194dd604c1;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 2)) = GUID_979cde28_2164_437c_b963_55e5d4ac1d02;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 3)) = GUID_1c9f7515_0917_4bde_9997_aa2108d4c4c0;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 4)) = GUID_00000038_0000_0000_c000_000000000046;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 5)) = GUID_f3527610_c76d_4316_ac8e_28651acf3df3;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 6)) = GUID_dcf504eb_598b_4411_ac89_cf48aba70af1;
  result = (unsigned int)(v3 + 7);
  *a2 = result;
  return result;
}
