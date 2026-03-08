/*
 * XREFs of SeReleaseSecurityDescriptor @ 0x1407C92D0
 * Callers:
 *     SeAccessCheckByType @ 0x14033BB40 (SeAccessCheckByType.c)
 *     ObpInsertOrLocateNamedObject @ 0x140696BDC (ObpInsertOrLocateNamedObject.c)
 *     SepAccessCheckAndAuditAlarm @ 0x1406973E0 (SepAccessCheckAndAuditAlarm.c)
 *     ObOpenObjectByNameEx @ 0x1406E7F70 (ObOpenObjectByNameEx.c)
 *     ObpCaptureObjectCreateInformation @ 0x1406E9E60 (ObpCaptureObjectCreateInformation.c)
 *     ObReferenceObjectByNameEx @ 0x140710ADC (ObReferenceObjectByNameEx.c)
 *     AlpcpConnectPort @ 0x140712F5C (AlpcpConnectPort.c)
 *     NtCreateWnfStateName @ 0x14071BBD0 (NtCreateWnfStateName.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x140743F0C (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     ObDeleteCapturedInsertInfo @ 0x140768AD0 (ObDeleteCapturedInsertInfo.c)
 *     NtSetSecurityObject @ 0x14076A550 (NtSetSecurityObject.c)
 *     NtOpenObjectAuditAlarm @ 0x140790670 (NtOpenObjectAuditAlarm.c)
 *     IopAllocRealFileObject @ 0x1407BA090 (IopAllocRealFileObject.c)
 *     CmpCreateKeyBody @ 0x1407BA4F0 (CmpCreateKeyBody.c)
 *     ObInsertObjectEx @ 0x1407BB7C0 (ObInsertObjectEx.c)
 *     SepDuplicateToken @ 0x1407BCF00 (SepDuplicateToken.c)
 *     ObpFreeObject @ 0x1407C3980 (ObpFreeObject.c)
 *     ObCreateObjectEx @ 0x1407D1090 (ObCreateObjectEx.c)
 *     CmpCopySaclToVirtualKey @ 0x140A186EC (CmpCopySaclToVirtualKey.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall SeReleaseSecurityDescriptor(void *a1, char a2, char a3)
{
  if ( !a2 && a3 == 1 || a2 == 1 )
  {
    if ( a1 )
      ExFreePoolWithTag(a1, 0);
  }
}
