/*
 * XREFs of SeReleaseSecurityDescriptor @ 0x1407B3DA0
 * Callers:
 *     SeAccessCheckByType @ 0x1402FBEC0 (SeAccessCheckByType.c)
 *     AlpcpConnectPort @ 0x140666D1C (AlpcpConnectPort.c)
 *     ObReferenceObjectByNameEx @ 0x1406686C8 (ObReferenceObjectByNameEx.c)
 *     ObpInsertOrLocateNamedObject @ 0x14066915C (ObpInsertOrLocateNamedObject.c)
 *     NtCreateWnfStateName @ 0x14066F980 (NtCreateWnfStateName.c)
 *     ObDeleteCapturedInsertInfo @ 0x140680050 (ObDeleteCapturedInsertInfo.c)
 *     NtSetSecurityObject @ 0x1406B57C0 (NtSetSecurityObject.c)
 *     NtOpenObjectAuditAlarm @ 0x1406C5CA0 (NtOpenObjectAuditAlarm.c)
 *     SepAccessCheckAndAuditAlarm @ 0x140722B40 (SepAccessCheckAndAuditAlarm.c)
 *     ObInsertObjectEx @ 0x140729C30 (ObInsertObjectEx.c)
 *     ObCreateObjectEx @ 0x14072B3B0 (ObCreateObjectEx.c)
 *     IopAllocRealFileObject @ 0x14072DDC0 (IopAllocRealFileObject.c)
 *     CmpCreateKeyBody @ 0x14072E210 (CmpCreateKeyBody.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x140753358 (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     ObOpenObjectByNameEx @ 0x1407CAF90 (ObOpenObjectByNameEx.c)
 *     ObpCaptureObjectCreateInformation @ 0x1407CCD80 (ObpCaptureObjectCreateInformation.c)
 *     ObpFreeObject @ 0x1407CDBA0 (ObpFreeObject.c)
 *     SepDuplicateToken @ 0x1407CDED0 (SepDuplicateToken.c)
 *     CmpCopySaclToVirtualKey @ 0x14091822C (CmpCopySaclToVirtualKey.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall SeReleaseSecurityDescriptor(void *a1, char a2, char a3)
{
  if ( !a2 && a3 == 1 || a2 == 1 )
  {
    if ( a1 )
      ExFreePoolWithTag(a1, 0);
  }
}
