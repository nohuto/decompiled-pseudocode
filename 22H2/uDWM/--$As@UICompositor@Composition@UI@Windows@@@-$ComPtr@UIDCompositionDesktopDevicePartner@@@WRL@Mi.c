/*
 * XREFs of ??$As@UICompositor@Composition@UI@Windows@@@?$ComPtr@UIDCompositionDesktopDevicePartner@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UICompositor@Composition@UI@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x180046340
 * Callers:
 *     ?InitializeDComp@CAccentAcrylicBlurBehind@@AEAAJXZ @ 0x180045D4C (-InitializeDComp@CAccentAcrylicBlurBehind@@AEAAJXZ.c)
 *     ?EnsureAcrylicBrushForAccent@CAccentAcrylicBlurBehind@@AEAAJK@Z @ 0x18004C930 (-EnsureAcrylicBrushForAccent@CAccentAcrylicBlurBehind@@AEAAJK@Z.c)
 *     ?EnsureNoiseSurfaceBrush@CAccentAcrylicBlurBehind@@AEAAJXZ @ 0x18004CC24 (-EnsureNoiseSurfaceBrush@CAccentAcrylicBlurBehind@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18003F194 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IDCompositionDesktopDevicePartner>::As<Windows::UI::Composition::ICompositor>(
        _QWORD *a1,
        __int64 *a2)
{
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(a2);
  return (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*a1)(
           *a1,
           &GUID_b403ca50_7f8c_4e83_985f_cc45060036d8,
           a2);
}
