/*
 * XREFs of PopPowerAggregatorCachePoPolicy @ 0x14078E53C
 * Callers:
 *     PopPowerAggregatorHandleIntentUnsafe @ 0x140775FD4 (PopPowerAggregatorHandleIntentUnsafe.c)
 *     PopPowerAggregatorInitialize @ 0x140A41878 (PopPowerAggregatorInitialize.c)
 * Callees:
 *     PopNetCheckOpportunisticDs @ 0x14078E5CC (PopNetCheckOpportunisticDs.c)
 */

char PopPowerAggregatorCachePoPolicy()
{
  int v0; // ecx
  char result; // al

  v0 = 0;
  qword_140C217E8 = 0LL;
  LODWORD(qword_140C217E8) = dword_140C2337C;
  dword_140C217F0 = 0;
  if ( PopPolicy )
    HIDWORD(qword_140C217E8) = *((_DWORD *)PopPolicy + 10);
  else
    HIDWORD(qword_140C217E8) = 0;
  if ( byte_140C2336D )
  {
    v0 = 1;
    dword_140C217F0 = 1;
  }
  if ( dword_140C23378 )
    dword_140C217F0 = v0 | 2;
  if ( (unsigned __int8)PopNetCheckOpportunisticDs() )
    dword_140C217F0 |= 4u;
  result = dword_140C217F0 & 6;
  if ( (dword_140C217F0 & 6) != 2 )
    dword_140C217F0 |= 8u;
  return result;
}
