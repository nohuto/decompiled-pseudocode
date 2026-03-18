/*
 * XREFs of NtLoadDriver @ 0x1407CEFA0
 * Callers:
 *     <none>
 * Callees:
 *     IopLoadDriverImage @ 0x14035A970 (IopLoadDriverImage.c)
 */

__int64 __fastcall NtLoadDriver(_OWORD *a1)
{
  return IopLoadDriverImage(a1);
}
