/*
 * XREFs of KiFindRescheduleContextEntryForPrcb @ 0x1402ADFD8
 * Callers:
 *     KiExitThreadWait @ 0x140239380 (KiExitThreadWait.c)
 *     KiExecuteAllDpcs @ 0x140252F60 (KiExecuteAllDpcs.c)
 *     KiQuantumEnd @ 0x140254F30 (KiQuantumEnd.c)
 *     KeYieldExecution @ 0x140256BE0 (KeYieldExecution.c)
 *     KiSearchForNewThread @ 0x140260460 (KiSearchForNewThread.c)
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
 *     KiAdjustRescheduleContextForParking @ 0x14057DB98 (KiAdjustRescheduleContextForParking.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall KiFindRescheduleContextEntryForPrcb(_BYTE *a1, __int64 a2)
{
  __int64 v2; // r8
  int v3; // r9d
  _QWORD *i; // rax

  v2 = 0LL;
  v3 = 0;
  if ( *a1 )
  {
    for ( i = a1 + 16; *i != a2; i += 5 )
    {
      if ( ++v3 >= (unsigned int)(unsigned __int8)*a1 )
        return (_QWORD *)v2;
    }
    return i;
  }
  return (_QWORD *)v2;
}
