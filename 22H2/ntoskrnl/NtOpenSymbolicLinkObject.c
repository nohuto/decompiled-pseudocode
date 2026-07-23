/*
 * XREFs of NtOpenSymbolicLinkObject @ 0x140666020
 * Callers:
 *     AdtpInitializeDriveLetters @ 0x14079EDE8 (AdtpInitializeDriveLetters.c)
 *     IopReassignSystemRoot @ 0x140A700D8 (IopReassignSystemRoot.c)
 * Callees:
 *     PsGetCurrentSilo @ 0x140345940 (PsGetCurrentSilo.c)
 *     ObOpenObjectByNameEx @ 0x1406CEA90 (ObOpenObjectByNameEx.c)
 */

NTSTATUS __cdecl NtOpenSymbolicLinkObject(
        PHANDLE LinkHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  PHANDLE v5; // rbx
  unsigned __int8 v6; // si
  POBJECT_TYPE v7; // rdi
  struct _LIST_ENTRY *CurrentSilo; // rax
  NTSTATUS result; // eax
  void *v10; // [rsp+40h] [rbp-28h] BYREF

  v5 = LinkHandle;
  v10 = 0LL;
  v6 = KeGetCurrentThread()->$6BEBF485330D18E60173AA6D991B35AC::gap0[10];
  if ( v6 )
  {
    if ( (unsigned __int64)LinkHandle >= 0x7FFFFFFF0000LL )
      LinkHandle = (PHANDLE)0x7FFFFFFF0000LL;
    *LinkHandle = *LinkHandle;
  }
  v7 = ObpSymbolicLinkObjectType;
  CurrentSilo = PsGetCurrentSilo();
  result = ObOpenObjectByNameEx(ObjectAttributes, v7, v6, 0LL, DesiredAccess, 0LL, CurrentSilo, &v10);
  *v5 = v10;
  return result;
}
