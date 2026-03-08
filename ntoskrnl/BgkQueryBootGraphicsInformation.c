/*
 * XREFs of BgkQueryBootGraphicsInformation @ 0x140AE9F90
 * Callers:
 *     ExpQuerySystemInformation @ 0x1406AC2A0 (ExpQuerySystemInformation.c)
 * Callees:
 *     BgQueryBootGraphicsInformation @ 0x140381288 (BgQueryBootGraphicsInformation.c)
 */

__int64 __fastcall BgkQueryBootGraphicsInformation(int a1, __int64 a2)
{
  if ( byte_140C6A808 )
    return BgQueryBootGraphicsInformation(a1, a2);
  else
    return 3221225473LL;
}
