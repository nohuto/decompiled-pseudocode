/*
 * XREFs of KeCreateEnclaveMetadataPage @ 0x140570640
 * Callers:
 *     MiDecommitHardwareEnclavePages @ 0x140647550 (MiDecommitHardwareEnclavePages.c)
 *     MiInitializeEnclaveMetadataPage @ 0x140B9AC44 (MiInitializeEnclaveMetadataPage.c)
 * Callees:
 *     KiEncls @ 0x14041F5C0 (KiEncls.c)
 */

__int64 KeCreateEnclaveMetadataPage()
{
  if ( !_bittest64(&KeFeatureBits, 0x28u) )
    return 3221225659LL;
  KiEncls(0xAu);
  return 0LL;
}
