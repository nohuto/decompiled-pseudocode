/*
 * XREFs of MiInSwapStoreContextDereference @ 0x1406818E8
 * Callers:
 *     MiInSwapStore @ 0x1406816C4 (MiInSwapStore.c)
 *     MiInSwapStoreWorker @ 0x1406817B0 (MiInSwapStoreWorker.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

void __fastcall MiInSwapStoreContextDereference(volatile signed __int32 *a1)
{
  if ( _InterlockedExchangeAdd(a1 + 16, 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag((PVOID)a1, 0);
}
