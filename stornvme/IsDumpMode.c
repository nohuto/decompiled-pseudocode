/*
 * XREFs of IsDumpMode @ 0x1C0007B84
 * Callers:
 *     NVMeHwFindAdapter @ 0x1C0007CD0 (NVMeHwFindAdapter.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsDumpMode(__int64 a1)
{
  return *(_BYTE *)(a1 + 20) != 0;
}
