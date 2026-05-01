/*
 * XREFs of ??$As@UIImmersiveApplicationHolographic@@@?$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationHolographic@@@WRL@Microsoft@@@Details@12@@Z @ 0x1802049EC
 * Callers:
 *     ?_EnableSystemVisuals@HolographicPositioner@@AEAAJPEAUIApplicationView@@H@Z @ 0x1802B3B2C (-_EnableSystemVisuals@HolographicPositioner@@AEAAJPEAUIApplicationView@@H@Z.c)
 *     ?DisconnectFromPresentationLayer@ApplicationViewBackedViewHostItem@@UEAAJXZ @ 0x1802C97C0 (-DisconnectFromPresentationLayer@ApplicationViewBackedViewHostItem@@UEAAJXZ.c)
 *     ?OnImmersiveApplicationPresentationChange@ApplicationViewBackedViewHostItem@@UEAAJPEAUIImmersiveApplication@@W4IMMERSIVE_APPLICATION_PRESENTATION_CHANGE@@@Z @ 0x1802C9C90 (-OnImmersiveApplicationPresentationChange@ApplicationViewBackedViewHostItem@@UEAAJPEAUIImmersive.c)
 *     ?RuntimeClassInitialize@ApplicationViewBackedViewHostItem@@QEAAJPEAUIApplicationView@@@Z @ 0x1802CA090 (-RuntimeClassInitialize@ApplicationViewBackedViewHostItem@@QEAAJPEAUIApplicationView@@@Z.c)
 *     ?get_IsBackButtonVisible@ApplicationViewBackedViewHostItem@@UEAAJPEAE@Z @ 0x1802CBD00 (-get_IsBackButtonVisible@ApplicationViewBackedViewHostItem@@UEAAJPEAE@Z.c)
 *     ?get_ReadyToPresent@ApplicationViewBackedViewHostItem@@UEAAJPEAE@Z @ 0x1802CBED0 (-get_ReadyToPresent@ApplicationViewBackedViewHostItem@@UEAAJPEAE@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IImmersiveApplication>::As<IImmersiveApplicationHolographic>(
        _QWORD *a1,
        __int64 *a2)
{
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a2);
  return (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*a1)(
           *a1,
           &GUID_f4921d4f_67d4_4ca9_9ec4_0bc577bb904e,
           a2);
}
