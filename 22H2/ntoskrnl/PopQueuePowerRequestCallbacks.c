/*
 * XREFs of PopQueuePowerRequestCallbacks @ 0x14034B508
 * Callers:
 *     PopQueuePowerRequestCallback @ 0x14034B4C8 (PopQueuePowerRequestCallback.c)
 *     PopProcessPowerRequestOverrideQueryResponse @ 0x14034BCB0 (PopProcessPowerRequestOverrideQueryResponse.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140205660 (ObfReferenceObjectWithTag.c)
 *     ExQueueWorkItem @ 0x14023E0C0 (ExQueueWorkItem.c)
 */

void __fastcall PopQueuePowerRequestCallbacks(__int64 a1, char a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  _QWORD *v6; // rax

  if ( !*(_BYTE *)(a1 + 78) )
  {
    v4 = 0LL;
    while ( !*(_BYTE *)(a1 + v4 + 72) )
    {
      if ( ++v4 >= 6 )
        return;
    }
    ObfReferenceObjectWithTag((PVOID)a1, 0x72506F50u);
    v5 = PopPowerRequestCallbacks;
    v6 = (_QWORD *)(a1 + 56);
    if ( *(__int64 **)(PopPowerRequestCallbacks + 8) != &PopPowerRequestCallbacks )
      __fastfail(3u);
    *v6 = PopPowerRequestCallbacks;
    *(_QWORD *)(a1 + 64) = &PopPowerRequestCallbacks;
    *(_QWORD *)(v5 + 8) = v6;
    PopPowerRequestCallbacks = a1 + 56;
    *(_BYTE *)(a1 + 78) = 1;
    if ( a2 )
    {
      if ( !PopCallbackWorkItemScheduled )
      {
        PopCallbackWorkItemScheduled = 1;
        ExQueueWorkItem(&PopCallbackWorkItem, CriticalWorkQueue);
      }
    }
  }
}
