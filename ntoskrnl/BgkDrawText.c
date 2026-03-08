/*
 * XREFs of BgkDrawText @ 0x140AEE00C
 * Callers:
 *     NtDrawText @ 0x140604340 (NtDrawText.c)
 * Callees:
 *     BgDisplayString @ 0x140AEE1B8 (BgDisplayString.c)
 */

__int64 BgkDrawText()
{
  if ( byte_140C6A808 && byte_140C6A80A )
    return BgDisplayString();
  else
    return 3221225473LL;
}
