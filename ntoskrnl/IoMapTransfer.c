PHYSICAL_ADDRESS __stdcall IoMapTransfer(
        PDMA_ADAPTER DmaAdapter,
        PMDL Mdl,
        PVOID MapRegisterBase,
        PVOID CurrentVa,
        PULONG Length,
        BOOLEAN WriteToDevice)
{
  return (PHYSICAL_ADDRESS)((__int64 (__fastcall *)(PDMA_ADAPTER, PMDL, PVOID, PVOID, PULONG, BOOLEAN))DmaAdapter->DmaOperations->MapTransfer)(
                             DmaAdapter,
                             Mdl,
                             MapRegisterBase,
                             CurrentVa,
                             Length,
                             WriteToDevice);
}
