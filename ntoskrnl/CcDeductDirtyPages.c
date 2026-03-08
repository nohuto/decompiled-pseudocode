/*
 * XREFs of CcDeductDirtyPages @ 0x14029CD20
 * Callers:
 *     CcAcquireByteRangeForWrite @ 0x14021A220 (CcAcquireByteRangeForWrite.c)
 *     CcDeleteMbcb @ 0x14029CBA4 (CcDeleteMbcb.c)
 *     CcDeleteBcbs @ 0x1403C0748 (CcDeleteBcbs.c)
 * Callees:
 *     CcDeductDirtyPagesInternal @ 0x1403364AC (CcDeductDirtyPagesInternal.c)
 */

__int64 __fastcall CcDeductDirtyPages(__int64 a1, __int64 a2)
{
  __int64 v2; // r9
  __int64 v3; // r8

  v2 = 0LL;
  if ( a1 )
  {
    v3 = *(_QWORD *)(a1 + 536);
    if ( CcEnablePerVolumeLazyWriter )
      v2 = *(_QWORD *)(a1 + 600);
  }
  else
  {
    v3 = *((_QWORD *)PspSystemPartition + 1);
  }
  return CcDeductDirtyPagesInternal(a1, a2, v3, v2);
}
