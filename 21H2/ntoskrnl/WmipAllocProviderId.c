/*
 * XREFs of WmipAllocProviderId @ 0x140621DF4
 * Callers:
 *     WmipAllocRegEntry @ 0x140370BF4 (WmipAllocRegEntry.c)
 * Callees:
 *     <none>
 */

__int64 WmipAllocProviderId()
{
  return (unsigned int)_InterlockedIncrement(&WmipProviderIdCounter);
}
