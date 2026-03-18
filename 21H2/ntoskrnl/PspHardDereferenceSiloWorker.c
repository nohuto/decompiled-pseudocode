/*
 * XREFs of PspHardDereferenceSiloWorker @ 0x14020B10C
 * Callers:
 *     PsReleaseSiloHardReference @ 0x14020B0E0 (PsReleaseSiloHardReference.c)
 *     PspEvaluateAndNotifyEmptyJob @ 0x140683DF0 (PspEvaluateAndNotifyEmptyJob.c)
 *     NtSetInformationJobObject @ 0x140685A20 (NtSetInformationJobObject.c)
 *     PspJobClose @ 0x1406D77F0 (PspJobClose.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 */

void __fastcall PspHardDereferenceSiloWorker(__int64 a1)
{
  signed __int64 v2; // rax
  bool v3; // cc
  signed __int64 v4; // rax

  if ( !a1 )
    __int2c();
  if ( (*(_DWORD *)(a1 + 1512) & 0x40000000) == 0 )
    __int2c();
  v2 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1712), 0xFFFFFFFFFFFFFFFFuLL);
  v3 = v2 <= 1;
  v4 = v2 - 1;
  if ( v3 )
  {
    if ( v4 )
      __fastfail(0xEu);
    ObfReferenceObjectWithTag((PVOID)a1, 0x746C6644u);
    *(_QWORD *)(a1 + 1720) = 0LL;
    *(_QWORD *)(a1 + 1736) = PspCompleteHardDereferenceSiloDeferred;
    *(_QWORD *)(a1 + 1744) = a1;
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 1720), DelayedWorkQueue);
  }
}
