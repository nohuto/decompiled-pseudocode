/*
 * XREFs of PopRemoveReasonRecordByReasonCode @ 0x14076091C
 * Callers:
 *     PopFilterCapabilities @ 0x140760774 (PopFilterCapabilities.c)
 *     PopLogDisabledSleepReason @ 0x140760A60 (PopLogDisabledSleepReason.c)
 *     PopEnableHiberFile @ 0x14082ADA4 (PopEnableHiberFile.c)
 *     PopUpdateUpgradeInProgress @ 0x14085E230 (PopUpdateUpgradeInProgress.c)
 * Callees:
 *     PopGetReasonListByReasonCode @ 0x140760968 (PopGetReasonListByReasonCode.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void PopRemoveReasonRecordByReasonCode()
{
  _QWORD *ReasonListByReasonCode; // rax
  __int64 v1; // rdx
  _QWORD *v2; // rcx

  ReasonListByReasonCode = (_QWORD *)PopGetReasonListByReasonCode();
  if ( ReasonListByReasonCode )
  {
    v1 = *ReasonListByReasonCode;
    if ( *(_QWORD **)(*ReasonListByReasonCode + 8LL) != ReasonListByReasonCode
      || (v2 = (_QWORD *)ReasonListByReasonCode[1], (_QWORD *)*v2 != ReasonListByReasonCode) )
    {
      __fastfail(3u);
    }
    *v2 = v1;
    *(_QWORD *)(v1 + 8) = v2;
    ExFreePoolWithTag(ReasonListByReasonCode, 0x66756263u);
  }
}
