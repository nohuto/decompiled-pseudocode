/*
 * XREFs of DestroyProcessHidRequests @ 0x1C0133000
 * Callers:
 *     <none>
 * Callees:
 *     FreeProcessHidTable @ 0x1C0133018 (FreeProcessHidTable.c)
 */

__int64 DestroyProcessHidRequests()
{
  return FreeProcessHidTable();
}
