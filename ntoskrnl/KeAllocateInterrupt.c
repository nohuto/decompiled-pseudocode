/*
 * XREFs of KeAllocateInterrupt @ 0x14028F83C
 * Callers:
 *     IopConnectInterrupt @ 0x1406F43D8 (IopConnectInterrupt.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x140420460 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1404204A0 (RtlpInterlockedPushEntrySList.c)
 *     MmAllocateIndependentPages @ 0x140869AC0 (MmAllocateIndependentPages.c)
 */

PSLIST_ENTRY __fastcall KeAllocateInterrupt(union _SLIST_HEADER *a1)
{
  union _SLIST_HEADER *v1; // rbp
  unsigned int v3; // ebx
  PSLIST_ENTRY result; // rax
  unsigned int v5; // r14d
  struct _SLIST_ENTRY *v6; // rbx
  __int64 v7; // rsi

  v1 = a1 + 816;
  v3 = *(unsigned __int16 *)(a1[12].Alignment + 138);
  result = RtlpInterlockedPopEntrySList(a1 + 816);
  if ( result )
  {
LABEL_2:
    result[18].Next = (_SLIST_ENTRY *)a1;
  }
  else
  {
    v5 = v3;
    while ( 1 )
    {
      result = (PSLIST_ENTRY)MmAllocateIndependentPages(4096LL, v5);
      v6 = result;
      if ( !result )
        break;
      v7 = 12LL;
      do
      {
        RtlpInterlockedPushEntrySList(v1, v6);
        v6 += 20;
        --v7;
      }
      while ( v7 );
      result = RtlpInterlockedPopEntrySList(v1);
      if ( result )
        goto LABEL_2;
    }
  }
  return result;
}
