/*
 * XREFs of MiFlushAllStoreSwapPages @ 0x1406379DC
 * Callers:
 *     SmpFlushStorePages @ 0x1409D58C0 (SmpFlushStorePages.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x140256A00 (KeDelayExecutionThread.c)
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     MiStoreUpdateMemoryConditions @ 0x1403561BC (MiStoreUpdateMemoryConditions.c)
 *     KeSetActualBasePriorityThread @ 0x140357730 (KeSetActualBasePriorityThread.c)
 *     MiCanFlushMakeProgress @ 0x14063678C (MiCanFlushMakeProgress.c)
 *     MiWakeModifiedPageWriter @ 0x14063982C (MiWakeModifiedPageWriter.c)
 */

__int64 __fastcall MiFlushAllStoreSwapPages(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbp
  unsigned int v2; // edi
  int v5; // r12d
  __int64 v6; // r15
  __int64 v7; // rcx
  __int64 v8; // r14

  CurrentThread = KeGetCurrentThread();
  v2 = 0;
  if ( !*(_DWORD *)(a1 + 1192) )
    return 1LL;
  --CurrentThread->SpecialApcDisable;
  v5 = KeSetActualBasePriorityThread((ULONG_PTR)CurrentThread, 18);
  v6 = MEMORY[0xFFFFF78000000008];
  v7 = *(unsigned int *)(a1 + 1188);
  _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 1184), 2u);
  v8 = 88 * v7;
  while ( *(_QWORD *)(v8 + a1 + 3904) )
  {
    if ( (unsigned int)MiCanFlushMakeProgress(a1, 1) )
    {
      MiWakeModifiedPageWriter(a1, -1LL);
      MiStoreUpdateMemoryConditions(a1);
      KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&Mi30Milliseconds);
      if ( (unsigned __int64)(MEMORY[0xFFFFF78000000008] - v6) <= 0x2FAF080 )
        continue;
    }
    goto LABEL_8;
  }
  v2 = 1;
LABEL_8:
  _InterlockedOr((volatile signed __int32 *)(a1 + 1184), 1u);
  _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 1184), 0xFFFFFFFE);
  KeSetEvent((PRKEVENT)(a1 + 920), 0, 0);
  KeSetActualBasePriorityThread((ULONG_PTR)CurrentThread, v5);
  if ( CurrentThread->SpecialApcDisable++ == -1
    && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
  {
    KiCheckForKernelApcDelivery();
  }
  return v2;
}
