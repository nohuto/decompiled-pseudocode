/*
 * XREFs of DXGADAPTER_DdiQueryAdapterInfo @ 0x1C00242D0
 * Callers:
 *     <none>
 * Callees:
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1C01B473C (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 */

__int64 __fastcall DXGADAPTER_DdiQueryAdapterInfo(DXGADAPTER *a1, struct _DXGKARG_QUERYADAPTERINFO *a2)
{
  return DXGADAPTER::DdiQueryAdapterInfo(a1, a2);
}
