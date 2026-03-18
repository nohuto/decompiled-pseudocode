/*
 * XREFs of PspDeletePartition @ 0x1409B3450
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     PspRemovePartitionFromGlobalList @ 0x1405E2D48 (PspRemovePartitionFromGlobalList.c)
 */

__int64 __fastcall PspDeletePartition(ULONG_PTR BugCheckParameter2)
{
  ULONG_PTR v1; // r9
  __int64 result; // rax

  v1 = *(_QWORD *)(BugCheckParameter2 + 24);
  if ( v1 )
    KeBugCheckEx(0x18Eu, 0LL, BugCheckParameter2, v1, 0LL);
  if ( *(_QWORD *)(BugCheckParameter2 + 40) )
    return PspRemovePartitionFromGlobalList(BugCheckParameter2);
  return result;
}
