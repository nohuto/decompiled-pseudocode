/*
 * XREFs of DxgkEvict @ 0x1C01A2130
 * Callers:
 *     <none>
 * Callees:
 *     ?DxgkEvictInternal@@YAJPEAU_D3DKMT_EVICT@@HPEAD@Z @ 0x1C01A2B9C (-DxgkEvictInternal@@YAJPEAU_D3DKMT_EVICT@@HPEAD@Z.c)
 */

int __fastcall DxgkEvict(struct _D3DKMT_EVICT *a1)
{
  return DxgkEvictInternal(a1, 1, 0LL);
}
