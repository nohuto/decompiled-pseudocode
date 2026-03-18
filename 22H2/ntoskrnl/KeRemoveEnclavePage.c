/*
 * XREFs of KeRemoveEnclavePage @ 0x140570740
 * Callers:
 *     MiDecommitHardwareEnclavePages @ 0x140647550 (MiDecommitHardwareEnclavePages.c)
 *     MiDeleteAllHardwareEnclaves @ 0x140AAD300 (MiDeleteAllHardwareEnclaves.c)
 *     MiDeleteEnclavePages @ 0x140AAD528 (MiDeleteEnclavePages.c)
 * Callees:
 *     KiEncls @ 0x14041F5C0 (KiEncls.c)
 *     KiEnclsStatus @ 0x1405707B8 (KiEnclsStatus.c)
 */

__int64 KeRemoveEnclavePage()
{
  unsigned int v0; // eax

  if ( !_bittest64(&KeFeatureBits, 0x28u) )
    return 3221225659LL;
  v0 = KiEncls(3u);
  return KiEnclsStatus(v0);
}
