/*
 * XREFs of ??$As@UICompositionBrush@Composition@UI@Windows@@@?$ComPtr@UICompositionSurfaceBrush@Composition@UI@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UICompositionBrush@Composition@UI@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18004E34C
 * Callers:
 *     ?EnsureNoiseSurfaceBrush@CAccentAcrylicBlurBehind@@AEAAJXZ @ 0x18004CCD4 (-EnsureNoiseSurfaceBrush@CAccentAcrylicBlurBehind@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x18003DD8C (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionSurfaceBrush>::As<Windows::UI::Composition::ICompositionBrush>(
        _QWORD *a1,
        __int64 *a2)
{
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(a2);
  return (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*a1)(
           *a1,
           &GUID_ab0d7608_30c0_40e9_b568_b60a6bd1fb46,
           a2);
}
