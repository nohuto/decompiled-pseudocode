/*
 * XREFs of sub_1800210D8 @ 0x1800210D8
 * Callers:
 *     sub_180021090 @ 0x180021090 (sub_180021090.c)
 *     sub_18011A25C @ 0x18011A25C (sub_18011A25C.c)
 * Callees:
 *     <none>
 */

LPVOID __fastcall sub_1800210D8(unsigned __int64 a1)
{
  if ( a1 > 0x7FFFFFFF )
    return 0LL;
  else
    return CoTaskMemAlloc((unsigned int)a1);
}
