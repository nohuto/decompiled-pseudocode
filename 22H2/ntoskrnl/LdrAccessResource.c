/*
 * XREFs of LdrAccessResource @ 0x1407C5ED0
 * Callers:
 *     InitBootProcessor @ 0x140A39F24 (InitBootProcessor.c)
 *     FindBitmapResource @ 0x140A6B744 (FindBitmapResource.c)
 * Callees:
 *     LdrpAccessResourceData @ 0x14067255C (LdrpAccessResourceData.c)
 */

__int64 __fastcall LdrAccessResource(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  return LdrpAccessResourceData(a1, a2, a3, a4);
}
