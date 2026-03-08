/*
 * XREFs of MiEncodeProtoFill @ 0x140369074
 * Callers:
 *     MiInitializePrototypePtes @ 0x1407F3F04 (MiInitializePrototypePtes.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x14020F4D4 (MiGetAnyMultiplexedVm.c)
 *     MiUnlockWorkingSetShared @ 0x14025C1E0 (MiUnlockWorkingSetShared.c)
 *     MiLockPageTableInternal @ 0x14026A0D0 (MiLockPageTableInternal.c)
 *     MiUnlockPageTableInternal @ 0x140290620 (MiUnlockPageTableInternal.c)
 *     MiLockWorkingSetShared @ 0x14032DAF0 (MiLockWorkingSetShared.c)
 */

__int64 __fastcall MiEncodeProtoFill(unsigned __int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // r14
  char *AnyMultiplexedVm; // rbp
  unsigned __int8 v8; // r15

  v4 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v5 = 0LL;
  v6 = v4 + 8 * (a2 >> 12);
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(2);
  v8 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
  if ( v4 >= v6 )
    return MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v8);
  do
  {
    if ( v5 )
    {
      if ( (v4 & 0xFFF) != 0 )
        goto LABEL_4;
      MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v5);
    }
    v5 = ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    MiLockPageTableInternal((__int64)AnyMultiplexedVm, v5, 0);
LABEL_4:
    *(_QWORD *)v4 = a3;
    v4 += 8LL;
  }
  while ( v4 < v6 );
  if ( v5 )
    MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v5);
  return MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v8);
}
