/*
 * XREFs of PopPepCountReadyActivities @ 0x140307578
 * Callers:
 *     PopPepUpdateConstraints @ 0x1402B9328 (PopPepUpdateConstraints.c)
 *     PopPepIdleTimeoutRoutine @ 0x1402E9500 (PopPepIdleTimeoutRoutine.c)
 *     PopPepComponentSetLatency @ 0x1402EE890 (PopPepComponentSetLatency.c)
 *     PopPepProcessEvent @ 0x140307424 (PopPepProcessEvent.c)
 *     PopPepComponentSetResidency @ 0x1403AE9C4 (PopPepComponentSetResidency.c)
 *     PopPepCompleteComponentIdleState @ 0x14059C714 (PopPepCompleteComponentIdleState.c)
 *     PopPepComponentSetWakeHint @ 0x14059C820 (PopPepComponentSetWakeHint.c)
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
