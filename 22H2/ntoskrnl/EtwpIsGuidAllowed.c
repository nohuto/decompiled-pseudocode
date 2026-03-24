/*
 * XREFs of EtwpIsGuidAllowed @ 0x1406BD550
 * Callers:
 *     EtwpAddRegEntryToGroup @ 0x1406BC360 (EtwpAddRegEntryToGroup.c)
 *     EtwpIsRegEntryAllowed @ 0x1407177BC (EtwpIsRegEntryAllowed.c)
 *     EtwpDisallowedGuidAddition @ 0x140933C54 (EtwpDisallowedGuidAddition.c)
 *     EtwpDisallowedGuidRemoval @ 0x140933F3C (EtwpDisallowedGuidRemoval.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140271AF0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1402C9370 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1402CB240 (ExAcquirePushLockSharedEx.c)
 *     bsearch @ 0x1403D1D80 (bsearch.c)
 */

bool __fastcall EtwpIsGuidAllowed(__int64 a1, const void *a2)
{
  signed __int64 *v2; // rbx
  bool v5; // di

  v2 = (signed __int64 *)(a1 + 704);
  ExAcquirePushLockSharedEx(a1 + 704, 0LL);
  if ( *(_WORD *)(a1 + 1048) )
    v5 = bsearch(a2, *(const void **)(a1 + 1056), *(unsigned __int16 *)(a1 + 1048), 0x10uLL, EtwpCompareGuid) == 0LL;
  else
    v5 = 1;
  if ( _InterlockedCompareExchange64(v2, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v2);
  KeAbPostRelease((ULONG_PTR)v2);
  return v5;
}
