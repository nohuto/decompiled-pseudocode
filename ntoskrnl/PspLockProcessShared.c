/*
 * XREFs of PspLockProcessShared @ 0x140302A10
 * Callers:
 *     PsSwapProcessWorkingSet @ 0x1409AB6DC (PsSwapProcessWorkingSet.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1402626A0 (ExAcquirePushLockSharedEx.c)
 */

__int64 __fastcall PspLockProcessShared(__int64 a1, __int64 a2)
{
  --*(_WORD *)(a2 + 484);
  return ExAcquirePushLockSharedEx(a1 + 1080, 0LL);
}
