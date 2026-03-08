/*
 * XREFs of NtLoadDriver @ 0x14077FF00
 * Callers:
 *     <none>
 * Callees:
 *     IopLoadDriverImage @ 0x1402EE2DC (IopLoadDriverImage.c)
 */

__int64 __fastcall NtLoadDriver(_OWORD *a1)
{
  return IopLoadDriverImage(a1);
}
