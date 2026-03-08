/*
 * XREFs of MiReacquireWalkLocks @ 0x140463468
 * Callers:
 *     MiQueryEPTAccessedState @ 0x140463B2C (MiQueryEPTAccessedState.c)
 *     MiProtectDriverSectionPte @ 0x140618060 (MiProtectDriverSectionPte.c)
 * Callees:
 *     MiLockLowestValidPageTable @ 0x140225DB0 (MiLockLowestValidPageTable.c)
 *     MiUnlockWorkingSetShared @ 0x14025C1E0 (MiUnlockWorkingSetShared.c)
 *     MiUnlockPageTableInternal @ 0x140290620 (MiUnlockPageTableInternal.c)
 *     MiLockWorkingSetShared @ 0x14032DAF0 (MiLockWorkingSetShared.c)
 */

__int64 __fastcall MiReacquireWalkLocks(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rdi
  unsigned __int64 valid; // rax
  __int64 result; // rax
  unsigned __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(a1 + 24);
  if ( !a3 )
    MiLockWorkingSetShared(v3);
  valid = MiLockLowestValidPageTable(v3, a2 << 25 >> 16, &v9);
  if ( valid == a2 )
  {
    *(_BYTE *)(a1 + 4) &= ~1u;
    result = 1LL;
    *(_QWORD *)(a1 + 48) = a2;
  }
  else
  {
    MiUnlockPageTableInternal(v3, valid);
    if ( !a3 )
      MiUnlockWorkingSetShared(*(_QWORD *)(a1 + 24), *(_BYTE *)(a1 + 7));
    return 0LL;
  }
  return result;
}
