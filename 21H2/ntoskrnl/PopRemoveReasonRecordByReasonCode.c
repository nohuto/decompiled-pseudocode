/*
 * XREFs of PopRemoveReasonRecordByReasonCode @ 0x14066ED6C
 * Callers:
 *     PopUpdateUpgradeInProgress @ 0x1405CF3D0 (PopUpdateUpgradeInProgress.c)
 *     PopLogDisabledSleepReason @ 0x14066EACC (PopLogDisabledSleepReason.c)
 *     PopFilterCapabilities @ 0x14066EBC4 (PopFilterCapabilities.c)
 *     PopEnableHiberFile @ 0x1407926A0 (PopEnableHiberFile.c)
 * Callees:
 *     PopGetReasonListByReasonCode @ 0x14066EDB8 (PopGetReasonListByReasonCode.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
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
