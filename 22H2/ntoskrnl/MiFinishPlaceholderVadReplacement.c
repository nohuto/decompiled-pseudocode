/*
 * XREFs of MiFinishPlaceholderVadReplacement @ 0x1408D83D8
 * Callers:
 *     MiReserveUserMemory @ 0x140637BF0 (MiReserveUserMemory.c)
 *     MiMapViewOfDataSection @ 0x140639820 (MiMapViewOfDataSection.c)
 * Callees:
 *     MiGetProcessPartition @ 0x14021AD00 (MiGetProcessPartition.c)
 *     MiDeleteVad @ 0x14021BFB0 (MiDeleteVad.c)
 *     MiUnlockAndDereferenceVadShared @ 0x14025AAB0 (MiUnlockAndDereferenceVadShared.c)
 *     MiVadDeleted @ 0x14025AB90 (MiVadDeleted.c)
 *     MiLockVadShared @ 0x14025ABA4 (MiLockVadShared.c)
 *     MiDecrementVadsBeingDeleted @ 0x14052B5B4 (MiDecrementVadsBeingDeleted.c)
 *     PerfInfoLogVirtualAlloc @ 0x140937BD8 (PerfInfoLogVirtualAlloc.c)
 */

LONG __fastcall MiFinishPlaceholderVadReplacement(char *P, __int64 a2, int a3)
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
        *((_DWORD *)P + 6) << 12,
        (*((_DWORD *)P + 7) - *((_DWORD *)P + 6) + 1) << 12,
        Process,
        0x2000,
        *ProcessPartition,
        *ProcessPartition);
    }
    MiUnlockAndDereferenceVadShared(P);
  }
  else
  {
    MiDeleteVad(P, 0LL, 0);
  }
  return MiDecrementVadsBeingDeleted(a2);
}
