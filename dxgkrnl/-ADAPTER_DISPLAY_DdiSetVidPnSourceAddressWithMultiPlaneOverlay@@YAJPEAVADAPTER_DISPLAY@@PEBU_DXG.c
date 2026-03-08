/*
 * XREFs of ?ADAPTER_DISPLAY_DdiSetVidPnSourceAddressWithMultiPlaneOverlay@@YAJPEAVADAPTER_DISPLAY@@PEBU_DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY@@@Z @ 0x1C0047AB0
 * Callers:
 *     <none>
 * Callees:
 *     ?DdiSetVidPnSourceAddressWithMultiPlaneOverlay@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY@@@Z @ 0x1C0044750 (-DdiSetVidPnSourceAddressWithMultiPlaneOverlay@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETVIDPNSOURCE.c)
 */

__int64 __fastcall ADAPTER_DISPLAY_DdiSetVidPnSourceAddressWithMultiPlaneOverlay(
        struct ADAPTER_DISPLAY *a1,
        const struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY *a2,
        __int64 a3)
{
  return ADAPTER_DISPLAY::DdiSetVidPnSourceAddressWithMultiPlaneOverlay(a1, a2, a3);
}
