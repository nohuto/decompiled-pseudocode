/*
 * XREFs of _PostQuitMessage @ 0x1C013A284
 * Callers:
 *     xxxFreeWindow @ 0x1C00E8F70 (xxxFreeWindow.c)
 * Callees:
 *     IPostQuitMessage @ 0x1C003C308 (IPostQuitMessage.c)
 */

__int64 __fastcall PostQuitMessage(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  return IPostQuitMessage(gptiCurrent, a1, a3, a4);
}
