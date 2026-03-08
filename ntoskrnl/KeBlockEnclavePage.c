/*
 * XREFs of KeBlockEnclavePage @ 0x14056DDC8
 * Callers:
 *     MiDecommitHardwareEnclavePages @ 0x140644F2C (MiDecommitHardwareEnclavePages.c)
 * Callees:
 *     KiEncls @ 0x140417230 (KiEncls.c)
 *     KiEnclsStatus @ 0x14056E148 (KiEnclsStatus.c)
 */

__int64 KeBlockEnclavePage()
{
  unsigned int v0; // eax

  if ( !_bittest64(&KeFeatureBits, 0x28u) )
    return 3221225659LL;
  do
    v0 = KiEncls(9u);
  while ( v0 == 15 );
  return KiEnclsStatus(v0);
}
