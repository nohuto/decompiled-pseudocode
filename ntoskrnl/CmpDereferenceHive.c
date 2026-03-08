/*
 * XREFs of CmpDereferenceHive @ 0x1406B6634
 * Callers:
 *     CmpDoFlushAll @ 0x140243DB8 (CmpDoFlushAll.c)
 * Callees:
 *     CmpDeleteHive @ 0x14074C680 (CmpDeleteHive.c)
 */

__int64 __fastcall CmpDereferenceHive(volatile signed __int32 *a1)
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedExchangeAdd(a1 + 1058, 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
    return CmpDeleteHive((PVOID)a1);
  return result;
}
