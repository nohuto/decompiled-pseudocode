/*
 * XREFs of WmipAllocProviderId @ 0x1406A5B24
 * Callers:
 *     WmipAllocRegEntry @ 0x140371884 (WmipAllocRegEntry.c)
 * Callees:
 *     <none>
 */

__int64 WmipAllocProviderId()
{
  return (unsigned int)_InterlockedIncrement(&WmipProviderIdCounter);
}
