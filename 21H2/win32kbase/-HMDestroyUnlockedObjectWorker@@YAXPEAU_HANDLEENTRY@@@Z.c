/*
 * XREFs of ?HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1C0030704
 * Callers:
 *     ?DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1C002D828 (-DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     DestroyThreadsObjects @ 0x1C002D9E0 (DestroyThreadsObjects.c)
 *     ThreadUnlock1 @ 0x1C0030C00 (ThreadUnlock1.c)
 *     HMUnlockObject @ 0x1C0038FB0 (HMUnlockObject.c)
 *     HMUnlockObjectInternal @ 0x1C0039070 (HMUnlockObjectInternal.c)
 *     ThreadUnlockWorker1 @ 0x1C008DB70 (ThreadUnlockWorker1.c)
 *     HMDestroyUnlockedObject @ 0x1C00D0380 (HMDestroyUnlockedObject.c)
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C002CA0C (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C002CA34 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ?HMDestroyUnlockedObjectWorkerAtomic@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1C00305C8 (-HMDestroyUnlockedObjectWorkerAtomic@@YAXPEAU_HANDLEENTRY@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall HMDestroyUnlockedObjectWorker(struct _HANDLEENTRY *a1, __int64 a2, __int64 a3)
{
  char v4; // [rsp+38h] [rbp+10h] BYREF

  if ( gbInDestroyHandleTableObjects )
  {
    if ( (gdwHydraHint & 0x80u) == 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
    HMDestroyUnlockedObjectWorkerAtomic(a1);
  }
  else
  {
    AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v4, a2, a3);
    HMDestroyUnlockedObjectWorkerAtomic(a1);
    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v4);
  }
}
