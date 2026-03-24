/*
 * XREFs of SeReleaseSecurityDescriptor @ 0x14065C750
 * Callers:
 *     SeAccessCheckByTypeWithAdminlessChecks @ 0x14027CAB0 (SeAccessCheckByTypeWithAdminlessChecks.c)
 *     ObReferenceObjectByNameEx @ 0x1405DE69C (ObReferenceObjectByNameEx.c)
 *     AlpcpConnectPort @ 0x1405DF5BC (AlpcpConnectPort.c)
 *     NtCreateWnfStateName @ 0x14060D6D0 (NtCreateWnfStateName.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x1406261B0 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 *     ObOpenObjectByNameEx @ 0x140655CD0 (ObOpenObjectByNameEx.c)
 *     ObpCaptureObjectCreateInformation @ 0x140656440 (ObpCaptureObjectCreateInformation.c)
 *     ObpInsertOrLocateNamedObject @ 0x140662900 (ObpInsertOrLocateNamedObject.c)
 *     ObDeleteCapturedInsertInfo @ 0x140671F50 (ObDeleteCapturedInsertInfo.c)
 *     NtSetSecurityObject @ 0x140697440 (NtSetSecurityObject.c)
 *     NtOpenObjectAuditAlarm @ 0x1406A8C60 (NtOpenObjectAuditAlarm.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x1406BC308 (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     ObpFreeObject @ 0x1406F0520 (ObpFreeObject.c)
 *     CmpCreateKeyBody @ 0x1406FC690 (CmpCreateKeyBody.c)
 *     IopAllocRealFileObject @ 0x1407030E0 (IopAllocRealFileObject.c)
 *     ObCreateObjectEx @ 0x140704810 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x140704A20 (ObInsertObjectEx.c)
 *     CmpCopySaclToVirtualKey @ 0x1408717C4 (CmpCopySaclToVirtualKey.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

void __fastcall SeReleaseSecurityDescriptor(void *a1, char a2, char a3)
{
  if ( !a2 && a3 == 1 || a2 == 1 )
  {
    if ( a1 )
      ExFreePoolWithTag(a1, 0);
  }
}
