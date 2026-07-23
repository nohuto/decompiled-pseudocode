/*
 * XREFs of MiReplenishTransitionPageHeatList @ 0x14055FFA0
 * Callers:
 *     MmAccessFault @ 0x14020D050 (MmAccessFault.c)
 *     MmCheckCachedPageStates @ 0x1402A1C20 (MmCheckCachedPageStates.c)
 *     MmCopyToCachedPage @ 0x1402B1B90 (MmCopyToCachedPage.c)
 * Callees:
 *     MiAllocatePool @ 0x14025A5D0 (MiAllocatePool.c)
 *     RtlpInterlockedPushEntrySList @ 0x140406FF0 (RtlpInterlockedPushEntrySList.c)
 */

void MiReplenishTransitionPageHeatList()
{
  _SLIST_ENTRY *Pool; // rax

  while ( LOWORD(stru_140C4EA10.Alignment) < 0x40u )
  {
    Pool = (_SLIST_ENTRY *)MiAllocatePool(64, 0x90uLL, 0x6C486D4Du);
    if ( !Pool )
    {
      _InterlockedExchange(&dword_140C4EA20, 32);
      return;
    }
    *((_DWORD *)&Pool->Next + 2) = 16;
    RtlpInterlockedPushEntrySList(&stru_140C4EA10, Pool);
  }
}
