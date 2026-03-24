/*
 * XREFs of CmpCleanUpKcbCachedSymlink @ 0x1405EE830
 * Callers:
 *     CmpCleanUpKcbCacheWithLock @ 0x1405EE874 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpGetSymbolicLinkTarget @ 0x1405EEA70 (CmpGetSymbolicLinkTarget.c)
 *     CmpDoParseKey @ 0x140646890 (CmpDoParseKey.c)
 *     CmpLightWeightCommitSetValueKeyUoW @ 0x14066EE08 (CmpLightWeightCommitSetValueKeyUoW.c)
 *     CmSetValueKey @ 0x1406DD4B0 (CmSetValueKey.c)
 *     CmDeleteValueKey @ 0x1406DF334 (CmDeleteValueKey.c)
 *     CmpRebuildKcbCacheFromNode @ 0x1406E2D94 (CmpRebuildKcbCacheFromNode.c)
 *     CmpMarkKeyUnbacked @ 0x1406E5970 (CmpMarkKeyUnbacked.c)
 *     CmpLightWeightCommitDeleteValueKeyUoW @ 0x140732C8C (CmpLightWeightCommitDeleteValueKeyUoW.c)
 *     CmRestoreKey @ 0x14087BF80 (CmRestoreKey.c)
 * Callees:
 *     CmpDelayDerefKeyControlBlock @ 0x1405EE99C (CmpDelayDerefKeyControlBlock.c)
 */

__int64 __fastcall CmpCleanUpKcbCachedSymlink(__int64 a1)
{
  __int64 result; // rax

  if ( (*(_DWORD *)(a1 + 184) & 0x400000) == 0 )
  {
    result = *(unsigned int *)(a1 + 8);
    if ( (result & 8) != 0 )
    {
      CmpDelayDerefKeyControlBlock(*(_QWORD *)(a1 + 104));
      *(_QWORD *)(a1 + 104) = 0LL;
      result = 65527LL;
      *(_WORD *)(a1 + 8) &= ~8u;
    }
  }
  return result;
}
