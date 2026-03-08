/*
 * XREFs of PopCreatePowerThread @ 0x140300AA4
 * Callers:
 *     PopCreateDynamicIrpWorker @ 0x140300A40 (PopCreateDynamicIrpWorker.c)
 *     PopInitializeIrpWorkers @ 0x140B6E534 (PopInitializeIrpWorkers.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     KeSetActualBasePriorityThread @ 0x140357730 (KeSetActualBasePriorityThread.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ObReferenceObjectByHandleWithTag @ 0x1406D8E50 (ObReferenceObjectByHandleWithTag.c)
 *     PsCreateSystemThread @ 0x1407DE2E0 (PsCreateSystemThread.c)
 */

NTSTATUS __fastcall PopCreatePowerThread(KSTART_ROUTINE *a1, void *a2)
{
  NTSTATUS result; // eax
  NTSTATUS v3; // ebx
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  HANDLE ThreadHandle; // [rsp+90h] [rbp+20h] BYREF
  PVOID Object; // [rsp+98h] [rbp+28h] BYREF

  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  Object = 0LL;
  ThreadHandle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = 0LL;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.Attributes = 512;
  result = PsCreateSystemThread(&ThreadHandle, 0x1FFFFFu, &ObjectAttributes, 0LL, 0LL, a1, a2);
  if ( result >= 0 )
  {
    v3 = ObReferenceObjectByHandleWithTag(
           ThreadHandle,
           0x1FFFFFu,
           (POBJECT_TYPE)PsThreadType,
           0,
           0x72496F50u,
           &Object,
           0LL);
    ZwClose(ThreadHandle);
    if ( v3 >= 0 )
    {
      KeSetActualBasePriorityThread((ULONG_PTR)Object);
      ObfDereferenceObjectWithTag(Object, 0x72496F50u);
    }
    return 0;
  }
  return result;
}
