/*
 * XREFs of MiMaximumCommitmentAvailable @ 0x14021DC5C
 * Callers:
 *     ExpQuerySystemPerformanceInformation @ 0x1406B1F04 (ExpQuerySystemPerformanceInformation.c)
 * Callees:
 *     <none>
 */

__int64 MiMaximumCommitmentAvailable()
{
  if ( qword_140C6F9A8 > (unsigned __int64)qword_140C6F508 )
    return 0LL;
  else
    return qword_140C6F508 - qword_140C6F9A8;
}
