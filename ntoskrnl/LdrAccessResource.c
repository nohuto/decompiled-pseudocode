/*
 * XREFs of LdrAccessResource @ 0x140810240
 * Callers:
 *     FindBitmapResource @ 0x140B477D0 (FindBitmapResource.c)
 *     InitBootProcessor @ 0x140B47864 (InitBootProcessor.c)
 * Callees:
 *     LdrpAccessResourceData @ 0x1407E987C (LdrpAccessResourceData.c)
 */

__int64 __fastcall LdrAccessResource(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  return LdrpAccessResourceData(a1, a2, a3, a4);
}
