/*
 * XREFs of RIMComputePower @ 0x1C01813C8
 * Callers:
 *     RIMComputeSpecificHighMetricValue @ 0x1C0181400 (RIMComputeSpecificHighMetricValue.c)
 *     RIMRetrieveRealAngularPhysicalValues @ 0x1C0181654 (RIMRetrieveRealAngularPhysicalValues.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RIMComputePower(__int16 a1)
{
  int v1; // edx
  __int64 result; // rax
  bool v3; // zf

  v1 = 10;
  result = 1LL;
  v3 = a1 == 0;
  if ( a1 < 0 )
  {
    a1 = -a1;
    v3 = a1 == 0;
  }
  if ( !v3 )
  {
    do
    {
      if ( (a1 & 1) != 0 )
        result = (unsigned int)(v1 * result);
      v1 *= v1;
      a1 >>= 1;
    }
    while ( a1 );
  }
  return result;
}
