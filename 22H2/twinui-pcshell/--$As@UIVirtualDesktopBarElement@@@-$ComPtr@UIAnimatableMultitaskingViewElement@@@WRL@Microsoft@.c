/*
 * XREFs of ??$As@UIVirtualDesktopBarElement@@@?$ComPtr@UIAnimatableMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIVirtualDesktopBarElement@@@WRL@Microsoft@@@Details@12@@Z @ 0x180407CF4
 * Callers:
 *     ?CreateFrame@CMultitaskingViewFrame@@UEAAJAEBUCRect@Geometry@@W4MultitaskingViewZOrder@@@Z @ 0x1804089D0 (-CreateFrame@CMultitaskingViewFrame@@UEAAJAEBUCRect@Geometry@@W4MultitaskingViewZOrder@@@Z.c)
 *     ?_OnWindowPosChanged@CMultitaskingViewFrame@@AEAAXXZ @ 0x18040AD04 (-_OnWindowPosChanged@CMultitaskingViewFrame@@AEAAXXZ.c)
 *     ?AnimatePositionChanged@VirtualDesktopAddAnimationCoordinator@@MEAAXAEBUPositionChangedInfo@ItemAnimationCoordinatorBase@@@Z @ 0x180432FC0 (-AnimatePositionChanged@VirtualDesktopAddAnimationCoordinator@@MEAAXAEBUPositionChangedInfo@Item.c)
 *     ?AnimatePositionChanged@VirtualDesktopRemoveAnimationCoordinator@@MEAAXAEBUPositionChangedInfo@ItemAnimationCoordinatorBase@@@Z @ 0x180433780 (-AnimatePositionChanged@VirtualDesktopRemoveAnimationCoordinator@@MEAAXAEBUPositionChangedInfo@I.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IAnimatableMultitaskingViewElement>::As<IVirtualDesktopBarElement>(
        _QWORD *a1,
        __int64 *a2)
{
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a2);
  return (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*a1)(
           *a1,
           &GUID_85b9f1f8_fde5_4c2f_852f_d7b23f7d3a96,
           a2);
}
