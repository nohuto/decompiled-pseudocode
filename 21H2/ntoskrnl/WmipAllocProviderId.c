/*
 * XREFs of WmipAllocProviderId @ 0x1406C8460
 * Callers:
 *     WmipAllocRegEntry @ 0x140248914 (WmipAllocRegEntry.c)
 * Callees:
 *     <none>
 */

__int64 WmipAllocProviderId()
{
  return (unsigned int)_InterlockedIncrement(&WmipProviderIdCounter);
}
