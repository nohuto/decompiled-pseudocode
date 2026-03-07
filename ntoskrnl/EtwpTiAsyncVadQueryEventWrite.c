void __fastcall EtwpTiAsyncVadQueryEventWrite(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( (int)EtwpTiAllocVadQueryEventWriteWorkItemContext(a1, a2, a3, a4) >= 0 )
  {
    MEMORY[0] = 0LL;
    MEMORY[0x10] = EtwpTiVadQueryEventWriteCallback;
    MEMORY[0x18] = 0LL;
    ExQueueWorkItem(0LL, DelayedWorkQueue);
  }
}
