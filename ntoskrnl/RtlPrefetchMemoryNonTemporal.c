/*
 * XREFs of RtlPrefetchMemoryNonTemporal @ 0x140420FA0
 * Callers:
 *     RtlPrefetchMemoryNonTemporal @ 0x140420FA0 (RtlPrefetchMemoryNonTemporal.c)
 * Callees:
 *     <none>
 */

void __stdcall RtlPrefetchMemoryNonTemporal(PVOID Source, SIZE_T Length)
{
  bool v2; // cc

  do
  {
    _mm_prefetch((const char *)Source, 0);
    Source = (char *)Source + 64;
    v2 = Length <= 0x40;
    Length -= 64LL;
  }
  while ( !v2 );
}
