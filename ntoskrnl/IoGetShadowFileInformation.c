/*
 * XREFs of IoGetShadowFileInformation @ 0x140554660
 * Callers:
 *     <none>
 * Callees:
 *     IopGetFileObjectExtension @ 0x14023EB8C (IopGetFileObjectExtension.c)
 */

__int64 __fastcall IoGetShadowFileInformation(__int64 a1)
{
  return IopGetFileObjectExtension(a1, 9, 0LL);
}
