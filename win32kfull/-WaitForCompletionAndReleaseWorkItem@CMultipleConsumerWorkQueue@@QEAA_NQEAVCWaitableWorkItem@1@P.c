/*
 * XREFs of ?WaitForCompletionAndReleaseWorkItem@CMultipleConsumerWorkQueue@@QEAA_NQEAVCWaitableWorkItem@1@PEBIPEA_N@Z @ 0x1C011F820
 * Callers:
 *     ?UmfdClientSignalServerAndWaitForCompletion@@YAJPEAX0PEBI@Z @ 0x1C011F7BC (-UmfdClientSignalServerAndWaitForCompletion@@YAJPEAX0PEBI@Z.c)
 * Callees:
 *     ?Destroy@CEventPoolEntry@CEventPool@@SAXQEAV12@@Z @ 0x1C00EF4CC (-Destroy@CEventPoolEntry@CEventPool@@SAXQEAV12@@Z.c)
 *     ??1?$CAutoDestroy@VCWaitableWorkItem@CMultipleConsumerWorkQueue@@@@QEAA@XZ @ 0x1C011F92C (--1-$CAutoDestroy@VCWaitableWorkItem@CMultipleConsumerWorkQueue@@@@QEAA@XZ.c)
 *     _CMultipleConsumerWorkQueue::WaitForCompletionAndReleaseWorkItem_::_2_::CEventPoolEntryAutoDestroy::_CEventPoolEntryAutoDestroy @ 0x1C01526A0 (_CMultipleConsumerWorkQueue--WaitForCompletionAndReleaseWorkItem_--_2_--CEventPoolEntryAutoDestr.c)
 */

char __fastcall CMultipleConsumerWorkQueue::WaitForCompletionAndReleaseWorkItem(
        CMultipleConsumerWorkQueue *this,
        struct CMultipleConsumerWorkQueue::CWaitableWorkItem *const a2,
        const unsigned int *a3,
        bool *a4)
{
  bool v8; // zf
  __int64 v9; // rbx
  __int64 v10; // rdi
  _QWORD v12[3]; // [rsp+30h] [rbp-18h] BYREF
  struct CMultipleConsumerWorkQueue::CWaitableWorkItem *v13; // [rsp+50h] [rbp+8h] BYREF

  if ( (unsigned int)WdSetEventAndWaitForSingleObject(
                       **(_QWORD **)(*(_QWORD *)this + 8LL),
                       **(_QWORD **)(*((_QWORD *)a2 + 5) + 8LL),
                       0LL,
                       0LL,
                       a3) == 258
    && a3 )
  {
    if ( a4 )
      *a4 = 1;
  }
  else
  {
    if ( a4 )
      *a4 = 0;
    v8 = *((_DWORD *)a2 + 2) == 3;
    v9 = *((_QWORD *)this + 1);
    v10 = *((_QWORD *)a2 + 5);
    v12[0] = v9;
    v12[1] = v10;
    v13 = a2;
    if ( v8 )
    {
      CAutoDestroy<CMultipleConsumerWorkQueue::CWaitableWorkItem>::~CAutoDestroy<CMultipleConsumerWorkQueue::CWaitableWorkItem>(&v13);
      CMultipleConsumerWorkQueue::WaitForCompletionAndReleaseWorkItem_::_2_::CEventPoolEntryAutoDestroy::_CEventPoolEntryAutoDestroy(v12);
      return 1;
    }
    EngFreeMem(a2);
    if ( (unsigned int)_InterlockedIncrement((volatile signed __int32 *)v9) > 8 )
    {
      _InterlockedDecrement((volatile signed __int32 *)v9);
      CEventPool::CEventPoolEntry::Destroy((_QWORD *)v10);
    }
    else
    {
      KeResetEvent(**(PRKEVENT **)(v10 + 8));
      ExpInterlockedPushEntrySList((PSLIST_HEADER)(v9 + 16), (PSLIST_ENTRY)v10);
    }
  }
  return 0;
}
