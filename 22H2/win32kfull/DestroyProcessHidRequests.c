/*
 * XREFs of DestroyProcessHidRequests @ 0x1C0132C50
 * Callers:
 *     <none>
 * Callees:
 *     FreeProcessHidTable @ 0x1C0132C68 (FreeProcessHidTable.c)
 */

__int64 DestroyProcessHidRequests()
{
  return FreeProcessHidTable();
}
