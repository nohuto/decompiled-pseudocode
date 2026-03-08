/*
 * XREFs of SystoChar @ 0x1C000BD84
 * Callers:
 *     xxxTranslateAccelerator @ 0x1C000BC34 (xxxTranslateAccelerator.c)
 *     ?xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z @ 0x1C022C64C (-xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z.c)
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
