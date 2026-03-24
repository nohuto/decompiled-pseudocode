/*
 * XREFs of MiInSwapStoreContextDereference @ 0x1406FB118
 * Callers:
 *     MiInSwapStore @ 0x1406FAF88 (MiInSwapStore.c)
 *     MiInSwapStoreWorker @ 0x1406FB070 (MiInSwapStoreWorker.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

void __fastcall MiInSwapStoreContextDereference(volatile signed __int32 *a1)
{
  if ( _InterlockedExchangeAdd(a1 + 16, 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag((PVOID)a1, 0);
}
