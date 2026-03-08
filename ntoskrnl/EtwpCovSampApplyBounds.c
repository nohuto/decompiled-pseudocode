/*
 * XREFs of EtwpCovSampApplyBounds @ 0x1409EDA10
 * Callers:
 *     EtwpSetCoverageSamplerInformation @ 0x1409F0DFC (EtwpSetCoverageSamplerInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpCovSampApplyBounds(unsigned int *a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  unsigned int v4; // eax
  unsigned int v5; // r10d
  unsigned int v6; // edx

  v4 = *a1;
  v5 = 0;
  if ( !*a1 )
    v4 = a2;
  v6 = v4;
  if ( v4 < a3 )
    v6 = a3;
  LOBYTE(v5) = v4 < a3;
  if ( v6 > a4 )
  {
    v5 = 1;
    v6 = a4;
  }
  *a1 = v6;
  return v5;
}
