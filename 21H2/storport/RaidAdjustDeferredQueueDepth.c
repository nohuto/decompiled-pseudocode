/*
 * XREFs of RaidAdjustDeferredQueueDepth @ 0x1C0033D90
 * Callers:
 *     RaidInitializeDeferredQueue @ 0x1C0033EA4 (RaidInitializeDeferredQueue.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C000BDB0 (RaidAllocatePool.c)
 */

__int64 __fastcall RaidAdjustDeferredQueueDepth(union _SLIST_HEADER *a1)
{
  int v2; // edi
  struct _SLIST_ENTRY *Pool; // rax
  int Alignment_low; // edx

  if ( LOWORD(a1->Alignment) >= 0xAu )
    return 0LL;
  v2 = 0;
  while ( 1 )
  {
    Pool = (struct _SLIST_ENTRY *)RaidAllocatePool(
                                    NonPagedPoolNx,
                                    *((unsigned __int16 *)&a1->HeaderX64 + 1),
                                    0x66446152u,
                                    a1[2].Region);
    if ( !Pool )
      break;
    LODWORD(Pool[1].Next) = 134684675;
    ExpInterlockedPushEntrySList(a1 + 5, Pool);
    Alignment_low = LOWORD(a1->Alignment);
    if ( ++v2 >= (unsigned int)(10 - Alignment_low) )
    {
      LOWORD(a1->Alignment) = v2 + Alignment_low;
      return 0LL;
    }
  }
  LOWORD(a1->Alignment) += v2;
  return 3221225495LL;
}
