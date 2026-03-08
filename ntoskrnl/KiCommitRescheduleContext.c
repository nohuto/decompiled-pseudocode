/*
 * XREFs of KiCommitRescheduleContext @ 0x1402AE04C
 * Callers:
 *     KiExitThreadWait @ 0x140239380 (KiExitThreadWait.c)
 *     KiQuantumEnd @ 0x140254F30 (KiQuantumEnd.c)
 *     KiGroupSchedulingQuantumEnd @ 0x1402AB8A8 (KiGroupSchedulingQuantumEnd.c)
 *     KiGroupSchedulingGenerationEnd @ 0x1402ABBFC (KiGroupSchedulingGenerationEnd.c)
 *     KiSetSystemAffinityThread @ 0x1402AC3AC (KiSetSystemAffinityThread.c)
 *     KiSearchForNewThreadOnProcessor @ 0x1402AC810 (KiSearchForNewThreadOnProcessor.c)
 *     KiDeferGroupSchedulingPreemption @ 0x1402ADC48 (KiDeferGroupSchedulingPreemption.c)
 *     KiHandleDeferredPreemption @ 0x1402AE8D0 (KiHandleDeferredPreemption.c)
 *     KiRescheduleThreadAfterAffinityChange @ 0x1402AFD1C (KiRescheduleThreadAfterAffinityChange.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     KeWaitForMultipleObjects @ 0x1403516C0 (KeWaitForMultipleObjects.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x14039979C (KiUpdateGlobalCpuSetConfiguration.c)
 *     KiSoftParkElectionUnparkProcessor @ 0x14040B280 (KiSoftParkElectionUnparkProcessor.c)
 *     KiParkCurrentProcessor @ 0x14057BAA4 (KiParkCurrentProcessor.c)
 * Callees:
 *     KiCommitRescheduleContextEntry @ 0x140261A70 (KiCommitRescheduleContextEntry.c)
 */

char __fastcall KiCommitRescheduleContext(unsigned __int8 *a1, struct _KPRCB *a2, char a3, _QWORD *a4)
{
  char v4; // di
  char v5; // si
  unsigned int v9; // ebp

  v4 = 0;
  v5 = a3 | 2;
  v9 = 0;
  if ( (WORD2(PerfGlobalGroupMask) & 0x200) == 0 )
    v5 = a3;
  if ( *a1 )
  {
    do
    {
      v4 |= KiCommitRescheduleContextEntry((__int64)&a1[32 * v9 + 16 + 8 * v9], a2, v5, a4);
      ++v9;
    }
    while ( v9 < *a1 );
  }
  if ( *((_DWORD *)a1 + 2) == 1 )
    *(_BYTE *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 34904LL) + 1LL) = (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 34904LL)
                                                                                              + 1LL)
                                                                                   + 1) < **(_BYTE **)(*((_QWORD *)a1 + 2) + 34904LL)
                                                                 ? *(_BYTE *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 34904LL)
                                                                            + 1LL)
                                                                 + 1
                                                                 : 0;
  return v4;
}
