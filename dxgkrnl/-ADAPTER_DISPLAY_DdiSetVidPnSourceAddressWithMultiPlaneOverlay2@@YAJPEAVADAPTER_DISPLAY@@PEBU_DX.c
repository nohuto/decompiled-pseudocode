/*
 * XREFs of ?ADAPTER_DISPLAY_DdiSetVidPnSourceAddressWithMultiPlaneOverlay2@@YAJPEAVADAPTER_DISPLAY@@PEBU_DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY2@@@Z @ 0x1C0047A90
 * Callers:
 *     <none>
 * Callees:
 *     ?DdiSetVidPnSourceAddressWithMultiPlaneOverlay2@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY2@@@Z @ 0x1C0044430 (-DdiSetVidPnSourceAddressWithMultiPlaneOverlay2@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETVIDPNSOURC.c)
 */

__int64 __fastcall ADAPTER_DISPLAY_DdiSetVidPnSourceAddressWithMultiPlaneOverlay2(
        struct ADAPTER_DISPLAY *a1,
        const struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY2 *a2,
        __int64 a3)
{
  return ADAPTER_DISPLAY::DdiSetVidPnSourceAddressWithMultiPlaneOverlay2(a1, a2, a3);
}
