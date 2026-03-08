/*
 * XREFs of CmpCleanUpKcbCachedSymlink @ 0x1407A751C
 * Callers:
 *     CmDeleteValueKey @ 0x1406B9764 (CmDeleteValueKey.c)
 *     CmpDoParseKey @ 0x1406E1D90 (CmpDoParseKey.c)
 *     CmpMarkKeyUnbacked @ 0x14074AD64 (CmpMarkKeyUnbacked.c)
 *     CmpRebuildKcbCacheFromNode @ 0x1407A5468 (CmpRebuildKcbCacheFromNode.c)
 *     CmSetValueKey @ 0x1407A9870 (CmSetValueKey.c)
 *     CmpGetSymbolicLinkTarget @ 0x1407B0EF0 (CmpGetSymbolicLinkTarget.c)
 *     CmRestoreKey @ 0x140A08004 (CmRestoreKey.c)
 *     CmpLightWeightCommitDeleteValueKeyUoW @ 0x140A256EC (CmpLightWeightCommitDeleteValueKeyUoW.c)
 *     CmpLightWeightCommitSetValueKeyUoW @ 0x140A25BE0 (CmpLightWeightCommitSetValueKeyUoW.c)
 * Callees:
 *     CmpDelayDerefKeyControlBlock @ 0x1407AF9B0 (CmpDelayDerefKeyControlBlock.c)
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
