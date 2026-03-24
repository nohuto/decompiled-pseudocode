/*
 * XREFs of GreDeleteFastMutex @ 0x1C00CB2D0
 * Callers:
 *     MultiUserNtGreCleanup @ 0x1C007BDB8 (MultiUserNtGreCleanup.c)
 * Callees:
 *     Win32FreePool @ 0x1C002ADC0 (Win32FreePool.c)
 */

void __fastcall GreDeleteFastMutex(__int64 a1)
{
  if ( a1 )
    Win32FreePool(a1);
}
