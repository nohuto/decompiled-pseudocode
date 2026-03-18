/*
 * XREFs of RtlpFindEntry @ 0x1405F22DC
 * Callers:
 *     RtlpAllocateHeap @ 0x1405E80B0 (RtlpAllocateHeap.c)
 *     RtlpCreateSplitBlock @ 0x1405E8DF8 (RtlpCreateSplitBlock.c)
 *     RtlpFreeHeap @ 0x1405EA0E4 (RtlpFreeHeap.c)
 *     RtlpInsertFreeBlock @ 0x1405EA9DC (RtlpInsertFreeBlock.c)
 *     RtlZeroHeap @ 0x1409BAF80 (RtlZeroHeap.c)
 * Callees:
 *     RtlpHeapFindListLookupEntry @ 0x1405F24B0 (RtlpHeapFindListLookupEntry.c)
 */

__int64 __fastcall RtlpFindEntry(__int64 a1, unsigned __int64 a2)
{
  __int64 *v2; // rbx
  int v4; // esi
  __int64 *v5; // rax
  int v6; // r9d
  __int64 result; // rax

  v2 = *(__int64 **)(a1 + 312);
  v4 = a1;
  if ( a2 < *((unsigned int *)v2 + 2) )
  {
LABEL_4:
    v6 = a2;
  }
  else
  {
    while ( 1 )
    {
      v5 = (__int64 *)*v2;
      if ( !*v2 )
        break;
      v2 = (__int64 *)*v2;
      if ( a2 < *((unsigned int *)v5 + 2) )
        goto LABEL_4;
    }
    v6 = *((_DWORD *)v2 + 2) - 1;
  }
  while ( 1 )
  {
    result = RtlpHeapFindListLookupEntry(v4, (_DWORD)v2, 1, v6, a2);
    if ( result )
      break;
    v2 = (__int64 *)*v2;
    v6 = *((_DWORD *)v2 + 6);
  }
  return result;
}
