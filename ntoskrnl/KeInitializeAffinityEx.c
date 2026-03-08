/*
 * XREFs of KeInitializeAffinityEx @ 0x140457920
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 */

void *__fastcall KeInitializeAffinityEx(_DWORD *a1)
{
  a1[1] = 0;
  *a1 = 1310721;
  return memset(a1 + 2, 0, 0xA0uLL);
}
