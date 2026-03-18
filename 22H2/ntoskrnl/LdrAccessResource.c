/*
 * XREFs of LdrAccessResource @ 0x140822C20
 * Callers:
 *     FindBitmapResource @ 0x140B526E0 (FindBitmapResource.c)
 *     InitBootProcessor @ 0x140B52774 (InitBootProcessor.c)
 * Callees:
 *     LdrpAccessResourceData @ 0x140755B5C (LdrpAccessResourceData.c)
 */

__int64 __fastcall LdrAccessResource(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  return LdrpAccessResourceData(a1, a2, a3, a4);
}
