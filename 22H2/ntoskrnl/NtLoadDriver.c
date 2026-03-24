/*
 * XREFs of NtLoadDriver @ 0x140780700
 * Callers:
 *     <none>
 * Callees:
 *     IopLoadDriverImage @ 0x140399778 (IopLoadDriverImage.c)
 */

__int64 __fastcall NtLoadDriver(_OWORD *a1)
{
  return IopLoadDriverImage(a1);
}
