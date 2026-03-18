/*
 * XREFs of PsGetPagePriorityThread @ 0x1402E1520
 * Callers:
 *     CcInitializeCacheMapInternal @ 0x14025E7B0 (CcInitializeCacheMapInternal.c)
 *     MiCopyOnWrite @ 0x14026FC80 (MiCopyOnWrite.c)
 *     MiAllocateKernelStackPages @ 0x1402731A0 (MiAllocateKernelStackPages.c)
 *     ExpWorkerThread @ 0x1402BEB60 (ExpWorkerThread.c)
 *     CcAsyncCopyRead @ 0x1402C1040 (CcAsyncCopyRead.c)
 *     CcCompleteAsyncRead @ 0x1402C1400 (CcCompleteAsyncRead.c)
 *     PfLogFileDataAccess @ 0x1402DFBD4 (PfLogFileDataAccess.c)
 *     MiInitializeInPageSupport @ 0x1402E13A0 (MiInitializeInPageSupport.c)
 *     MiGetEffectivePagePriorityThread @ 0x1402E14F0 (MiGetEffectivePagePriorityThread.c)
 *     CcPerformReadAhead @ 0x14030E840 (CcPerformReadAhead.c)
 *     CcScheduleReadAheadNuma @ 0x140328DDC (CcScheduleReadAheadNuma.c)
 *     SmSetThreadPagePriority @ 0x1403686B0 (SmSetThreadPagePriority.c)
 *     EtwpTraceThreadRundown @ 0x14038C22C (EtwpTraceThreadRundown.c)
 *     EtwTraceThread @ 0x1406AD060 (EtwTraceThread.c)
 *     PfSnCheckActionsNeeded @ 0x14074E508 (PfSnCheckActionsNeeded.c)
 *     NtQueryInformationThread @ 0x14079FBE0 (NtQueryInformationThread.c)
 *     PfSnAsyncContextInitialize @ 0x1407DB758 (PfSnAsyncContextInitialize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetPagePriorityThread(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rdx
  unsigned int v3; // ecx

  result = (*(_DWORD *)(a1 + 1376) >> 12) & 7;
  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 544) + 1296LL);
  if ( v2 )
  {
    v3 = *(_DWORD *)(v2 + 1076);
    if ( (unsigned int)result >= v3 )
      return v3;
  }
  return result;
}
