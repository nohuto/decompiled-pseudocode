/*
 * XREFs of NtSuspendProcess @ 0x14090C7F0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CB850 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectByHandleWithTag @ 0x14063E2A0 (ObReferenceObjectByHandleWithTag.c)
 *     PsSuspendProcess @ 0x14090C870 (PsSuspendProcess.c)
 */

NTSTATUS __cdecl NtSuspendProcess(HANDLE ProcessHandle)
{
  int v1; // ebx
  PVOID Object; // [rsp+58h] [rbp+10h] BYREF

  Object = 0LL;
  v1 = ObReferenceObjectByHandleWithTag(
         ProcessHandle,
         0x800u,
         (POBJECT_TYPE)PsProcessType,
         KeGetCurrentThread()->PreviousMode,
         0x75537350u,
         &Object,
         0LL);
  if ( v1 >= 0 )
  {
    v1 = PsSuspendProcess(Object);
    ObfDereferenceObjectWithTag(Object, 0x75537350u);
  }
  return v1;
}
