/*
 * XREFs of PopRemoveReasonRecordByReasonCode @ 0x140762A68
 * Callers:
 *     PopLogDisabledSleepReason @ 0x1407627C8 (PopLogDisabledSleepReason.c)
 *     PopFilterCapabilities @ 0x1407628C0 (PopFilterCapabilities.c)
 *     PopEnableHiberFile @ 0x140818E88 (PopEnableHiberFile.c)
 *     PopUpdateUpgradeInProgress @ 0x1408620D0 (PopUpdateUpgradeInProgress.c)
 * Callees:
 *     PopGetReasonListByReasonCode @ 0x140762AB4 (PopGetReasonListByReasonCode.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void PopRemoveReasonRecordByReasonCode()
{
  _QWORD *ReasonListByReasonCode; // rax
  __int64 v1; // rcx
  _QWORD *v2; // rdx

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
