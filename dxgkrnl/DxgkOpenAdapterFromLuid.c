/*
 * XREFs of DxgkOpenAdapterFromLuid @ 0x1C01B89F0
 * Callers:
 *     <none>
 * Callees:
 *     ?DxgkOpenAdapterFromLuidImpl@@YAJPEAU_D3DKMT_OPENADAPTERFROMLUID@@E@Z @ 0x1C01B7980 (-DxgkOpenAdapterFromLuidImpl@@YAJPEAU_D3DKMT_OPENADAPTERFROMLUID@@E@Z.c)
 */

__int64 __fastcall DxgkOpenAdapterFromLuid(struct _D3DKMT_OPENADAPTERFROMLUID *a1, __int64 a2, __int64 a3)
{
  return DxgkOpenAdapterFromLuidImpl(a1, 1, a3);
}
