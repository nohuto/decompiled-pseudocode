/*
 * XREFs of CmpAddKeyHashToEntry @ 0x14074B194
 * Callers:
 *     CmpInsertKeyHash @ 0x140A147E0 (CmpInsertKeyHash.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpAddKeyHashToEntry(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // r10
  __int64 v4; // r9
  __int64 result; // rax

  v3 = *(_QWORD *)(a2 + 16);
  v4 = v3;
  if ( a3 || !v3 )
  {
LABEL_2:
    *(_QWORD *)(a1 + 8) = v3;
    result = 0LL;
    *(_QWORD *)(a2 + 16) = a1;
  }
  else
  {
    while ( *(_DWORD *)a1 != *(_DWORD *)v4
         || *(_DWORD *)(a1 + 24) != *(_DWORD *)(v4 + 24)
         || *(_QWORD *)(a1 + 16) != *(_QWORD *)(v4 + 16) )
    {
      v4 = *(_QWORD *)(v4 + 8);
      if ( !v4 )
        goto LABEL_2;
    }
    return v4 - 16;
  }
  return result;
}
