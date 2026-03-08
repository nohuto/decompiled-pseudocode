/*
 * XREFs of ?HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1C0076074
 * Callers:
 *     ThreadUnlock1 @ 0x1C003B460 (ThreadUnlock1.c)
 *     HMUnlockObject @ 0x1C0072980 (HMUnlockObject.c)
 *     HMUnlockObjectInternal @ 0x1C0072A40 (HMUnlockObjectInternal.c)
 *     ?DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1C00782A0 (-DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     DestroyThreadsObjects @ 0x1C0078460 (DestroyThreadsObjects.c)
 *     ThreadUnlockWorker1 @ 0x1C009E600 (ThreadUnlockWorker1.c)
 *     HMDestroyUnlockedObject @ 0x1C01538C0 (HMDestroyUnlockedObject.c)
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C007795C (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ?HMDestroyUnlockedObjectWorkerAtomic@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1C00779D0 (-HMDestroyUnlockedObjectWorkerAtomic@@YAXPEAU_HANDLEENTRY@@@Z.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00ABD88 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall HMDestroyUnlockedObjectWorker(struct _HANDLEENTRY *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // [rsp+20h] [rbp-8h]
  int v6; // [rsp+38h] [rbp+10h] BYREF

  if ( gbInDestroyHandleTableObjects || !PsGetCurrentThreadWin32Thread(a1, a2, a3, a4, v5) )
  {
    if ( PsGetCurrentThreadWin32Thread(a1, a2, a3, a4, v5) )
    {
      if ( (gdwHydraHint & 0x80u) == 0 )
      {
        v6 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3610LL);
      }
    }
    HMDestroyUnlockedObjectWorkerAtomic(a1);
  }
  else
  {
    AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v6);
    HMDestroyUnlockedObjectWorkerAtomic(a1);
    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v6);
  }
}
