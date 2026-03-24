/*
 * XREFs of GreDeleteFastMutex @ 0x1C00CB820
 * Callers:
 *     MultiUserNtGreCleanup @ 0x1C007D498 (MultiUserNtGreCleanup.c)
 * Callees:
 *     Win32FreePool @ 0x1C002C230 (Win32FreePool.c)
 */

void __fastcall GreDeleteFastMutex(__int64 a1)
{
  if ( a1 )
    Win32FreePool(a1);
}
