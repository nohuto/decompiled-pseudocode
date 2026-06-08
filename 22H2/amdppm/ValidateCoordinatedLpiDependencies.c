/*
 * XREFs of ValidateCoordinatedLpiDependencies @ 0x1C002B710
 * Callers:
 *     LpiTranslateCoordinatedIdleStates @ 0x1C0036620 (LpiTranslateCoordinatedIdleStates.c)
 * Callees:
 *     ValidateCoordinatedLpiDependenciesProcessor @ 0x1C002B78C (ValidateCoordinatedLpiDependenciesProcessor.c)
 */

__int64 __fastcall ValidateCoordinatedLpiDependencies(unsigned int *a1)
{
  unsigned int i; // ebx
  __int64 v3; // rsi
  unsigned int j; // edi
  __int64 result; // rax

  for ( i = 0; i < *a1; ++i )
  {
    v3 = 56LL * i;
    for ( j = 0; j < a1[v3 + 63]; ++j )
    {
      if ( *(_DWORD *)(*(_QWORD *)&a1[v3 + 66] + 16LL * j) != -1 )
      {
        result = ValidateCoordinatedLpiDependenciesProcessor(&a1[v3 + 12]);
        if ( (int)result < 0 )
          return result;
      }
    }
  }
  return 0LL;
}
