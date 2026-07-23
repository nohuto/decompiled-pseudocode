/*
 * XREFs of PspHardDereferenceSiloWorker @ 0x14020098C
 * Callers:
 *     PsReleaseSiloHardReference @ 0x140200960 (PsReleaseSiloHardReference.c)
 *     PspEvaluateAndNotifyEmptyJob @ 0x1406F46D0 (PspEvaluateAndNotifyEmptyJob.c)
 *     PspBeginSiloTeardown @ 0x140906048 (PspBeginSiloTeardown.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402A9FE0 (ObfReferenceObjectWithTag.c)
 *     ExQueueWorkItem @ 0x1402E2FA0 (ExQueueWorkItem.c)
 */

void __fastcall PspHardDereferenceSiloWorker(__int64 a1)
{
  signed __int64 v2; // rax
  bool v3; // cc
  signed __int64 v4; // rax

  if ( !a1 )
    __int2c();
  if ( (*(_DWORD *)(a1 + 1320) & 0x40000000) == 0 )
    __int2c();
  v2 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1520), 0xFFFFFFFFFFFFFFFFuLL);
  v3 = v2 <= 1;
  v4 = v2 - 1;
  if ( v3 )
  {
    if ( v4 )
      __fastfail(0xEu);
    ObfReferenceObjectWithTag((PVOID)a1, 0x746C6644u);
    *(_QWORD *)(a1 + 1528) = 0LL;
    *(_QWORD *)(a1 + 1544) = PspCompleteHardDereferenceSiloDeferred;
    *(_QWORD *)(a1 + 1552) = a1;
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 1528), DelayedWorkQueue);
  }
}
