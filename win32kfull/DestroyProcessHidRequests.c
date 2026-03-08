/*
 * XREFs of DestroyProcessHidRequests @ 0x1C00F0B20
 * Callers:
 *     <none>
 * Callees:
 *     FreeProcessHidTable @ 0x1C00F0B38 (FreeProcessHidTable.c)
 */

__int64 DestroyProcessHidRequests()
{
  return FreeProcessHidTable();
}
