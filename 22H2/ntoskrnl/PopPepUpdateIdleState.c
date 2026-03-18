/*
 * XREFs of PopPepUpdateIdleState @ 0x1403107D8
 * Callers:
 *     PopPepUpdateConstraints @ 0x14028D114 (PopPepUpdateConstraints.c)
 *     PopPepTriggerComponentActivatingActivity @ 0x140310620 (PopPepTriggerComponentActivatingActivity.c)
 *     PopPepCompleteComponentActiveActivity @ 0x1403106E0 (PopPepCompleteComponentActiveActivity.c)
 *     PopPepIdleTimeoutRoutine @ 0x140354CF0 (PopPepIdleTimeoutRoutine.c)
 *     PopPepComponentSetLatency @ 0x14035AF20 (PopPepComponentSetLatency.c)
 *     PopPepCompleteComponentIdleStateChangeActivity @ 0x14035D810 (PopPepCompleteComponentIdleStateChangeActivity.c)
 *     PopPepComponentSetResidency @ 0x1403B36B4 (PopPepComponentSetResidency.c)
 *     PopPepComponentSetWakeHint @ 0x14059ED40 (PopPepComponentSetWakeHint.c)
 * Callees:
 *     PopPepGetComponentPreferedIdleState @ 0x140310838 (PopPepGetComponentPreferedIdleState.c)
 *     PopPepTriggerActivity @ 0x140313F1C (PopPepTriggerActivity.c)
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
