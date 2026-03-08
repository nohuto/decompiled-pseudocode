/*
 * XREFs of MiQueryEPTAccessedState @ 0x140463B2C
 * Callers:
 *     MiAgeWorkingSetTail @ 0x1402C9E50 (MiAgeWorkingSetTail.c)
 *     MiResetAccessBitsTail @ 0x1402DDE40 (MiResetAccessBitsTail.c)
 *     MiTrimWorkingSetTail @ 0x1402E29B0 (MiTrimWorkingSetTail.c)
 *     MiSimpleAgeWorkingSetTail @ 0x140463CB0 (MiSimpleAgeWorkingSetTail.c)
 *     MiUpdateOldWorkingSetPagesTail @ 0x140463EE0 (MiUpdateOldWorkingSetPagesTail.c)
 * Callees:
 *     MiReleaseWalkLocks @ 0x1402D45CC (MiReleaseWalkLocks.c)
 *     VmpQueryAccessedState @ 0x14045E7BA (VmpQueryAccessedState.c)
 *     MiReacquireWalkLocks @ 0x140463468 (MiReacquireWalkLocks.c)
 */

__int64 __fastcall MiQueryEPTAccessedState(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rdi
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 48);
  MiReleaseWalkLocks(a1);
  VmpQueryAccessedState(
    (PEX_SPIN_LOCK)KeGetCurrentThread()->ApcState.Process[2].Affinity.StaticBitmap[5],
    (_QWORD *)(a2 + 8),
    *(_DWORD *)a2,
    a3);
  result = MiReacquireWalkLocks(a1, v3, 0);
  if ( !(_DWORD)result )
    *(_DWORD *)a2 = 0;
  return result;
}
