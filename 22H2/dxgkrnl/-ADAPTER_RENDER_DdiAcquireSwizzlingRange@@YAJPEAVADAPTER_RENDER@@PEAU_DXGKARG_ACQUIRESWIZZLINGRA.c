/*
 * XREFs of ?ADAPTER_RENDER_DdiAcquireSwizzlingRange@@YAJPEAVADAPTER_RENDER@@PEAU_DXGKARG_ACQUIRESWIZZLINGRANGE@@@Z @ 0x1C0019A00
 * Callers:
 *     <none>
 * Callees:
 *     ?DdiAcquireSwizzlingRange@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_ACQUIRESWIZZLINGRANGE@@@Z @ 0x1C01609C0 (-DdiAcquireSwizzlingRange@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_ACQUIRESWIZZLINGRANGE@@@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER_DdiAcquireSwizzlingRange(
        struct ADAPTER_RENDER *a1,
        struct _DXGKARG_ACQUIRESWIZZLINGRANGE *a2)
{
  return ADAPTER_RENDER::DdiAcquireSwizzlingRange(a1, a2);
}
