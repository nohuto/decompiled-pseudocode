/*
 * XREFs of DXGADAPTER_DdiQueryAdapterInfo @ 0x1C0023DE0
 * Callers:
 *     <none>
 * Callees:
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1C019F070 (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 */

__int64 __fastcall DXGADAPTER_DdiQueryAdapterInfo(DXGADAPTER *a1, struct _DXGKARG_QUERYADAPTERINFO *a2)
{
  return DXGADAPTER::DdiQueryAdapterInfo(a1, a2);
}
