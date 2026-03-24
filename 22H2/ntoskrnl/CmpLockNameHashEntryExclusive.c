/*
 * XREFs of CmpLockNameHashEntryExclusive @ 0x1405EFF6C
 * Callers:
 *     CmpGetNameControlBlock @ 0x1405EFC10 (CmpGetNameControlBlock.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402CB080 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall CmpLockNameHashEntryExclusive(unsigned int a1)
{
  ExAcquirePushLockExclusiveEx(
    (ULONG_PTR)CmpNameCacheTable
  + 16
  * (((unsigned __int16)(-30045 * (a1 ^ (a1 >> 9))) ^ (unsigned __int16)((unsigned __int64)(101027 * (a1 ^ (a1 >> 9))) >> 9)) & 0x7FF),
    0LL);
}
