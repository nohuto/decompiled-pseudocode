/*
 * XREFs of PpmCheckIdleVeto @ 0x140581B28
 * Callers:
 *     PpmIdleCheckCoordinatedStateEligibility @ 0x140582574 (PpmIdleCheckCoordinatedStateEligibility.c)
 *     PpmIdleCheckProcessorStateEligibility @ 0x1405827EC (PpmIdleCheckProcessorStateEligibility.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PpmCheckIdleVeto(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rax
  __int64 v3; // rcx
  bool v4; // zf

  result = 0LL;
  if ( *(_DWORD *)a1 )
  {
    if ( *(int *)a1 >= 0 )
    {
      if ( *(_QWORD *)(a1 + 32) )
      {
        v2 = a1 + 8;
        v3 = *(_QWORD *)(a1 + 8);
        v4 = v3 == v2;
        result = 0x80000000LL;
        if ( !v4 )
          return *(unsigned int *)(v3 + 16);
      }
      else
      {
        return 0x80000000LL;
      }
    }
    else
    {
      return 2147483661LL;
    }
  }
  return result;
}
