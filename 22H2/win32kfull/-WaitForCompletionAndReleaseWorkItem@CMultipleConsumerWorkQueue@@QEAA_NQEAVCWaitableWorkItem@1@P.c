/*
 * XREFs of ?WaitForCompletionAndReleaseWorkItem@CMultipleConsumerWorkQueue@@QEAA_NQEAVCWaitableWorkItem@1@PEBIPEA_N@Z @ 0x1C00F39E0
 * Callers:
 *     UmfdQueryFontData @ 0x1C00F36C0 (UmfdQueryFontData.c)
 *     ?UmfdClientWaitForCompletion@@YAJPEAX0PEBI@Z @ 0x1C02DE4E8 (-UmfdClientWaitForCompletion@@YAJPEAX0PEBI@Z.c)
 * Callees:
 *     ?Destroy@CEventPoolEntry@CEventPool@@SAXQEAV12@@Z @ 0x1C012E364 (-Destroy@CEventPoolEntry@CEventPool@@SAXQEAV12@@Z.c)
 */

bool __fastcall CMultipleConsumerWorkQueue::WaitForCompletionAndReleaseWorkItem(
        CMultipleConsumerWorkQueue *this,
        struct CMultipleConsumerWorkQueue::CWaitableWorkItem *const a2,
        const unsigned int *a3,
        bool *a4)
{
  void *v7; // r11
  __int64 v8; // rbx
  __int64 v9; // rdi
  bool v10; // bp
  union _LARGE_INTEGER Timeout; // [rsp+48h] [rbp+10h] BYREF

  v7 = **(void ***)(*((_QWORD *)a2 + 5) + 8LL);
  if ( !a3 )
  {
    KeWaitForSingleObject(v7, Executive, 0, 0, 0LL);
    goto LABEL_3;
  }
  Timeout.QuadPart = -10000LL * *a3;
  if ( KeWaitForSingleObject(v7, Executive, 0, 0, &Timeout) != 258 )
  {
LABEL_3:
    if ( a4 )
      *a4 = 0;
    v8 = *((_QWORD *)this + 1);
    v9 = *((_QWORD *)a2 + 5);
    v10 = *((_DWORD *)a2 + 2) == 3;
    EngFreeMem(a2);
    if ( (unsigned int)_InterlockedIncrement((volatile signed __int32 *)v8) > 8 )
    {
      _InterlockedDecrement((volatile signed __int32 *)v8);
      CEventPool::CEventPoolEntry::Destroy((PVOID)v9);
    }
    else
    {
      KeResetEvent(**(PRKEVENT **)(v9 + 8));
      ExpInterlockedPushEntrySList((PSLIST_HEADER)(v8 + 16), (PSLIST_ENTRY)v9);
    }
    return v10;
  }
  if ( a4 )
    *a4 = 1;
  return 0;
}
