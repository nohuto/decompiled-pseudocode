/*
 * XREFs of MiReplenishTransitionPageHeatList @ 0x14065227C
 * Callers:
 *     MmCopyToCachedPage @ 0x14021DBE0 (MmCopyToCachedPage.c)
 *     MmCheckCachedPageStates @ 0x1402200B0 (MmCheckCachedPageStates.c)
 *     MmAccessFault @ 0x140267D40 (MmAccessFault.c)
 * Callees:
 *     MiAllocatePool @ 0x140289CF0 (MiAllocatePool.c)
 *     RtlpInterlockedPushEntrySList @ 0x1404204A0 (RtlpInterlockedPushEntrySList.c)
 */

void MiReplenishTransitionPageHeatList()
{
  struct _SLIST_ENTRY *Pool; // rax

  while ( LOWORD(stru_140C67F60.Alignment) < 0x40u )
  {
    Pool = (struct _SLIST_ENTRY *)MiAllocatePool(64, 0x90uLL, 0x6C486D4Du);
    if ( !Pool )
    {
      _InterlockedExchange(&dword_140C67F70, 32);
      return;
    }
    *((_DWORD *)&Pool->Next + 2) = 16;
    RtlpInterlockedPushEntrySList(&stru_140C67F60, Pool);
  }
}
