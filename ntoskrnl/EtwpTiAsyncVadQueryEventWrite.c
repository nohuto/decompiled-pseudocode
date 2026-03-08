/*
 * XREFs of EtwpTiAsyncVadQueryEventWrite @ 0x1402F8B5C
 * Callers:
 *     EtwpTiVadQueryEventWrite @ 0x1402F8AE4 (EtwpTiVadQueryEventWrite.c)
 * Callees:
 *     EtwpTiAllocVadQueryEventWriteWorkItemContext @ 0x1402F8BCC (EtwpTiAllocVadQueryEventWriteWorkItemContext.c)
 *     ExQueueWorkItem @ 0x14033F3D0 (ExQueueWorkItem.c)
 */

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
