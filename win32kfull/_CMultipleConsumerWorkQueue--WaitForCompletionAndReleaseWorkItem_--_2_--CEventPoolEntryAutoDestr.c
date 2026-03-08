/*
 * XREFs of _CMultipleConsumerWorkQueue::WaitForCompletionAndReleaseWorkItem_::_2_::CEventPoolEntryAutoDestroy::_CEventPoolEntryAutoDestroy @ 0x1C01526A0
 * Callers:
 *     ?UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z @ 0x1C011ED74 (-UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z.c)
 *     UmfdQueryFontData @ 0x1C011EFA0 (UmfdQueryFontData.c)
 *     ?WaitForCompletionAndReleaseWorkItem@CMultipleConsumerWorkQueue@@QEAA_NQEAVCWaitableWorkItem@1@PEBIPEA_N@Z @ 0x1C011F820 (-WaitForCompletionAndReleaseWorkItem@CMultipleConsumerWorkQueue@@QEAA_NQEAVCWaitableWorkItem@1@P.c)
 * Callees:
 *     ?Destroy@CEventPoolEntry@CEventPool@@SAXQEAV12@@Z @ 0x1C00EF4CC (-Destroy@CEventPoolEntry@CEventPool@@SAXQEAV12@@Z.c)
 */

void __fastcall CMultipleConsumerWorkQueue::WaitForCompletionAndReleaseWorkItem_::_2_::CEventPoolEntryAutoDestroy::_CEventPoolEntryAutoDestroy(
        __int64 a1)
{
  volatile signed __int32 *v1; // rbx
  __int64 v2; // rdi

  v1 = *(volatile signed __int32 **)a1;
  v2 = *(_QWORD *)(a1 + 8);
  if ( (unsigned int)_InterlockedIncrement(*(volatile signed __int32 **)a1) > 8 )
  {
    _InterlockedDecrement(v1);
    CEventPool::CEventPoolEntry::Destroy((_QWORD *)v2);
  }
  else
  {
    KeResetEvent(**(PRKEVENT **)(v2 + 8));
    ExpInterlockedPushEntrySList((PSLIST_HEADER)v1 + 1, (PSLIST_ENTRY)v2);
  }
}
