// write access to const memory has been detected, the output may be wrong!
const signed __int64 *__fastcall VidSchiProcessIsrSuspendContextCompleted(union _SLIST_HEADER *a1, __int64 a2)
{
  struct _SLIST_ENTRY *v4; // r14
  const signed __int64 *result; // rax
  struct _SLIST_ENTRY *Next; // rbx
  __int64 v7; // rcx
  PSLIST_ENTRY v8; // rax

  v4 = *(struct _SLIST_ENTRY **)(*(_QWORD *)(a2 + 8) + 8LL);
  result = (const signed __int64 *)a1[37].Alignment;
  Next = v4[1].Next;
  if ( !_bittest64(result, WORD2(Next->Next)) )
  {
    result = (const signed __int64 *)LODWORD(Next[1].Next);
    if ( (_DWORD)result != 1 )
    {
      if ( LODWORD(Next[1].Next) == 2 )
      {
        v7 = WORD2(Next->Next);
        g_DxgMmsBugcheckExportIndex = 1;
        WdLogSingleEntry5(0LL, 281LL, 16LL, a1, v7, 0LL);
        __debugbreak();
      }
      v8 = ExpInterlockedPopEntrySList((PSLIST_HEADER)&Next[505]);
      if ( v8 )
      {
        v8[2].Next = v4;
        *((_QWORD *)&v8[2].Next + 1) = *(_QWORD *)(a2 + 16);
        LODWORD(v8->Next) = 17;
        return (const signed __int64 *)ExpInterlockedPushEntrySList(a1 + 111, v8 + 1);
      }
      else
      {
        WdLogSingleEntry1(1LL, WORD2(Next->Next));
        return (const signed __int64 *)((__int64 (*)(_QWORD, __int64, __int64, const wchar_t *, ...))DxgCoreInterface[86])(
                                         0LL,
                                         0x40000LL,
                                         0xFFFFFFFFLL,
                                         L"The list of pending context suspend completed interrupts is full on node %d. Th"
                                          "ere must be severe contention on the scheduler spin lock. This interrupt will be ignored.",
                                         WORD2(Next->Next),
                                         0LL,
                                         0LL,
                                         0LL,
                                         0LL);
      }
    }
  }
  return result;
}
