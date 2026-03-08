/*
 * XREFs of ?ADAPTER_RENDER_NotifyDeferredDestructionComplete@@YAXPEAVADAPTER_RENDER@@PEAVDXGTERMINATIONTRACKER@@@Z @ 0x1C0012920
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyDeferredDestructionComplete@ADAPTER_RENDER@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z @ 0x1C01D0CB0 (-NotifyDeferredDestructionComplete@ADAPTER_RENDER@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z.c)
 */

void __fastcall ADAPTER_RENDER_NotifyDeferredDestructionComplete(
        struct ADAPTER_RENDER *a1,
        struct DXGTERMINATIONTRACKER *a2)
{
  ADAPTER_RENDER::NotifyDeferredDestructionComplete(a1, a2);
}
