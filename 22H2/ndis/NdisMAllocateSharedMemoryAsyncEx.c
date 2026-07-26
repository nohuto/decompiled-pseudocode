/*
 * XREFs of NdisMAllocateSharedMemoryAsyncEx @ 0x1C0061BD0
 * Callers:
 *     <none>
 * Callees:
 *     NdisMAllocateSharedMemoryAsync @ 0x1C0061A00 (NdisMAllocateSharedMemoryAsync.c)
 */

NDIS_STATUS __stdcall NdisMAllocateSharedMemoryAsyncEx(
        NDIS_HANDLE MiniportDmaHandle,
        ULONG Length,
        BOOLEAN Cached,
        PVOID Context)
{
  return NdisMAllocateSharedMemoryAsync(MiniportDmaHandle, Length, Cached, Context);
}
