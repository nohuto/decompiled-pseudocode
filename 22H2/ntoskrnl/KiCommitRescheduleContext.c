/*
 * XREFs of KiCommitRescheduleContext @ 0x140308444
 * Callers:
 *     KiRescheduleThreadAfterAffinityChange @ 0x140203570 (KiRescheduleThreadAfterAffinityChange.c)
 *     KiSearchForNewThreadOnProcessor @ 0x140240C70 (KiSearchForNewThreadOnProcessor.c)
 *     KeWaitForSingleObject @ 0x140243CC0 (KeWaitForSingleObject.c)
 *     KiQuantumEnd @ 0x1402486D0 (KiQuantumEnd.c)
 *     KiExitThreadWait @ 0x1402BBC60 (KiExitThreadWait.c)
 *     KiSetSystemAffinityThread @ 0x14030702C (KiSetSystemAffinityThread.c)
 *     KiDeferGroupSchedulingPreemption @ 0x140307454 (KiDeferGroupSchedulingPreemption.c)
 *     KiGroupSchedulingQuantumEnd @ 0x140307E24 (KiGroupSchedulingQuantumEnd.c)
 *     KiGroupSchedulingGenerationEnd @ 0x140308178 (KiGroupSchedulingGenerationEnd.c)
 *     KiHandleDeferredPreemption @ 0x140309098 (KiHandleDeferredPreemption.c)
 *     KeWaitForMultipleObjects @ 0x140310FC0 (KeWaitForMultipleObjects.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x14039DBFC (KiUpdateGlobalCpuSetConfiguration.c)
 *     KiSoftParkElectionUnparkProcessor @ 0x140410748 (KiSoftParkElectionUnparkProcessor.c)
 *     KiParkCurrentProcessor @ 0x14057DF2C (KiParkCurrentProcessor.c)
 * Callees:
 *     KiCommitRescheduleContextEntry @ 0x140242E70 (KiCommitRescheduleContextEntry.c)
 */

char __fastcall KiCommitRescheduleContext(unsigned __int8 *a1, __int64 a2, char a3, _QWORD *a4)
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
      v4 |= KiCommitRescheduleContextEntry((__int64 *)&a1[32 * v9 + 16 + 8 * v9], a2, v5, a4);
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
