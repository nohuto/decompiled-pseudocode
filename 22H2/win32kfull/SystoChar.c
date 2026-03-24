/*
 * XREFs of SystoChar @ 0x1C010B4B0
 * Callers:
 *     xxxTranslateAccelerator @ 0x1C010B0F8 (xxxTranslateAccelerator.c)
 *     ?xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z @ 0x1C0244A64 (-xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SystoChar(unsigned int a1, int a2)
{
  __int64 result; // rax

  if ( a1 - 260 > 3 )
    return a1;
  result = a1 - 4;
  if ( (a2 & 0x20000000) != 0 )
    return a1;
  return result;
}
