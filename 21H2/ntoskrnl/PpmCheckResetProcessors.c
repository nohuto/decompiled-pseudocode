/*
 * XREFs of PpmCheckResetProcessors @ 0x1403C2494
 * Callers:
 *     PpmCheckArmPeriod @ 0x1403C1F64 (PpmCheckArmPeriod.c)
 *     PpmRegisterPerfStates @ 0x1407BA470 (PpmRegisterPerfStates.c)
 * Callees:
 *     PopExecuteOnTargetProcessors @ 0x14026977C (PopExecuteOnTargetProcessors.c)
 *     PpmResetPerfTimes @ 0x1403C2720 (PpmResetPerfTimes.c)
 */

__int64 __fastcall PpmCheckResetProcessors(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 result; // rax
  __int64 i; // rdi
  __int64 v5; // rcx
  unsigned int j; // esi
  __int64 v7; // rcx

  v1 = 0;
  if ( a1 )
  {
    result = PopExecuteOnTargetProcessors(a1 + 24, (__int64)PpmCheckReset, 0LL, 0LL);
    if ( *(_DWORD *)(a1 + 200) )
    {
      do
      {
        result = v1;
        v5 = *(_QWORD *)(a1 + 216) + 136LL * v1;
        if ( *(_DWORD *)(v5 + 16) == 1 )
          result = PpmResetPerfTimes(*(_QWORD *)v5);
        ++v1;
      }
      while ( v1 < *(_DWORD *)(a1 + 200) );
    }
  }
  else
  {
    result = PopExecuteOnTargetProcessors((__int64)PpmCheckRegistered, (__int64)PpmCheckReset, 0LL, 0LL);
    for ( i = PpmPerfDomainHead; (__int64 *)i != &PpmPerfDomainHead; i = *(_QWORD *)i )
    {
      for ( j = 0; j < *(_DWORD *)(i + 200); ++j )
      {
        result = j;
        v7 = *(_QWORD *)(i + 216) + 136LL * j;
        if ( *(_DWORD *)(v7 + 16) == 1 )
          result = PpmResetPerfTimes(*(_QWORD *)v7);
      }
    }
  }
  return result;
}
