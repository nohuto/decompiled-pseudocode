/*
 * XREFs of EtwpIsGuidAllowed @ 0x1406C045C
 * Callers:
 *     EtwpAddRegEntryToGroup @ 0x1406BE860 (EtwpAddRegEntryToGroup.c)
 *     EtwpIsRegEntryAllowed @ 0x1407813B8 (EtwpIsRegEntryAllowed.c)
 *     EtwpNotifyDisallowedGuidChange @ 0x1409E7580 (EtwpNotifyDisallowedGuidChange.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140230D90 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1402BD830 (ExfReleasePushLockShared.c)
 *     bsearch @ 0x1403D97A0 (bsearch.c)
 */

bool __fastcall EtwpIsGuidAllowed(__int64 a1, const void *a2)
{
  signed __int64 *v2; // rbx
  bool v5; // di

  v2 = (signed __int64 *)(a1 + 688);
  ExAcquirePushLockSharedEx(a1 + 688, 0LL);
  if ( *(_WORD *)(a1 + 1064) )
    v5 = bsearch(a2, *(const void **)(a1 + 1072), *(unsigned __int16 *)(a1 + 1064), 0x10uLL, EtwpCompareGuid) == 0LL;
  else
    v5 = 1;
  if ( _InterlockedCompareExchange64(v2, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v2);
  KeAbPostRelease((ULONG_PTR)v2);
  return v5;
}
