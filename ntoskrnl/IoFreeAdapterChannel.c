/*
 * XREFs of IoFreeAdapterChannel @ 0x140452E80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

void __stdcall IoFreeAdapterChannel(PDMA_ADAPTER DmaAdapter)
{
  ((void (*)(void))DmaAdapter->DmaOperations->FreeAdapterChannel)();
}
