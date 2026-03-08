/*
 * XREFs of RtlpHpLargeLockAcquireShared @ 0x1405B4F54
 * Callers:
 *     RtlpHpLargeAllocSetExtraPresent @ 0x1405B4B94 (RtlpHpLargeAllocSetExtraPresent.c)
 *     RtlpHpLargeAllocSize @ 0x1405B4CF4 (RtlpHpLargeAllocSize.c)
 * Callees:
 *     RtlpHpAcquireLockShared @ 0x140309A10 (RtlpHpAcquireLockShared.c)
 */

KIRQL __fastcall RtlpHpLargeLockAcquireShared(__int64 a1, char a2)
{
  if ( (a2 & 1) != 0 )
    return -1;
  else
    return RtlpHpAcquireLockShared((volatile LONG *)(a1 + 64), *(_DWORD *)a1 & 1);
}
