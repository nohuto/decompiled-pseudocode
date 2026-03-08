/*
 * XREFs of RtlTimelineBitmapMerge @ 0x14023840C
 * Callers:
 *     PsAddProcessEnergyValues @ 0x14023820C (PsAddProcessEnergyValues.c)
 *     KeFoldProcessStatisticsThread @ 0x1402D3778 (KeFoldProcessStatisticsThread.c)
 *     PsQueryProcessEnergyValues @ 0x1406B0B60 (PsQueryProcessEnergyValues.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlTimelineBitmapMerge(unsigned int *a1, unsigned int *a2)
{
  __int64 result; // rax
  unsigned int v4; // ecx
  unsigned int v5; // ecx
  unsigned int v6; // eax

  result = *a2;
  v4 = *a1;
  if ( (unsigned int)result > v4 )
  {
    *a1 = result;
    if ( (unsigned int)result - v4 >= 0x20 )
      v6 = 0;
    else
      v6 = a1[1] << (result - v4);
    a1[1] = v6;
    result = a2[1] | v6;
    a1[1] = result;
  }
  else
  {
    v5 = v4 - result;
    if ( v5 < 0x20 )
    {
      result = a2[1] << v5;
      a1[1] |= result;
    }
  }
  return result;
}
