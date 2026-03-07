__int64 __fastcall PpmPerfComputePerfReductionTolerance(unsigned int a1)
{
  __int64 v1; // rdx

  v1 = 0LL;
  if ( a1 < 0x5F )
  {
    do
      v1 = (unsigned int)(v1 + 1);
    while ( a1 < *((unsigned __int8 *)&PpmPerfReductionBoostPolicies + v1) );
  }
  return *((unsigned __int8 *)&PpmPerfReductionOffsetPercent + v1);
}
