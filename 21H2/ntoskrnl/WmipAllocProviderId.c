/*
 * XREFs of WmipAllocProviderId @ 0x1406C3168
 * Callers:
 *     WmipAllocRegEntry @ 0x1403710A4 (WmipAllocRegEntry.c)
 * Callees:
 *     <none>
 */

__int64 WmipAllocProviderId()
{
  return (unsigned int)_InterlockedIncrement(&WmipProviderIdCounter);
}
