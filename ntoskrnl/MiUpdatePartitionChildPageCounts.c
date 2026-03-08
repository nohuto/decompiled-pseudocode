/*
 * XREFs of MiUpdatePartitionChildPageCounts @ 0x140659730
 * Callers:
 *     MiInitializeDynamicPfns @ 0x140618AB8 (MiInitializeDynamicPfns.c)
 *     MiMoveLargeFreePage @ 0x14064D244 (MiMoveLargeFreePage.c)
 *     MiActOnPartitionNodePages @ 0x140655AB0 (MiActOnPartitionNodePages.c)
 *     MiTransferPartitionPageRun @ 0x140659030 (MiTransferPartitionPageRun.c)
 * Callees:
 *     MiSearchNumaNodeTable @ 0x140319DD0 (MiSearchNumaNodeTable.c)
 *     MiRestrictRangeToNode @ 0x140370AB4 (MiRestrictRangeToNode.c)
 */

_QWORD *__fastcall MiUpdatePartitionChildPageCounts(__int64 a1, __int64 a2, ULONG_PTR a3, ULONG_PTR a4)
{
  _QWORD *result; // rax
  ULONG_PTR v5; // rbx
  ULONG_PTR v9; // rdi
  __int64 v10; // rcx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = &retaddr;
  v5 = a4;
  if ( (unsigned __int16 *)a2 == MiSystemPartition || (unsigned __int16 *)a1 == MiSystemPartition )
  {
    result = (_QWORD *)*(unsigned int *)(a2 + 4);
    if ( (char)result >= 0 )
    {
      result = (_QWORD *)*(unsigned int *)(a1 + 4);
      if ( (char)result >= 0 )
      {
        if ( a4 )
        {
          do
          {
            v9 = MiRestrictRangeToNode(a3, v5);
            result = MiSearchNumaNodeTable(a3);
            v10 = *((unsigned int *)result + 2);
            if ( (unsigned __int16 *)a2 == MiSystemPartition )
            {
              _InterlockedExchangeAdd64(&MiState[(unsigned int)v10 + 1002], v9);
            }
            else if ( (unsigned __int16 *)a1 == MiSystemPartition )
            {
              _InterlockedExchangeAdd64(&MiState[v10 + 1002], -(__int64)v9);
            }
            a3 += v9;
            v5 -= v9;
          }
          while ( v5 );
        }
      }
    }
  }
  return result;
}
