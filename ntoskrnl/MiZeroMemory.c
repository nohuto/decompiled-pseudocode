/*
 * XREFs of MiZeroMemory @ 0x140389E0C
 * Callers:
 *     MiZeroEngineMemory @ 0x1402758F0 (MiZeroEngineMemory.c)
 *     MiZeroPageCalibrateDpc @ 0x140389C70 (MiZeroPageCalibrateDpc.c)
 * Callees:
 *     KeZeroPages @ 0x14041BBF0 (KeZeroPages.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

void *__fastcall MiZeroMemory(__int64 a1, void *a2, size_t a3, int a4)
{
  if ( a4 == 1 )
    return (void *)KeZeroPages(a2, a3);
  else
    return memset(a2, 0, a3);
}
