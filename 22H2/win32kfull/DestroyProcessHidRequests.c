/*
 * XREFs of DestroyProcessHidRequests @ 0x1C00B8B90
 * Callers:
 *     <none>
 * Callees:
 *     FreeProcessHidTable @ 0x1C00B8BA8 (FreeProcessHidTable.c)
 */

__int64 DestroyProcessHidRequests()
{
  return FreeProcessHidTable();
}
