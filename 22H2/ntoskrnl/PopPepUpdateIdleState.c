/*
 * XREFs of PopPepUpdateIdleState @ 0x140261D98
 * Callers:
 *     PopPepTriggerComponentActivatingActivity @ 0x140261C70 (PopPepTriggerComponentActivatingActivity.c)
 *     PopPepCompleteComponentActiveActivity @ 0x140261CE0 (PopPepCompleteComponentActiveActivity.c)
 *     PopPepUpdateConstraints @ 0x14039FE6C (PopPepUpdateConstraints.c)
 *     PopPepCompleteComponentIdleStateChangeActivity @ 0x1403A0020 (PopPepCompleteComponentIdleStateChangeActivity.c)
 *     PopPepComponentSetLatency @ 0x1405741DC (PopPepComponentSetLatency.c)
 *     PopPepComponentSetResidency @ 0x1405742C8 (PopPepComponentSetResidency.c)
 *     PopPepComponentSetWakeHint @ 0x1405743C0 (PopPepComponentSetWakeHint.c)
 *     PopPepIdleTimeoutRoutine @ 0x140574930 (PopPepIdleTimeoutRoutine.c)
 * Callees:
 *     PopPepTriggerActivity @ 0x140261A58 (PopPepTriggerActivity.c)
 *     PopPepGetComponentPreferedIdleState @ 0x140261DF8 (PopPepGetComponentPreferedIdleState.c)
 */

__int64 __fastcall PopPepUpdateIdleState(__int64 a1, __int64 a2, char a3)
{
  __int64 result; // rax

  result = PopPepGetComponentPreferedIdleState(a2);
  if ( (_DWORD)result != *(_DWORD *)(a2 + 176) )
  {
    if ( a3 )
      LODWORD(result) = result | 0x80000000;
    return PopPepTriggerActivity(a1, a2, 1u, result);
  }
  return result;
}
