/*
 * XREFs of CmpQuitNextHive @ 0x14076D260
 * Callers:
 *     CmpDoFlushAll @ 0x14037D80C (CmpDoFlushAll.c)
 * Callees:
 *     CmpDeleteHive @ 0x14071BAC4 (CmpDeleteHive.c)
 */

void __fastcall CmpQuitNextHive(__int64 a1)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 4272), 0xFFFFFFFF) == 1 )
    CmpDeleteHive((_QWORD *)a1);
}
