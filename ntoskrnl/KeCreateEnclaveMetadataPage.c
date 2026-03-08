/*
 * XREFs of KeCreateEnclaveMetadataPage @ 0x14056DFD0
 * Callers:
 *     MiDecommitHardwareEnclavePages @ 0x140644F2C (MiDecommitHardwareEnclavePages.c)
 *     MiInitializeEnclaveMetadataPage @ 0x140B96A34 (MiInitializeEnclaveMetadataPage.c)
 * Callees:
 *     KiEncls @ 0x140417230 (KiEncls.c)
 */

__int64 KeCreateEnclaveMetadataPage()
{
  if ( !_bittest64(&KeFeatureBits, 0x28u) )
    return 3221225659LL;
  KiEncls(0xAu);
  return 0LL;
}
