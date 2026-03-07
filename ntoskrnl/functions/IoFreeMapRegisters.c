void __stdcall IoFreeMapRegisters(PDMA_ADAPTER DmaAdapter, PVOID MapRegisterBase, ULONG NumberOfMapRegisters)
{
  DmaAdapter->DmaOperations->FreeMapRegisters(DmaAdapter, MapRegisterBase, NumberOfMapRegisters);
}
