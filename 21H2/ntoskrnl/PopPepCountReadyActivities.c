/*
 * XREFs of PopPepCountReadyActivities @ 0x1403565AC
 * Callers:
 *     PopPepProcessEvent @ 0x140356454 (PopPepProcessEvent.c)
 *     PopPepUpdateConstraints @ 0x1403B17EC (PopPepUpdateConstraints.c)
 *     PopPepComponentSetLatency @ 0x14045E4C2 (PopPepComponentSetLatency.c)
 *     PopPepCompleteComponentIdleState @ 0x1405D4C64 (PopPepCompleteComponentIdleState.c)
 *     PopPepComponentSetResidency @ 0x1405D4D6C (PopPepComponentSetResidency.c)
 *     PopPepComponentSetWakeHint @ 0x1405D4E64 (PopPepComponentSetWakeHint.c)
 *     PopPepIdleTimeoutRoutine @ 0x1405D5360 (PopPepIdleTimeoutRoutine.c)
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
      v5 = a1 + 74;
      do
      {
        result = (unsigned int)(*v5 + result);
        v5 += 52;
        --v4;
      }
      while ( v4 );
    }
  }
  return result;
}
