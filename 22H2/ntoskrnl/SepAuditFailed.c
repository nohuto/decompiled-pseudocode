/*
 * XREFs of SepAuditFailed @ 0x1409D1CF0
 * Callers:
 *     SepRmCallLsa @ 0x14031C700 (SepRmCallLsa.c)
 *     SepRmDispatchDataToLsa @ 0x14031C948 (SepRmDispatchDataToLsa.c)
 *     SepInitProcessAuditSd @ 0x140387AB0 (SepInitProcessAuditSd.c)
 *     SepAuditFailedRaisedIrql @ 0x1405B976C (SepAuditFailedRaisedIrql.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x1406C0580 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     SepAccessCheckAndAuditAlarm @ 0x1406C10C0 (SepAccessCheckAndAuditAlarm.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x1406C341C (SepAdtPrivilegeObjectAuditAlarm.c)
 *     SepAdtAuditThisEventWithContext @ 0x1406C3580 (SepAdtAuditThisEventWithContext.c)
 *     SepAdtAuditThisEventByCategoryWithContext @ 0x1406C3600 (SepAdtAuditThisEventByCategoryWithContext.c)
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x1407BC7B0 (SeSecurityDescriptorChangedAuditAlarm.c)
 *     NtCloseObjectAuditAlarm @ 0x1407C3E40 (NtCloseObjectAuditAlarm.c)
 *     NtPrivilegedServiceAuditAlarm @ 0x1407C87E0 (NtPrivilegedServiceAuditAlarm.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x1407C8A64 (SepAdtPrivilegedServiceAuditAlarm.c)
 *     NtOpenObjectAuditAlarm @ 0x1407DFA00 (NtOpenObjectAuditAlarm.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x1407F1980 (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     SepRmCommandServerThread @ 0x14082D2D0 (SepRmCommandServerThread.c)
 *     SepAuditAssignPrimaryToken @ 0x140842830 (SepAuditAssignPrimaryToken.c)
 *     SeAuditProcessCreation @ 0x140842A54 (SeAuditProcessCreation.c)
 *     NtPrivilegeObjectAuditAlarm @ 0x140846050 (NtPrivilegeObjectAuditAlarm.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x1409CA0C4 (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeAuditFipsCryptoSelftests @ 0x1409CA680 (SeAuditFipsCryptoSelftests.c)
 *     SeAuditProcessExit @ 0x1409CAFC4 (SeAuditProcessExit.c)
 *     SeAuditSystemTimeChange @ 0x1409CB148 (SeAuditSystemTimeChange.c)
 *     SeOperationAuditAlarm @ 0x1409CB54C (SeOperationAuditAlarm.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x1409CB888 (SepAdtCloseObjectAuditAlarm.c)
 *     SepAdtDeleteObjectAuditAlarm @ 0x1409CBAB4 (SepAdtDeleteObjectAuditAlarm.c)
 *     SepAdtObjectReferenceAuditAlarm @ 0x1409CBFEC (SepAdtObjectReferenceAuditAlarm.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x1409CC218 (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtSecurityDescriptorChangedAuditAlarm @ 0x1409CCCF0 (SepAdtSecurityDescriptorChangedAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x1409CCF9C (SepAdtStagingEvent.c)
 *     NtDeleteObjectAuditAlarm @ 0x1409CDF70 (NtDeleteObjectAuditAlarm.c)
 *     SeOpenObjectForDeleteAuditAlarmWithTransaction @ 0x1409CE210 (SeOpenObjectForDeleteAuditAlarmWithTransaction.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E1D0 (RtlInitUnicodeString.c)
 *     ZwSetValueKey @ 0x14041B2A0 (ZwSetValueKey.c)
 *     ZwFlushKey @ 0x14041C4A0 (ZwFlushKey.c)
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 *     SepAdtLogAuditFailureEvent @ 0x1409CBDF4 (SepAdtLogAuditFailureEvent.c)
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
