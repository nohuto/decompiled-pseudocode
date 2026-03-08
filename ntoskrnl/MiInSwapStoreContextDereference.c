/*
 * XREFs of MiInSwapStoreContextDereference @ 0x14067E508
 * Callers:
 *     MiInSwapStore @ 0x14067E2E4 (MiInSwapStore.c)
 *     MiInSwapStoreWorker @ 0x14067E3D0 (MiInSwapStoreWorker.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall MiInSwapStoreContextDereference(volatile signed __int32 *a1)
{
  if ( _InterlockedExchangeAdd(a1 + 16, 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag((PVOID)a1, 0);
}
