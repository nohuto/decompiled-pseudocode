/*
 * XREFs of BgkQueryBootGraphicsInformation @ 0x1409F248C
 * Callers:
 *     ExpQuerySystemInformation @ 0x1406C9E30 (ExpQuerySystemInformation.c)
 * Callees:
 *     BgQueryBootGraphicsInformation @ 0x14039B714 (BgQueryBootGraphicsInformation.c)
 */

__int64 __fastcall BgkQueryBootGraphicsInformation(int a1, __int64 a2)
{
  if ( byte_140C50BB0 )
    return BgQueryBootGraphicsInformation(a1, a2);
  else
    return 3221225473LL;
}
