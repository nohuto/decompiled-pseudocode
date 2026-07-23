/*
 * XREFs of PopPepUpdateIdleState @ 0x140283A08
 * Callers:
 *     PopPepTriggerComponentActivatingActivity @ 0x1402838E0 (PopPepTriggerComponentActivatingActivity.c)
 *     PopPepCompleteComponentActiveActivity @ 0x140283950 (PopPepCompleteComponentActiveActivity.c)
 *     PopPepUpdateConstraints @ 0x1403A06BC (PopPepUpdateConstraints.c)
 *     PopPepCompleteComponentIdleStateChangeActivity @ 0x1403A0870 (PopPepCompleteComponentIdleStateChangeActivity.c)
 *     PopPepComponentSetLatency @ 0x1405744DC (PopPepComponentSetLatency.c)
 *     PopPepComponentSetResidency @ 0x1405745C8 (PopPepComponentSetResidency.c)
 *     PopPepComponentSetWakeHint @ 0x1405746C0 (PopPepComponentSetWakeHint.c)
 *     PopPepIdleTimeoutRoutine @ 0x140574C30 (PopPepIdleTimeoutRoutine.c)
 * Callees:
 *     PopPepTriggerActivity @ 0x1402836C8 (PopPepTriggerActivity.c)
 *     PopPepGetComponentPreferedIdleState @ 0x140283A68 (PopPepGetComponentPreferedIdleState.c)
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
