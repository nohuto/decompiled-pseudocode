/*
 * XREFs of SeReleaseSecurityDescriptor @ 0x1407378D0
 * Callers:
 *     SeAccessCheckByType @ 0x1402B3A90 (SeAccessCheckByType.c)
 *     ObDeleteCapturedInsertInfo @ 0x140692B60 (ObDeleteCapturedInsertInfo.c)
 *     ObpInsertOrLocateNamedObject @ 0x1406C0B0C (ObpInsertOrLocateNamedObject.c)
 *     SepAccessCheckAndAuditAlarm @ 0x1406C10C0 (SepAccessCheckAndAuditAlarm.c)
 *     ObOpenObjectByNameEx @ 0x1406ED090 (ObOpenObjectByNameEx.c)
 *     ObpCaptureObjectCreateInformation @ 0x1406EEFC0 (ObpCaptureObjectCreateInformation.c)
 *     NtCreateWnfStateName @ 0x140711250 (NtCreateWnfStateName.c)
 *     ObReferenceObjectByNameEx @ 0x1407153CC (ObReferenceObjectByNameEx.c)
 *     AlpcpConnectPort @ 0x1407173E0 (AlpcpConnectPort.c)
 *     ObpFreeObject @ 0x1407298C0 (ObpFreeObject.c)
 *     SepDuplicateToken @ 0x140729BF0 (SepDuplicateToken.c)
 *     IopAllocRealFileObject @ 0x14072F370 (IopAllocRealFileObject.c)
 *     CmpCreateKeyBody @ 0x14072F7D0 (CmpCreateKeyBody.c)
 *     ObCreateObjectEx @ 0x140730870 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x140735ED0 (ObInsertObjectEx.c)
 *     NtSetSecurityObject @ 0x1407BC2C0 (NtSetSecurityObject.c)
 *     NtOpenObjectAuditAlarm @ 0x1407DFA00 (NtOpenObjectAuditAlarm.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x1407F1980 (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     CmpCopySaclToVirtualKey @ 0x140A1B43C (CmpCopySaclToVirtualKey.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

void __fastcall SeReleaseSecurityDescriptor(void *a1, char a2, char a3)
{
  if ( !a2 && a3 == 1 || a2 == 1 )
  {
    if ( a1 )
      ExFreePoolWithTag(a1, 0);
  }
}
