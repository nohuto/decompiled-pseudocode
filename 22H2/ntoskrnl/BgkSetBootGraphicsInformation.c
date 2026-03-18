/*
 * XREFs of BgkSetBootGraphicsInformation @ 0x140AF20F4
 * Callers:
 *     NtSetSystemInformation @ 0x14075F340 (NtSetSystemInformation.c)
 * Callees:
 *     BgSetBootGraphicsInformation @ 0x140AF2394 (BgSetBootGraphicsInformation.c)
 */

__int64 BgkSetBootGraphicsInformation()
{
  if ( byte_140C6AC88 )
    return BgSetBootGraphicsInformation();
  else
    return 3221225473LL;
}
