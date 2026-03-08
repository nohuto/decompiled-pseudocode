/*
 * XREFs of ?ADAPTER_RENDER_DdiFormatHistoryBuffer@@YAJPEAVADAPTER_RENDER@@QEAXPEAU_DXGKARG_FORMATHISTORYBUFFER@@@Z @ 0x1C0047C10
 * Callers:
 *     <none>
 * Callees:
 *     ?DdiFormatHistoryBuffer@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_FORMATHISTORYBUFFER@@@Z @ 0x1C0042860 (-DdiFormatHistoryBuffer@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_FORMATHISTORYBUFFER@@@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER_DdiFormatHistoryBuffer(
        struct ADAPTER_RENDER *a1,
        void *const a2,
        struct _DXGKARG_FORMATHISTORYBUFFER *a3)
{
  return ADAPTER_RENDER::DdiFormatHistoryBuffer(a1, a2, a3);
}
