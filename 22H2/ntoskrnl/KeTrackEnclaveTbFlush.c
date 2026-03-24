/*
 * XREFs of KeTrackEnclaveTbFlush @ 0x140515374
 * Callers:
 *     MiDecommitHardwareEnclavePages @ 0x140549968 (MiDecommitHardwareEnclavePages.c)
 *     MiProtectEnclavePages @ 0x14054AA70 (MiProtectEnclavePages.c)
 * Callees:
 *     KiEncls @ 0x1403FE6E0 (KiEncls.c)
 *     KiEnclsStatus @ 0x1405153B8 (KiEnclsStatus.c)
 */

__int64 KeTrackEnclaveTbFlush()
{
  unsigned int v0; // eax

  if ( (KeFeatureBits & 0x10000000000LL) == 0 )
    return 3221225659LL;
  v0 = KiEncls(0xCu);
  return KiEnclsStatus(v0);
}
