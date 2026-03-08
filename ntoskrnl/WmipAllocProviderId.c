/*
 * XREFs of WmipAllocProviderId @ 0x140799F90
 * Callers:
 *     WmipAllocRegEntry @ 0x1403BC6F4 (WmipAllocRegEntry.c)
 * Callees:
 *     <none>
 */

__int64 WmipAllocProviderId()
{
  return (unsigned int)_InterlockedIncrement(&WmipProviderIdCounter);
}
