void __stdcall IoFreeAdapterChannel(PDMA_ADAPTER DmaAdapter)
{
  ((void (*)(void))DmaAdapter->DmaOperations->FreeAdapterChannel)();
}
