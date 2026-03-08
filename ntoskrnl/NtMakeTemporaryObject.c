/*
 * XREFs of NtMakeTemporaryObject @ 0x140791BC0
 * Callers:
 *     IopReassignSystemRoot @ 0x140B6CE8C (IopReassignSystemRoot.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     ObMakeTemporaryObject @ 0x140791C40 (ObMakeTemporaryObject.c)
 *     ObReferenceObjectByHandle @ 0x1407C2D00 (ObReferenceObjectByHandle.c)
 *     SeDeleteObjectAuditAlarmWithTransaction @ 0x1409CB2A0 (SeDeleteObjectAuditAlarmWithTransaction.c)
 */

NTSTATUS __fastcall NtMakeTemporaryObject(HANDLE Handle)
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
    ObfDereferenceObject(Object);
    return v3;
  }
  return result;
}
