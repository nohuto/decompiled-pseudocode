/*
 * XREFs of CcGetPartitionFromFileObject @ 0x140359C24
 * Callers:
 *     CcZeroData @ 0x140359820 (CcZeroData.c)
 *     CcDeferWrite @ 0x1404E9F80 (CcDeferWrite.c)
 * Callees:
 *     CcGetPartition @ 0x140293E80 (CcGetPartition.c)
 */

__int64 __fastcall CcGetPartitionFromFileObject(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  __int64 v4; // rcx
  _QWORD *v5; // rcx

  v4 = *(_QWORD *)(a1 + 40);
  if ( v4 && (v5 = *(_QWORD **)(v4 + 8)) != 0LL )
    return CcGetPartition(v5, a2, a3, a4);
  else
    return *((_QWORD *)PspSystemPartition + 1);
}
