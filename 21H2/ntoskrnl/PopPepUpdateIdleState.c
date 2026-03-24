/*
 * XREFs of PopPepUpdateIdleState @ 0x140262538
 * Callers:
 *     PopPepTriggerComponentActivatingActivity @ 0x140262410 (PopPepTriggerComponentActivatingActivity.c)
 *     PopPepCompleteComponentActiveActivity @ 0x140262480 (PopPepCompleteComponentActiveActivity.c)
 *     PopPepUpdateConstraints @ 0x1403A056C (PopPepUpdateConstraints.c)
 *     PopPepCompleteComponentIdleStateChangeActivity @ 0x1403A0720 (PopPepCompleteComponentIdleStateChangeActivity.c)
 *     PopPepComponentSetLatency @ 0x14057429C (PopPepComponentSetLatency.c)
 *     PopPepComponentSetResidency @ 0x140574388 (PopPepComponentSetResidency.c)
 *     PopPepComponentSetWakeHint @ 0x140574480 (PopPepComponentSetWakeHint.c)
 *     PopPepIdleTimeoutRoutine @ 0x1405749F0 (PopPepIdleTimeoutRoutine.c)
 * Callees:
 *     PopPepTriggerActivity @ 0x1402621F8 (PopPepTriggerActivity.c)
 *     PopPepGetComponentPreferedIdleState @ 0x140262598 (PopPepGetComponentPreferedIdleState.c)
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
