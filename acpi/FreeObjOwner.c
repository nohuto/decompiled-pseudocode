/*
 * XREFs of FreeObjOwner @ 0x1C004B650
 * Callers:
 *     AMLIRemoveNativeObjectsFromNamespace @ 0x1C0049C4C (AMLIRemoveNativeObjectsFromNamespace.c)
 *     AMLIAddNamespaceOverride @ 0x1C004A2A8 (AMLIAddNamespaceOverride.c)
 *     FreeObjOwnerWorker @ 0x1C004B7F0 (FreeObjOwnerWorker.c)
 *     ParseCall @ 0x1C005A6A0 (ParseCall.c)
 *     ParseUnload @ 0x1C005CB20 (ParseUnload.c)
 * Callees:
 *     memset @ 0x1C0002180 (memset.c)
 *     HeapFree @ 0x1C004EE4C (HeapFree.c)
 */

__int64 __fastcall FreeObjOwner(__int64 a1, struct _EX_RUNDOWN_REF *a2)
{
  KIRQL v4; // al
  unsigned __int64 Count; // rbx
  NTSTATUS v6; // ebx
  struct _KDPC Dpc; // [rsp+40h] [rbp-29h] BYREF
  struct _KTIMER Timer; // [rsp+80h] [rbp+17h] BYREF
  void *ThreadHandle; // [rsp+E0h] [rbp+77h] BYREF

  ThreadHandle = 0LL;
  memset(&Dpc, 0, 60);
  memset(&Timer, 0, sizeof(Timer));
  if ( (gdwfAMLI & 4) == 0 )
    goto LABEL_7;
  if ( !a1
    || (v4 = ExAcquireSpinLockShared(&ACPINamespaceLock),
        Count = a2[3].Count,
        ExReleaseSpinLockShared(&ACPINamespaceLock, v4),
        !Count) )
  {
    KeInitializeTimer(&Timer);
    KeInitializeDpc(&Dpc, FreeObjOwnerTimeout, a2);
    KeSetTimer(&Timer, (LARGE_INTEGER)-600000000LL, &Dpc);
    ExWaitForRundownProtectionRelease(a2 + 4);
    KeCancelTimer(&Timer);
LABEL_7:
    HeapFree(a2);
    return 0;
  }
  v6 = PsCreateSystemThread(&ThreadHandle, 0x1FFFFFu, 0LL, 0LL, 0LL, FreeObjOwnerWorker, a2);
  if ( v6 >= 0 )
  {
    v6 = 32772;
    NtClose(ThreadHandle);
  }
  return (unsigned int)v6;
}
