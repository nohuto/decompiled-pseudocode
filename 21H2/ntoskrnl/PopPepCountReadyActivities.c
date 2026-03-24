/*
 * XREFs of PopPepCountReadyActivities @ 0x140261BDC
 * Callers:
 *     PopPepProcessEvent @ 0x140261A84 (PopPepProcessEvent.c)
 *     PopPepUpdateConstraints @ 0x1403A056C (PopPepUpdateConstraints.c)
 *     PopPepCompleteComponentIdleState @ 0x140574194 (PopPepCompleteComponentIdleState.c)
 *     PopPepComponentSetLatency @ 0x14057429C (PopPepComponentSetLatency.c)
 *     PopPepComponentSetResidency @ 0x140574388 (PopPepComponentSetResidency.c)
 *     PopPepComponentSetWakeHint @ 0x140574480 (PopPepComponentSetWakeHint.c)
 *     PopPepIdleTimeoutRoutine @ 0x1405749F0 (PopPepIdleTimeoutRoutine.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopPepCountReadyActivities(unsigned int *a1, __int64 a2, int a3)
{
  __int64 result; // rax
  __int64 v4; // rdx
  _DWORD *v5; // rcx

  if ( !a3 )
    return 0LL;
  result = a1[30];
  if ( a3 == 2 )
  {
    if ( a2 )
      return (unsigned int)(*(_DWORD *)(a2 + 104) + result);
  }
  else if ( a3 == 3 )
  {
    v4 = a1[45];
    if ( (_DWORD)v4 )
    {
      v5 = a1 + 72;
      do
      {
        result = (unsigned int)(*v5 + result);
        v5 += 50;
        --v4;
      }
      while ( v4 );
    }
  }
  return result;
}
