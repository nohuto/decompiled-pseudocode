/*
 * XREFs of ExpAeMeasureContention @ 0x140391544
 * Callers:
 *     ExpAeThresholdInitWorker @ 0x1403914A0 (ExpAeThresholdInitWorker.c)
 *     ExpAeThresholdInitialization @ 0x140B5E160 (ExpAeThresholdInitialization.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall ExpAeMeasureContention(signed __int64 *a1)
{
  unsigned __int64 v1; // r8
  signed __int64 v2; // rax
  signed __int64 v3; // rtt

  v1 = __rdtsc();
  _m_prefetchw(a1);
  v2 = *a1;
  do
  {
    v3 = v2;
    v2 = _InterlockedCompareExchange64(a1, v2 + 1, v2);
  }
  while ( v3 != v2 );
  return __rdtsc() - v1;
}
