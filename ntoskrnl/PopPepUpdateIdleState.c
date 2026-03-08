/*
 * XREFs of PopPepUpdateIdleState @ 0x140304DB8
 * Callers:
 *     PopPepUpdateConstraints @ 0x1402B9328 (PopPepUpdateConstraints.c)
 *     PopPepIdleTimeoutRoutine @ 0x1402E9500 (PopPepIdleTimeoutRoutine.c)
 *     PopPepComponentSetLatency @ 0x1402EE890 (PopPepComponentSetLatency.c)
 *     PopPepCompleteComponentIdleStateChangeActivity @ 0x1402F2810 (PopPepCompleteComponentIdleStateChangeActivity.c)
 *     PopPepTriggerComponentActivatingActivity @ 0x140304C00 (PopPepTriggerComponentActivatingActivity.c)
 *     PopPepCompleteComponentActiveActivity @ 0x140304CC0 (PopPepCompleteComponentActiveActivity.c)
 *     PopPepComponentSetResidency @ 0x1403AE9C4 (PopPepComponentSetResidency.c)
 *     PopPepComponentSetWakeHint @ 0x14059C820 (PopPepComponentSetWakeHint.c)
 * Callees:
 *     PopPepGetComponentPreferedIdleState @ 0x140304E18 (PopPepGetComponentPreferedIdleState.c)
 *     PopPepTriggerActivity @ 0x140307C1C (PopPepTriggerActivity.c)
 */

__int64 __fastcall PopPepUpdateIdleState(__int64 a1, __int64 a2, char a3)
{
  __int64 result; // rax

  result = PopPepGetComponentPreferedIdleState(a2);
  if ( (_DWORD)result != *(_DWORD *)(a2 + 176) )
  {
    if ( a3 )
      LODWORD(result) = result | 0x80000000;
    return PopPepTriggerActivity(a1, a2, 1LL, (unsigned int)result);
  }
  return result;
}
