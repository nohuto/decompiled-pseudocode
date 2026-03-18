/*
 * XREFs of ExpTryAcquireSpinLockShared @ 0x140277510
 * Callers:
 *     MiLocateCombineBlock @ 0x140215B40 (MiLocateCombineBlock.c)
 *     MiQueryAddressSpan @ 0x140273C40 (MiQueryAddressSpan.c)
 *     MiCommitExistingVad @ 0x140276910 (MiCommitExistingVad.c)
 *     MiSetProtectionOnSection @ 0x140277B60 (MiSetProtectionOnSection.c)
 *     MiLockPageListAndLastPage @ 0x140278E80 (MiLockPageListAndLastPage.c)
 *     MiEndingOffsetWithLock @ 0x140279D30 (MiEndingOffsetWithLock.c)
 *     MiGetControlAreaPtes @ 0x1402884F0 (MiGetControlAreaPtes.c)
 *     ExTryAcquireSpinLockSharedAtDpcLevel @ 0x14046ADB0 (ExTryAcquireSpinLockSharedAtDpcLevel.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x14046AE92 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpTryAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x14060B190 (ExpTryAcquireSpinLockSharedAtDpcLevelInstrumented.c)
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
