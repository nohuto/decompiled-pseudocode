/*
 * XREFs of NdisGetPoolFromNetBufferList @ 0x1C00AE640
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NDIS_HANDLE __stdcall NdisGetPoolFromNetBufferList(PNET_BUFFER_LIST NetBufferList)
{
  return NetBufferList->NdisPoolHandle;
}
