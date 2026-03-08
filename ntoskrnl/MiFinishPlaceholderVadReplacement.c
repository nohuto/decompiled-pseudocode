/*
 * XREFs of MiFinishPlaceholderVadReplacement @ 0x140A45098
 * Callers:
 *     MiReserveUserMemory @ 0x1407D4340 (MiReserveUserMemory.c)
 *     MiMapViewOfDataSection @ 0x1407D57C0 (MiMapViewOfDataSection.c)
 * Callees:
 *     MiVadDeleted @ 0x14031F750 (MiVadDeleted.c)
 *     MiUnlockAndDereferenceVadShared @ 0x14031F7B0 (MiUnlockAndDereferenceVadShared.c)
 *     MiLockVadShared @ 0x14031F870 (MiLockVadShared.c)
 *     MiGetProcessPartition @ 0x14031F9D4 (MiGetProcessPartition.c)
 *     MiSetVadDeleted @ 0x140332ED8 (MiSetVadDeleted.c)
 *     MiDecrementVadsBeingDeleted @ 0x140615D58 (MiDecrementVadsBeingDeleted.c)
 *     MiDeleteVad @ 0x1407C82E0 (MiDeleteVad.c)
 *     PerfInfoLogVirtualAlloc @ 0x1409E41C8 (PerfInfoLogVirtualAlloc.c)
 */

LONG __fastcall MiFinishPlaceholderVadReplacement(unsigned int *P, __int64 a2, int a3)
{
  struct _KTHREAD *CurrentThread; // rcx
  __int64 Process; // rsi
  __int16 *ProcessPartition; // rax

  CurrentThread = KeGetCurrentThread();
  Process = (__int64)CurrentThread->ApcState.Process;
  if ( a3 )
  {
    MiLockVadShared((__int64)CurrentThread, (__int64)P);
    if ( !(unsigned int)MiVadDeleted((__int64)P) && (WORD2(PerfGlobalGroupMask[0]) & 0x8000) != 0 )
    {
      ProcessPartition = (__int16 *)MiGetProcessPartition(Process);
      PerfInfoLogVirtualAlloc(
        (P[6] | ((unsigned __int64)*((unsigned __int8 *)P + 32) << 32)) << 12,
        ((P[7] | ((unsigned __int64)*((unsigned __int8 *)P + 33) << 32))
       - (P[6] | ((unsigned __int64)*((unsigned __int8 *)P + 32) << 32))
       + 1) << 12,
        Process,
        0x2000,
        *ProcessPartition,
        *ProcessPartition);
    }
    MiUnlockAndDereferenceVadShared(P);
  }
  else
  {
    MiSetVadDeleted((__int64)P);
    MiDeleteVad(P, 0LL, 0);
  }
  return MiDecrementVadsBeingDeleted(a2);
}
