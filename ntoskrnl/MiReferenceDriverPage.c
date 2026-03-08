/*
 * XREFs of MiReferenceDriverPage @ 0x1402E1DD4
 * Callers:
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x1402E1B88 (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 *     MiLockDriverPageRange @ 0x1406179F0 (MiLockDriverPageRange.c)
 * Callees:
 *     MiAreChargesNeededToLockPage @ 0x140284D60 (MiAreChargesNeededToLockPage.c)
 */

__int64 __fastcall MiReferenceDriverPage(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rcx

  result = MiAreChargesNeededToLockPage(a1);
  if ( (_DWORD)result )
    *(_BYTE *)(v2 + 35) |= 0x20u;
  ++*(_WORD *)(v2 + 32);
  return result;
}
