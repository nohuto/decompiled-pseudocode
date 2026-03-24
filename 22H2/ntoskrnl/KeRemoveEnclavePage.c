/*
 * XREFs of KeRemoveEnclavePage @ 0x140515330
 * Callers:
 *     MiDecommitHardwareEnclavePages @ 0x140549968 (MiDecommitHardwareEnclavePages.c)
 *     MiDeleteAllHardwareEnclaves @ 0x1409B0B00 (MiDeleteAllHardwareEnclaves.c)
 *     MiDeleteEnclavePages @ 0x1409B0CA0 (MiDeleteEnclavePages.c)
 * Callees:
 *     KiEncls @ 0x1403FE6E0 (KiEncls.c)
 *     KiEnclsStatus @ 0x1405153B8 (KiEnclsStatus.c)
 */

__int64 KeRemoveEnclavePage()
{
  unsigned int v0; // eax

  if ( (KeFeatureBits & 0x10000000000LL) == 0 )
    return 3221225659LL;
  v0 = KiEncls(3u);
  return KiEnclsStatus(v0);
}
