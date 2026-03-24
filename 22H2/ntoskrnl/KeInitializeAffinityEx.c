/*
 * XREFs of KeInitializeAffinityEx @ 0x140229310
 * Callers:
 *     KiInitializeBootStructures @ 0x14099BA20 (KiInitializeBootStructures.c)
 * Callees:
 *     memset @ 0x140413800 (memset.c)
 */

void *__fastcall KeInitializeAffinityEx(_QWORD *a1)
{
  *a1 = 1310721LL;
  return memset(a1 + 1, 0, 0xA0uLL);
}
