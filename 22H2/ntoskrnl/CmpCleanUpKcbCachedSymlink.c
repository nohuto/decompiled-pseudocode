/*
 * XREFs of CmpCleanUpKcbCachedSymlink @ 0x1406D0FB0
 * Callers:
 *     CmpGetSymbolicLinkTarget @ 0x14068FC80 (CmpGetSymbolicLinkTarget.c)
 *     CmSetValueKey @ 0x1406D32F0 (CmSetValueKey.c)
 *     CmpDoParseKey @ 0x1406E91B0 (CmpDoParseKey.c)
 *     CmDeleteValueKey @ 0x14070EFD4 (CmDeleteValueKey.c)
 *     CmpMarkKeyUnbacked @ 0x1407108AC (CmpMarkKeyUnbacked.c)
 *     CmpRebuildKcbCacheFromNode @ 0x14076ADCC (CmpRebuildKcbCacheFromNode.c)
 *     CmRestoreKey @ 0x140A0ACF4 (CmRestoreKey.c)
 *     CmpLightWeightCommitDeleteValueKeyUoW @ 0x140A2844C (CmpLightWeightCommitDeleteValueKeyUoW.c)
 *     CmpLightWeightCommitSetValueKeyUoW @ 0x140A28940 (CmpLightWeightCommitSetValueKeyUoW.c)
 * Callees:
 *     CmpDelayDerefKeyControlBlock @ 0x1406D8750 (CmpDelayDerefKeyControlBlock.c)
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
