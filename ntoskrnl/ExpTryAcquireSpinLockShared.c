/*
 * XREFs of ExpTryAcquireSpinLockShared @ 0x140321970
 * Callers:
 *     MiLocateCombineBlock @ 0x140229F50 (MiLocateCombineBlock.c)
 *     MiQueryAddressSpan @ 0x14031E2D0 (MiQueryAddressSpan.c)
 *     MiCommitExistingVad @ 0x140320D70 (MiCommitExistingVad.c)
 *     MiSetProtectionOnSection @ 0x140321FC0 (MiSetProtectionOnSection.c)
 *     MiLockPageListAndLastPage @ 0x1403232E0 (MiLockPageListAndLastPage.c)
 *     MiEndingOffsetWithLock @ 0x140324190 (MiEndingOffsetWithLock.c)
 *     MiGetControlAreaPtes @ 0x140331C60 (MiGetControlAreaPtes.c)
 *     ExTryAcquireSpinLockSharedAtDpcLevel @ 0x140462EB0 (ExTryAcquireSpinLockSharedAtDpcLevel.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140462F92 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpTryAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140608D40 (ExpTryAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 * Callees:
 *     <none>
 */

char __fastcall ExpTryAcquireSpinLockShared(_DWORD *a1)
{
  signed __int32 v2; // [rsp+8h] [rbp+8h]
  signed __int32 v3; // [rsp+8h] [rbp+8h]
  signed __int32 v4; // [rsp+10h] [rbp+10h]

  _m_prefetchw(a1);
  v2 = *a1 & 0x7FFFFFFF;
  v4 = _InterlockedCompareExchange(a1, v2 + 1, v2);
  if ( v4 == v2 )
    return 1;
  while ( v4 >= 0 )
  {
    v3 = v4;
    v4 = _InterlockedCompareExchange(a1, v4 + 1, v4);
    if ( v4 == v3 )
      return 1;
  }
  return 0;
}
