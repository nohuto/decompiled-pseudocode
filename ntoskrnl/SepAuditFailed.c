/*
 * XREFs of SepAuditFailed @ 0x1409CEE50
 * Callers:
 *     SepRmCallLsa @ 0x1402E8690 (SepRmCallLsa.c)
 *     SepRmDispatchDataToLsa @ 0x1402E88D8 (SepRmDispatchDataToLsa.c)
 *     SepInitProcessAuditSd @ 0x140384A3C (SepInitProcessAuditSd.c)
 *     SepAuditFailedRaisedIrql @ 0x1405B72BC (SepAuditFailedRaisedIrql.c)
 *     SepAccessCheckAndAuditAlarm @ 0x1406973E0 (SepAccessCheckAndAuditAlarm.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x1406996AC (SepAdtPrivilegeObjectAuditAlarm.c)
 *     SepAdtAuditThisEventWithContext @ 0x140699810 (SepAdtAuditThisEventWithContext.c)
 *     SepAdtAuditThisEventByCategoryWithContext @ 0x140699890 (SepAdtAuditThisEventByCategoryWithContext.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x14069A700 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x14069D1D4 (SepAdtPrivilegedServiceAuditAlarm.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x140743F0C (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x14076AA40 (SeSecurityDescriptorChangedAuditAlarm.c)
 *     NtCloseObjectAuditAlarm @ 0x1407742A0 (NtCloseObjectAuditAlarm.c)
 *     NtPrivilegedServiceAuditAlarm @ 0x140788B50 (NtPrivilegedServiceAuditAlarm.c)
 *     NtOpenObjectAuditAlarm @ 0x140790670 (NtOpenObjectAuditAlarm.c)
 *     SepRmCommandServerThread @ 0x140825260 (SepRmCommandServerThread.c)
 *     SepAuditAssignPrimaryToken @ 0x1408401DC (SepAuditAssignPrimaryToken.c)
 *     SeAuditProcessCreation @ 0x140840400 (SeAuditProcessCreation.c)
 *     NtPrivilegeObjectAuditAlarm @ 0x140843210 (NtPrivilegeObjectAuditAlarm.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x1409C7074 (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeAuditFipsCryptoSelftests @ 0x1409C7630 (SeAuditFipsCryptoSelftests.c)
 *     SeAuditProcessExit @ 0x1409C7F74 (SeAuditProcessExit.c)
 *     SeAuditSystemTimeChange @ 0x1409C80F8 (SeAuditSystemTimeChange.c)
 *     SeOperationAuditAlarm @ 0x1409C84FC (SeOperationAuditAlarm.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x1409C8838 (SepAdtCloseObjectAuditAlarm.c)
 *     SepAdtDeleteObjectAuditAlarm @ 0x1409C8A64 (SepAdtDeleteObjectAuditAlarm.c)
 *     SepAdtObjectReferenceAuditAlarm @ 0x1409C8F9C (SepAdtObjectReferenceAuditAlarm.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x1409C930C (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtSecurityDescriptorChangedAuditAlarm @ 0x1409C9E48 (SepAdtSecurityDescriptorChangedAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x1409CA0F4 (SepAdtStagingEvent.c)
 *     NtDeleteObjectAuditAlarm @ 0x1409CB0D0 (NtDeleteObjectAuditAlarm.c)
 *     SeOpenObjectForDeleteAuditAlarmWithTransaction @ 0x1409CB370 (SeOpenObjectForDeleteAuditAlarmWithTransaction.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     ZwSetValueKey @ 0x140412F10 (ZwSetValueKey.c)
 *     ZwFlushKey @ 0x140414110 (ZwFlushKey.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     SepAdtLogAuditFailureEvent @ 0x1409C8DA4 (SepAdtLogAuditFailureEvent.c)
 */

void __fastcall SepAuditFailed(signed int a1)
{
  ULONG_PTR v1; // rbx
  NTSTATUS v2; // eax
  NTSTATUS v3; // eax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+58h] [rbp+10h] BYREF

  DestinationString = 0LL;
  v1 = a1;
  if ( SepCrashOnAuditFail )
  {
    if ( SepAdtRegNotifyHandle )
    {
      SepAdtLogAuditFailureEvent(a1, 1);
      RtlInitUnicodeString(&DestinationString, L"CrashOnAuditFail");
      LODWORD(BugCheckParameter4) = 2;
      do
      {
        do
          v2 = ZwSetValueKey(SepAdtRegNotifyHandle, &DestinationString, 0, 4u, &BugCheckParameter4, 4u);
        while ( v2 == -1073741670 );
      }
      while ( v2 == -1073741801 );
      if ( v2 >= 0 )
      {
        do
        {
          do
            v3 = ZwFlushKey(SepAdtRegNotifyHandle);
          while ( v3 == -1073741670 );
        }
        while ( v3 == -1073741801 );
      }
      KeBugCheckEx(0xC0000244, v1, 0LL, 0LL, 0LL);
    }
    SepCrashOnAuditFail = 0;
  }
}
