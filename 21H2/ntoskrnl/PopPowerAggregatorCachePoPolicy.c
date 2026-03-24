/*
 * XREFs of PopPowerAggregatorCachePoPolicy @ 0x14078E37C
 * Callers:
 *     PopPowerAggregatorHandleIntentUnsafe @ 0x140775E14 (PopPowerAggregatorHandleIntentUnsafe.c)
 *     PopPowerAggregatorInitialize @ 0x140A40878 (PopPowerAggregatorInitialize.c)
 * Callees:
 *     PopNetCheckOpportunisticDs @ 0x14078E40C (PopNetCheckOpportunisticDs.c)
 */

char PopPowerAggregatorCachePoPolicy()
{
  int v0; // ecx
  char result; // al

  v0 = 0;
  qword_140C21788 = 0LL;
  LODWORD(qword_140C21788) = dword_140C23EDC;
  dword_140C21790 = 0;
  if ( PopPolicy )
    HIDWORD(qword_140C21788) = *((_DWORD *)PopPolicy + 10);
  else
    HIDWORD(qword_140C21788) = 0;
  if ( byte_140C23ECD )
  {
    v0 = 1;
    dword_140C21790 = 1;
  }
  if ( dword_140C23ED8 )
    dword_140C21790 = v0 | 2;
  if ( (unsigned __int8)PopNetCheckOpportunisticDs() )
    dword_140C21790 |= 4u;
  result = dword_140C21790 & 6;
  if ( (dword_140C21790 & 6) != 2 )
    dword_140C21790 |= 8u;
  return result;
}
