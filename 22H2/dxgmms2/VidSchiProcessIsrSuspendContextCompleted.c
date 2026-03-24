/*
 * XREFs of VidSchiProcessIsrSuspendContextCompleted @ 0x1C003B640
 * Callers:
 *     VidSchDdiNotifyInterruptWorker @ 0x1C000DED0 (VidSchDdiNotifyInterruptWorker.c)
 * Callees:
 *     <none>
 */

const signed __int64 *__fastcall VidSchiProcessIsrSuspendContextCompleted(union _SLIST_HEADER *a1, __int64 a2)
{
  struct _SLIST_ENTRY *v4; // rbp
  const signed __int64 *result; // rax
  struct _SLIST_ENTRY *Next; // rbx
  _QWORD *v7; // rax
  __int64 v8; // rcx
  PSLIST_ENTRY v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rax

  v4 = *(struct _SLIST_ENTRY **)(*(_QWORD *)(a2 + 8) + 8LL);
  result = (const signed __int64 *)a1[36].Region;
  Next = v4[1].Next;
  if ( !_bittest64(result, WORD2(Next->Next)) )
  {
    result = (const signed __int64 *)LODWORD(Next[1].Next);
    if ( (_DWORD)result != 1 )
    {
      if ( LODWORD(Next[1].Next) == 2 )
      {
        v7 = (_QWORD *)WdLogNewEntry5_WdCriticalError(a1, a2);
        v7[3] = 281LL;
        v7[4] = 16LL;
        v7[5] = a1;
        v8 = WORD2(Next->Next);
        v7[7] = 0LL;
        v7[6] = v8;
        WdLogEvent5_WdCriticalError(v7);
        __debugbreak();
      }
      v9 = ExpInterlockedPopEntrySList((PSLIST_HEADER)&Next[502]);
      if ( v9 )
      {
        v9[2].Next = v4;
        *((_QWORD *)&v9[2].Next + 1) = *(_QWORD *)(a2 + 16);
        LODWORD(v9->Next) = 17;
        return (const signed __int64 *)ExpInterlockedPushEntrySList(a1 + 110, v9 + 1);
      }
      else
      {
        v13 = WdLogNewEntry5_WdAssertion(v11, v10, v12);
        *(_QWORD *)(v13 + 24) = WORD2(Next->Next);
        return (const signed __int64 *)WdLogEvent5_WdAssertion(v13);
      }
    }
  }
  return result;
}
