/*
 * XREFs of CmpEnumerateAllOpenSubKeys @ 0x14074B88C
 * Callers:
 *     CmpDoesKeyHaveOpenSubkeys @ 0x14074B804 (CmpDoesKeyHaveOpenSubkeys.c)
 *     CmpPrepareForSubtreeInvalidation @ 0x14074C0F0 (CmpPrepareForSubtreeInvalidation.c)
 *     CmpInvalidateSubtree @ 0x14074C208 (CmpInvalidateSubtree.c)
 *     CmpSearchForOpenSubKeys @ 0x140872764 (CmpSearchForOpenSubKeys.c)
 * Callees:
 *     CmpEnumerateKcbCacheBucket @ 0x14074B950 (CmpEnumerateKcbCacheBucket.c)
 *     CmpCleanUpKCBCacheTable @ 0x14074B9E4 (CmpCleanUpKCBCacheTable.c)
 */

__int64 __fastcall CmpEnumerateAllOpenSubKeys(__int64 a1, char a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  __int64 result; // rax
  __int64 v10; // rbx
  unsigned int v11; // esi

  v4 = *(_QWORD *)(a1 + 32);
  result = CmpCleanUpKCBCacheTable(v4);
  if ( *(_QWORD *)a1 != 1LL && ((*(_DWORD *)(a1 + 184) & 0x40000) == 0 || *(_QWORD *)a1 != 2LL) )
  {
    v10 = 0LL;
    v11 = 0;
    if ( *(_DWORD *)(v4 + 1656) )
    {
      while ( 1 )
      {
        result = CmpEnumerateKcbCacheBucket(a1, *(_QWORD *)(v4 + 1648) + 24LL * v11, a3, a4);
        if ( (_DWORD)result == 1 )
          break;
        if ( (_DWORD)result == 2 )
          --v11;
        if ( ++v11 >= *(_DWORD *)(v4 + 1656) )
          goto LABEL_10;
      }
    }
    else
    {
LABEL_10:
      if ( a2 && *(_DWORD *)(v4 + 1672) )
      {
        do
        {
          result = CmpEnumerateKcbCacheBucket(a1, *(_QWORD *)(v4 + 1664) + 24 * v10, a3, a4);
          if ( (_DWORD)result == 1 )
            break;
          if ( (_DWORD)result == 2 )
            LODWORD(v10) = v10 - 1;
          v10 = (unsigned int)(v10 + 1);
        }
        while ( (unsigned int)v10 < *(_DWORD *)(v4 + 1672) );
      }
    }
  }
  return result;
}
