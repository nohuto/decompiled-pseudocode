/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@U?$ImplementsMarker@VCApplicationViewBase@@@Details@23@UIWeakReferenceSource@@UIWin32ApplicationView@@UIAppSizeConstraintsCallback@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180202210
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApplicationViewBase@@UIWin32ApplicationView@@UIAppSizeConstraintsCallback@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180204050 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_180204050.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180043060 (InlineIsEqualGUID.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIAppSizeConstraintsCallback@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800438C0 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIAppSizeConstraintsCal.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIApplicationView@@UIApplicationView2@@UIApplicationViewBase@@UIApplicationViewWithEnterpriseId@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180058930 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIApplicationView@@UIAp.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,0,Microsoft::WRL::Details::ImplementsMarker<CApplicationViewBase>,IWeakReferenceSource,IWin32ApplicationView,IAppSizeConstraintsCallback,Microsoft::WRL::FtmBase>::CanCastTo(
        __int64 a1,
        int *a2,
        _QWORD *a3)
{
  unsigned int CanCastTo; // r11d
  BOOL IsEqualGUID; // eax
  _DWORD *v6; // rcx
  _QWORD *v7; // r8
  __int64 v8; // r9

  CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IApplicationView,IApplicationView2,IApplicationViewBase,IApplicationViewWithEnterpriseId>::CanCastTo(
                a1,
                a2,
                a3);
  if ( CanCastTo == -2147467262 )
  {
    IsEqualGUID = InlineIsEqualGUID(a2, &GUID_00000038_0000_0000_c000_000000000046);
    CanCastTo = 0;
    if ( IsEqualGUID || InlineIsEqualGUID(v6, &GUID_f3527610_c76d_4316_ac8e_28651acf3df3) )
      *v7 = v8;
    else
      return (unsigned int)Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IAppSizeConstraintsCallback,Microsoft::WRL::FtmBase>::CanCastTo(
                             v8 + 8,
                             a2,
                             v7);
  }
  return CanCastTo;
}
