/*
 * XREFs of CcGetPartitionFromFileObject @ 0x140243818
 * Callers:
 *     CcZeroData @ 0x140243410 (CcZeroData.c)
 *     CcDeferWrite @ 0x140535060 (CcDeferWrite.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CcGetPartitionFromFileObject(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rax

  v1 = *(_QWORD *)(a1 + 40);
  if ( v1 && (v2 = *(_QWORD *)(v1 + 8)) != 0 )
    return *(_QWORD *)(v2 + 536);
  else
    return *((_QWORD *)PspSystemPartition + 1);
}
