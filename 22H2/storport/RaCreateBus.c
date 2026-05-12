/*
 * XREFs of RaCreateBus @ 0x1C0079E88
 * Callers:
 *     RaidCreateAdapter @ 0x1C0030B48 (RaidCreateAdapter.c)
 * Callees:
 *     memset @ 0x1C0020480 (memset.c)
 */

void *__fastcall RaCreateBus(_BYTE *a1)
{
  *a1 = 0;
  return memset(a1 + 8, 0, 0x40uLL);
}
