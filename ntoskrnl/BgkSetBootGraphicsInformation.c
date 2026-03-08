/*
 * XREFs of BgkSetBootGraphicsInformation @ 0x140AEE0F4
 * Callers:
 *     NtSetSystemInformation @ 0x1407E1F30 (NtSetSystemInformation.c)
 * Callees:
 *     BgSetBootGraphicsInformation @ 0x140AEE394 (BgSetBootGraphicsInformation.c)
 */

__int64 BgkSetBootGraphicsInformation()
{
  if ( byte_140C6A808 )
    return BgSetBootGraphicsInformation();
  else
    return 3221225473LL;
}
