/*
 * XREFs of PsGetPagePriorityThread @ 0x14028A290
 * Callers:
 *     CcCompleteAsyncRead @ 0x14020A77C (CcCompleteAsyncRead.c)
 *     CcPerformReadAhead @ 0x14020B9E0 (CcPerformReadAhead.c)
 *     CcScheduleReadAheadNuma @ 0x14020D0BC (CcScheduleReadAheadNuma.c)
 *     CcAsyncCopyRead @ 0x140216AA0 (CcAsyncCopyRead.c)
 *     MiInitializeInPageSupport @ 0x14028A110 (MiInitializeInPageSupport.c)
 *     MiGetEffectivePagePriorityThread @ 0x14028A260 (MiGetEffectivePagePriorityThread.c)
 *     PfLogFileDataAccess @ 0x14028C67C (PfLogFileDataAccess.c)
 *     MiCopyOnWrite @ 0x140319F00 (MiCopyOnWrite.c)
 *     MiAllocateKernelStackPages @ 0x14031D830 (MiAllocateKernelStackPages.c)
 *     CcInitializeCacheMapInternal @ 0x140338F10 (CcInitializeCacheMapInternal.c)
 *     ExpWorkerThread @ 0x140352200 (ExpWorkerThread.c)
 *     SmSetThreadPagePriority @ 0x140356A74 (SmSetThreadPagePriority.c)
 *     EtwpTraceThreadRundown @ 0x14036FE60 (EtwpTraceThreadRundown.c)
 *     NtQueryInformationThread @ 0x1406A7BF0 (NtQueryInformationThread.c)
 *     PfSnAsyncContextInitialize @ 0x1407DFF7C (PfSnAsyncContextInitialize.c)
 *     PfSnCheckActionsNeeded @ 0x1407E3F78 (PfSnCheckActionsNeeded.c)
 *     EtwTraceThread @ 0x1407EBAB0 (EtwTraceThread.c)
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
