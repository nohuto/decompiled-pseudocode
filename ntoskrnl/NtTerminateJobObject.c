/*
 * XREFs of NtTerminateJobObject @ 0x140791E00
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     PspTerminateAllProcessesInJobHierarchy @ 0x140791E78 (PspTerminateAllProcessesInJobHierarchy.c)
 *     ObReferenceObjectByHandle @ 0x1407C2D00 (ObReferenceObjectByHandle.c)
 *     EtwTraceJob @ 0x1409E2518 (EtwTraceJob.c)
 */

__int64 __fastcall NtTerminateJobObject(void *a1)
{
  NTSTATUS v1; // eax
  unsigned int v2; // ebx
  PVOID Object; // [rsp+50h] [rbp+18h] BYREF

  Object = 0LL;
  v1 = ObReferenceObjectByHandle(a1, 8u, (POBJECT_TYPE)PsJobType, KeGetCurrentThread()->PreviousMode, &Object, 0LL);
  v2 = v1;
  if ( v1 < 0 )
  {
    if ( (PerfGlobalGroupMask[0] & 0x80000) != 0 )
      EtwTraceJob(0LL, 0LL, (unsigned int)v1, 1825LL);
  }
  else
  {
    PspTerminateAllProcessesInJobHierarchy(Object);
    ObfDereferenceObject(Object);
  }
  return v2;
}
