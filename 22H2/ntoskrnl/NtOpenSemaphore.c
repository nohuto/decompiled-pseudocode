/*
 * XREFs of NtOpenSemaphore @ 0x1406866E0
 * Callers:
 *     <none>
 * Callees:
 *     ObOpenObjectByName @ 0x1406CEA10 (ObOpenObjectByName.c)
 */

NTSTATUS __cdecl NtOpenSemaphore(
        PHANDLE SemaphoreHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  int v3; // r10d
  char PreviousMode; // di
  __int64 v7; // rdx
  NTSTATUS v8; // edx
  ACCESS_MASK v10; // [rsp+20h] [rbp-38h]
  void *v11; // [rsp+40h] [rbp-18h] BYREF

  v3 = (int)ObjectAttributes;
  v11 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v7 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)SemaphoreHandle < 0x7FFFFFFF0000LL )
      v7 = (__int64)SemaphoreHandle;
    *(_QWORD *)v7 = *(_QWORD *)v7;
  }
  v10 = DesiredAccess;
  LOBYTE(DesiredAccess) = PreviousMode;
  v8 = ObOpenObjectByName(v3, (_DWORD)ExSemaphoreObjectType, DesiredAccess, 0, v10, 0LL, (__int64)&v11);
  if ( v8 >= 0 )
    *SemaphoreHandle = v11;
  return v8;
}
