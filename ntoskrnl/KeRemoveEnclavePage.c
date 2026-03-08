/*
 * XREFs of KeRemoveEnclavePage @ 0x14056E0D0
 * Callers:
 *     MiDecommitHardwareEnclavePages @ 0x140644F2C (MiDecommitHardwareEnclavePages.c)
 *     MiDeleteAllHardwareEnclaves @ 0x140AAA0D0 (MiDeleteAllHardwareEnclaves.c)
 *     MiDeleteEnclavePages @ 0x140AAA2F8 (MiDeleteEnclavePages.c)
 * Callees:
 *     KiEncls @ 0x140417230 (KiEncls.c)
 *     KiEnclsStatus @ 0x14056E148 (KiEnclsStatus.c)
 */

__int64 KeRemoveEnclavePage()
{
  unsigned int v0; // eax

  if ( !_bittest64(&KeFeatureBits, 0x28u) )
    return 3221225659LL;
  v0 = KiEncls(3u);
  return KiEnclsStatus(v0);
}
