/*
 * XREFs of MiMaximumCommitmentAvailable @ 0x1402999E4
 * Callers:
 *     ExpQuerySystemPerformanceInformation @ 0x14071F960 (ExpQuerySystemPerformanceInformation.c)
 * Callees:
 *     <none>
 */

__int64 MiMaximumCommitmentAvailable()
{
  if ( qword_140C6F568 > (unsigned __int64)qword_140C6F0C8 )
    return 0LL;
  else
    return qword_140C6F0C8 - qword_140C6F568;
}
