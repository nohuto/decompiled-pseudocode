/*
 * XREFs of KeTrackEnclaveTbFlush @ 0x14057077C
 * Callers:
 *     MiDecommitHardwareEnclavePages @ 0x140647550 (MiDecommitHardwareEnclavePages.c)
 *     MiProtectEnclavePages @ 0x1406482B8 (MiProtectEnclavePages.c)
 * Callees:
 *     KiEncls @ 0x14041F5C0 (KiEncls.c)
 *     KiEnclsStatus @ 0x1405707B8 (KiEnclsStatus.c)
 */

__int64 KeTrackEnclaveTbFlush()
{
  unsigned int v0; // eax

  if ( !_bittest64(&KeFeatureBits, 0x28u) )
    return 3221225659LL;
  v0 = KiEncls(0xCu);
  return KiEnclsStatus(v0);
}
