/*
 * XREFs of IoFreeMapRegisters @ 0x140452EA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

void __stdcall IoFreeMapRegisters(PDMA_ADAPTER DmaAdapter, PVOID MapRegisterBase, ULONG NumberOfMapRegisters)
{
  DmaAdapter->DmaOperations->FreeMapRegisters(DmaAdapter, MapRegisterBase, NumberOfMapRegisters);
}
