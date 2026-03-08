/*
 * XREFs of ExpTryAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140608D40
 * Callers:
 *     ExTryAcquireSpinLockSharedAtDpcLevel @ 0x140462EB0 (ExTryAcquireSpinLockSharedAtDpcLevel.c)
 * Callees:
 *     ExpTryAcquireSpinLockShared @ 0x140321970 (ExpTryAcquireSpinLockShared.c)
 *     PerfLogSpinLockAcquire @ 0x1405FE910 (PerfLogSpinLockAcquire.c)
 */

__int64 __fastcall ExpTryAcquireSpinLockSharedAtDpcLevelInstrumented(_DWORD *a1)
{
  __int64 v1; // rcx
  __int64 v2; // r8
  char v3; // r9
  int v4; // r10d
  int v5; // r11d
  __int64 v7; // rax

  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    __rdtsc();
  if ( !ExpTryAcquireSpinLockShared(a1) )
    return 0LL;
  ++*(_DWORD *)(v2 + 35008);
  if ( v3 )
  {
    v7 = __rdtsc();
    PerfLogSpinLockAcquire(v1, v7, v7 - v5, 0, v4, 2);
  }
  return 1LL;
}
