/*
 * XREFs of BgkQueryBootGraphicsInformation @ 0x140AEDF54
 * Callers:
 *     ExpQuerySystemInformation @ 0x1407268C0 (ExpQuerySystemInformation.c)
 * Callees:
 *     BgQueryBootGraphicsInformation @ 0x140383ED8 (BgQueryBootGraphicsInformation.c)
 */

__int64 __fastcall BgkQueryBootGraphicsInformation(int a1, __int64 a2)
{
  if ( byte_140C6AC88 )
    return BgQueryBootGraphicsInformation(a1, a2);
  else
    return 3221225473LL;
}
