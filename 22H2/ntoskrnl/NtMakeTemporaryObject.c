/*
 * XREFs of NtMakeTemporaryObject @ 0x1406F7590
 * Callers:
 *     IopReassignSystemRoot @ 0x140A700D8 (IopReassignSystemRoot.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     ObReferenceObjectByHandle @ 0x14063E2E0 (ObReferenceObjectByHandle.c)
 *     ObMakeTemporaryObject @ 0x1406F62F0 (ObMakeTemporaryObject.c)
 *     SeDeleteObjectAuditAlarmWithTransaction @ 0x140921400 (SeDeleteObjectAuditAlarmWithTransaction.c)
 */

NTSTATUS __cdecl NtMakeTemporaryObject(HANDLE Handle)
{
  NTSTATUS result; // eax
  NTSTATUS v3; // edi
  PVOID Object; // [rsp+48h] [rbp+10h] BYREF
  struct _OBJECT_HANDLE_INFORMATION v5; // [rsp+50h] [rbp+18h] BYREF

  v5 = 0LL;
  Object = 0LL;
  result = ObReferenceObjectByHandle(Handle, 0x10000u, 0LL, KeGetCurrentThread()->PreviousMode, &Object, &v5);
  v3 = result;
  if ( result >= 0 )
  {
    ObMakeTemporaryObject(Object);
    if ( (v5.HandleAttributes & 4) != 0 )
      SeDeleteObjectAuditAlarmWithTransaction(Object, Handle, 0LL);
    HalPutDmaAdapter((PADAPTER_OBJECT)Object);
    return v3;
  }
  return result;
}
