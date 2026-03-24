/*
 * XREFs of BgkDrawText @ 0x1409F63DC
 * Callers:
 *     NtDrawText @ 0x1405B2680 (NtDrawText.c)
 * Callees:
 *     BgDisplayString @ 0x1409F6570 (BgDisplayString.c)
 */

__int64 BgkDrawText()
{
  if ( byte_140C50BB0 && byte_140C50BB1 )
    return BgDisplayString();
  else
    return 3221225473LL;
}
