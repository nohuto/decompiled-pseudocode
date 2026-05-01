/*
 * XREFs of ?IsTextScaleFactorWithinThreshold@@YAEH_N@Z @ 0x18009B3B0
 * Callers:
 *     ?PositionCortanaWindow@SearchAppDesktopExperienceView@@AEAAJ_N0@Z @ 0x180018510 (-PositionCortanaWindow@SearchAppDesktopExperienceView@@AEAAJ_N0@Z.c)
 *     ?GetDefaultCortanaWidthWithoutGutter@@YAHPEBUtagRECT@@H_N@Z @ 0x18009B248 (-GetDefaultCortanaWidthWithoutGutter@@YAHPEBUtagRECT@@H_N@Z.c)
 *     ?PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z @ 0x18027F378 (-PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z.c)
 * Callees:
 *     ?GetDWORD@CortanaFeatureConfiguration@@YAJW4FeatureId@1@PEAK@Z @ 0x180018BA0 (-GetDWORD@CortanaFeatureConfiguration@@YAJW4FeatureId@1@PEAK@Z.c)
 *     ??$ActivateInstance@V?$ComPtr@UIUISettings2@ViewManagement@UI@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIUISettings2@ViewManagement@UI@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180018F84 (--$ActivateInstance@V-$ComPtr@UIUISettings2@ViewManagement@UI@Windows@@@WRL@Microsoft@@@Foundati.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18002A860 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall IsTextScaleFactorWithinThreshold(int a1)
{
  char v2; // bl
  double v4; // [rsp+20h] [rbp-40h] BYREF
  __int64 v5; // [rsp+28h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+30h] [rbp-30h] BYREF
  __int64 v7; // [rsp+48h] [rbp-18h]

  v2 = 0;
  v5 = 0LL;
  v7 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.UI.ViewManagement.UISettings",
    0x25u,
    0x24u);
  Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::UI::ViewManagement::IUISettings2>>(v7, &v5);
  if ( v5
    && (v4 = DOUBLE_1_0, (*(int (__fastcall **)(__int64, double *))(*(_QWORD *)v5 + 48LL))(v5, &v4) >= 0)
    && v4 > 1.25
    || (LODWORD(v4) = 0, (int)CortanaFeatureConfiguration::GetDWORD((CortanaFeatureConfiguration *)0x39, &v4) >= 0)
    && a1 >= SLODWORD(v4)
    && (int)CortanaFeatureConfiguration::GetDWORD((CortanaFeatureConfiguration *)0x38, &v4) >= 0
    && LODWORD(v4) )
  {
    v2 = 1;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v5);
  return v2;
}
