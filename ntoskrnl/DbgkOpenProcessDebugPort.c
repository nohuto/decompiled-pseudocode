/*
 * XREFs of DbgkOpenProcessDebugPort @ 0x140933D80
 * Callers:
 *     NtQueryInformationProcess @ 0x1407215F0 (NtQueryInformationProcess.c)
 * Callees:
 *     ExReleaseFastMutex @ 0x140262170 (ExReleaseFastMutex.c)
 *     ExAcquireFastMutex @ 0x140262DC0 (ExAcquireFastMutex.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140267A70 (ObfReferenceObject.c)
 *     PsTestProtectedProcessIncompatibility @ 0x14070C774 (PsTestProtectedProcessIncompatibility.c)
 *     ObOpenObjectByPointer @ 0x1407C93D0 (ObOpenObjectByPointer.c)
 */

__int64 __fastcall DbgkOpenProcessDebugPort(__int64 a1, KPROCESSOR_MODE a2, HANDLE *a3)
{
  NTSTATUS v6; // edi
  void *v7; // rbx
  __int64 v8; // rcx

  v6 = -1073740973;
  if ( *(_QWORD *)(a1 + 1400) )
  {
    ExAcquireFastMutex(&DbgkpProcessDebugPortMutex);
    v7 = *(void **)(a1 + 1400);
    if ( v7 )
      ObfReferenceObject(*(PVOID *)(a1 + 1400));
    ExReleaseFastMutex(&DbgkpProcessDebugPortMutex);
    if ( v7 )
    {
      LOBYTE(v8) = a2;
      if ( PsTestProtectedProcessIncompatibility(v8, (__int64)KeGetCurrentThread()->ApcState.Process, a1) )
      {
        v6 = -1073740014;
LABEL_8:
        ObfDereferenceObject(v7);
        return (unsigned int)v6;
      }
      v6 = ObOpenObjectByPointer(v7, a2 == 0 ? 0x200 : 0, 0LL, 0x2000000u, DbgkDebugObjectType, a2, a3);
      if ( v6 < 0 )
        goto LABEL_8;
    }
  }
  return (unsigned int)v6;
}
