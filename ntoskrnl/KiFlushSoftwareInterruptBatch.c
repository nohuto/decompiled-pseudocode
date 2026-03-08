/*
 * XREFs of KiFlushSoftwareInterruptBatch @ 0x1402B7960
 * Callers:
 *     KeSetPriorityThread @ 0x1402261B0 (KeSetPriorityThread.c)
 *     KiReadyDeferredReadyList @ 0x140226FA0 (KiReadyDeferredReadyList.c)
 *     KiSetPriorityThread @ 0x1402273F0 (KiSetPriorityThread.c)
 *     KiRemoveBoostThread @ 0x140229890 (KiRemoveBoostThread.c)
 *     KiAbDeferredProcessingWorker @ 0x1402391E0 (KiAbDeferredProcessingWorker.c)
 *     KiExitThreadWait @ 0x140239380 (KiExitThreadWait.c)
 *     KiProcessThreadWaitList @ 0x1402508F0 (KiProcessThreadWaitList.c)
 *     KiExecuteAllDpcs @ 0x140252F60 (KiExecuteAllDpcs.c)
 *     KiEnterLongDpcProcessing @ 0x140254490 (KiEnterLongDpcProcessing.c)
 *     KiQuantumEnd @ 0x140254F30 (KiQuantumEnd.c)
 *     KeYieldExecution @ 0x140256BE0 (KeYieldExecution.c)
 *     KiExitDispatcher @ 0x14025CA50 (KiExitDispatcher.c)
 *     KiSearchForNewThread @ 0x140260460 (KiSearchForNewThread.c)
 *     KiGroupSchedulingQuantumEnd @ 0x1402AB8A8 (KiGroupSchedulingQuantumEnd.c)
 *     KiGroupSchedulingGenerationEnd @ 0x1402ABBFC (KiGroupSchedulingGenerationEnd.c)
 *     KiSetSystemAffinityThread @ 0x1402AC3AC (KiSetSystemAffinityThread.c)
 *     KiSearchForNewThreadOnProcessor @ 0x1402AC810 (KiSearchForNewThreadOnProcessor.c)
 *     KiDeferGroupSchedulingPreemption @ 0x1402ADC48 (KiDeferGroupSchedulingPreemption.c)
 *     KiHandleDeferredPreemption @ 0x1402AE8D0 (KiHandleDeferredPreemption.c)
 *     KiRescheduleThreadAfterAffinityChange @ 0x1402AFD1C (KiRescheduleThreadAfterAffinityChange.c)
 *     KiApplyForegroundBoostThread @ 0x1402E3178 (KiApplyForegroundBoostThread.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     KiDirectSwitchThread @ 0x1403414A0 (KiDirectSwitchThread.c)
 *     KeWaitForMultipleObjects @ 0x1403516C0 (KeWaitForMultipleObjects.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x14039979C (KiUpdateGlobalCpuSetConfiguration.c)
 *     KiProcessPendingForegroundBoosts @ 0x1403CACA0 (KiProcessPendingForegroundBoosts.c)
 *     KiSendHeteroRescheduleIntRequestHelper @ 0x140459C44 (KiSendHeteroRescheduleIntRequestHelper.c)
 *     KiParkCurrentProcessor @ 0x14057BAA4 (KiParkCurrentProcessor.c)
 *     KiSoftParkElectionDpcRoutine @ 0x14057BEC0 (KiSoftParkElectionDpcRoutine.c)
 * Callees:
 *     HalSendSoftwareInterrupt @ 0x140230250 (HalSendSoftwareInterrupt.c)
 *     HalRequestIpiSpecifyVector @ 0x140230C90 (HalRequestIpiSpecifyVector.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall KiFlushSoftwareInterruptBatch(__int64 a1)
{
  __int64 result; // rax
  bool v3; // zf
  struct _KPRCB *CurrentPrcb; // rax
  char v5; // dl
  int v6; // ecx
  _QWORD *v7; // rdi
  unsigned int v8; // r8d

  result = *(unsigned __int8 *)(a1 + 1);
  if ( (_BYTE)result )
  {
    v3 = (_BYTE)result == 1;
    CurrentPrcb = KeGetCurrentPrcb();
    if ( v3 )
    {
      v5 = *(_BYTE *)a1;
      v6 = *(_DWORD *)(a1 + 4);
      ++CurrentPrcb->SynchCounters.IpiSendSoftwareInterruptCount;
      result = HalSendSoftwareInterrupt(v6, v5);
      v7 = (_QWORD *)(a1 + 8);
    }
    else
    {
      v7 = (_QWORD *)(a1 + 8);
      v8 = 47;
      if ( *(_BYTE *)a1 == 1 )
        v8 = 31;
      ++CurrentPrcb->SynchCounters.IpiSendSoftwareInterruptCount;
      result = HalRequestIpiSpecifyVector(0, a1 + 8, v8);
    }
    if ( *(_BYTE *)(a1 + 1) == 2 )
    {
      *v7 = 2097153LL;
      result = (__int64)memset(v7 + 1, 0, 0x100uLL);
    }
    *(_BYTE *)(a1 + 1) = 0;
    *(_DWORD *)(a1 + 4) = 0xFFFF;
  }
  return result;
}
