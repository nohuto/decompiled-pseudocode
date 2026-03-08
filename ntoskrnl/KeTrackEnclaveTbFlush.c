/*
 * XREFs of KeTrackEnclaveTbFlush @ 0x14056E10C
 * Callers:
 *     MiDecommitHardwareEnclavePages @ 0x140644F2C (MiDecommitHardwareEnclavePages.c)
 *     MiProtectEnclavePages @ 0x140645C9C (MiProtectEnclavePages.c)
 * Callees:
 *     KiEncls @ 0x140417230 (KiEncls.c)
 *     KiEnclsStatus @ 0x14056E148 (KiEnclsStatus.c)
 */

__int64 KeTrackEnclaveTbFlush()
{
  unsigned int v0; // eax

  if ( !_bittest64(&KeFeatureBits, 0x28u) )
    return 3221225659LL;
  v0 = KiEncls(0xCu);
  return KiEnclsStatus(v0);
}
