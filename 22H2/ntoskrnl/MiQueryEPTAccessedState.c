/*
 * XREFs of MiQueryEPTAccessedState @ 0x14053B940
 * Callers:
 *     MiAgeWorkingSetTail @ 0x14022DDD0 (MiAgeWorkingSetTail.c)
 *     MiTrimWorkingSetTail @ 0x140330260 (MiTrimWorkingSetTail.c)
 *     MiResetAccessBitsTail @ 0x14039CE80 (MiResetAccessBitsTail.c)
 *     MiSimpleAgeWorkingSetTail @ 0x14053BF10 (MiSimpleAgeWorkingSetTail.c)
 *     MiUpdateOldWorkingSetPagesTail @ 0x14053C6C0 (MiUpdateOldWorkingSetPagesTail.c)
 * Callees:
 *     MiReleaseWalkLocks @ 0x140302EB0 (MiReleaseWalkLocks.c)
 *     MiReacquireWalkLocks @ 0x140530620 (MiReacquireWalkLocks.c)
 *     VmpQueryAccessedState @ 0x1405A4B2C (VmpQueryAccessedState.c)
 */

__int64 __fastcall MiQueryEPTAccessedState(__int64 a1, _DWORD *a2)
{
  __int64 v2; // rdi
  _DWORD *v5; // r9
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 48);
  MiReleaseWalkLocks(a1);
  VmpQueryAccessedState((PEX_SPIN_LOCK)KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[5]);
  result = MiReacquireWalkLocks(a1, v2, 0LL, v5);
  if ( !(_DWORD)result )
    *a2 = 0;
  return result;
}
