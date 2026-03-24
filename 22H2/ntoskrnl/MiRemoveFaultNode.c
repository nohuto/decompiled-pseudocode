/*
 * XREFs of MiRemoveFaultNode @ 0x14032061C
 * Callers:
 *     MiMapPagesToZero @ 0x1402339E0 (MiMapPagesToZero.c)
 *     MiDecrementHugeContext @ 0x140397718 (MiDecrementHugeContext.c)
 *     MiScrubNodeLargePageList @ 0x140556D78 (MiScrubNodeLargePageList.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x140234490 (RtlAvlRemoveNode.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140295410 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402BC410 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

void __fastcall MiRemoveFaultNode(__int64 a1)
{
  char v1; // bl
  volatile LONG *v3; // rdi
  __int64 *v4; // rcx

  v1 = *(_BYTE *)(a1 + 71);
  v3 = &dword_140C4E570;
  if ( v1 )
    v3 = &dword_140C4E560;
  ExAcquireSpinLockExclusiveAtDpcLevel(v3);
  v4 = &qword_140C4E578;
  if ( v1 )
    v4 = &qword_140C4E568;
  RtlAvlRemoveNode((unsigned __int64 *)v4, (unsigned __int64 *)a1);
  *(_BYTE *)(a1 + 68) = 0;
  ExReleaseSpinLockExclusiveFromDpcLevel(v3);
}
