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
