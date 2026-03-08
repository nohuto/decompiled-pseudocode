/*
 * XREFs of ?Destroy@CEventPool@@SAXQEAV1@@Z @ 0x1C00EF474
 * Callers:
 *     ?Destroy@CMultipleConsumerWorkQueue@@SAXQEAV1@@Z @ 0x1C00EF3DC (-Destroy@CMultipleConsumerWorkQueue@@SAXQEAV1@@Z.c)
 * Callees:
 *     ?Destroy@CEventPoolEntry@CEventPool@@SAXQEAV12@@Z @ 0x1C00EF4CC (-Destroy@CEventPoolEntry@CEventPool@@SAXQEAV12@@Z.c)
 */

void __fastcall CEventPool::Destroy(union _SLIST_HEADER *pv)
{
  PSLIST_ENTRY v2; // rbx
  PSLIST_ENTRY v3; // rcx

  v2 = ExpInterlockedFlushSList(pv + 1);
  while ( v2 )
  {
    v3 = v2;
    v2 = v2->Next;
    CEventPool::CEventPoolEntry::Destroy(v3);
  }
  EngFreeMem(pv);
}
