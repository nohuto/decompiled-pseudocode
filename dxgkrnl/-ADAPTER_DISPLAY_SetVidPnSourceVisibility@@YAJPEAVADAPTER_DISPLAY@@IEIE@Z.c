/*
 * XREFs of ?ADAPTER_DISPLAY_SetVidPnSourceVisibility@@YAJPEAVADAPTER_DISPLAY@@IEIE@Z @ 0x1C0016E20
 * Callers:
 *     <none>
 * Callees:
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1C01738D4 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY_SetVidPnSourceVisibility(
        struct ADAPTER_DISPLAY *a1,
        unsigned int a2,
        unsigned __int8 a3,
        unsigned int a4,
        char a5)
{
  return ADAPTER_DISPLAY::SetVidPnSourceVisibility(a1, a2, a3, a4, a5);
}
