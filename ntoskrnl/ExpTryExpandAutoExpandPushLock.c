/*
 * XREFs of ExpTryExpandAutoExpandPushLock @ 0x1403CF2A8
 * Callers:
 *     FsRtlLookupPerStreamContextInternal @ 0x140241910 (FsRtlLookupPerStreamContextInternal.c)
 *     ExReleaseAutoExpandPushLockShared @ 0x1402623C0 (ExReleaseAutoExpandPushLockShared.c)
 *     FsRtlLookupPerFileObjectContext @ 0x1402C1360 (FsRtlLookupPerFileObjectContext.c)
 * Callees:
 *     ExpAllocateFannedOutPushLock @ 0x1403CF30C (ExpAllocateFannedOutPushLock.c)
 */

void __fastcall ExpTryExpandAutoExpandPushLock(__int64 a1)
{
  signed __int32 v2; // ebx
  __int64 FannedOutPushLock; // rax

  _m_prefetchw((const void *)(a1 + 8));
  v2 = *(_DWORD *)(a1 + 8);
  if ( (v2 & 3) == 0 && v2 == _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 8), v2 | 2, v2) )
  {
    FannedOutPushLock = ExpAllocateFannedOutPushLock(a1, (v2 & 4) == 0);
    if ( FannedOutPushLock == -1 )
    {
      *(_DWORD *)(a1 + 12) = (*(_DWORD *)(a1 + 12) >> 2) & 0x3FF33FFF;
      *(_DWORD *)(a1 + 8) = v2 & 0xFFFFFFFD;
    }
    else
    {
      *(_DWORD *)(a1 + 8) = FannedOutPushLock ^ ((unsigned __int8)v2 ^ (unsigned __int8)FannedOutPushLock) & 4 | 1;
    }
  }
}
