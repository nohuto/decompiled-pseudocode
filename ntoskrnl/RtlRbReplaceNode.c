/*
 * XREFs of RtlRbReplaceNode @ 0x1402DE230
 * Callers:
 *     KiAbEntryRemoveFromTree @ 0x14024BC30 (KiAbEntryRemoveFromTree.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall RtlRbReplaceNode(unsigned __int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 *v4; // r9
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx
  _QWORD *result; // rax

  *(_OWORD *)a3 = *(_OWORD *)a2;
  v4 = (__int64 *)(a1 + 8);
  *(_QWORD *)(a3 + 16) = *(_QWORD *)(a2 + 16);
  if ( *(_QWORD *)a3 )
  {
    *(_QWORD *)(*(_QWORD *)a3 + 16LL) = a3 | *(_DWORD *)(*(_QWORD *)a3 + 16LL) & 3;
  }
  else
  {
    v5 = *v4;
    if ( (*v4 & 1) != 0 )
    {
      if ( v5 == 1 )
        v6 = 0LL;
      else
        v6 = v5 ^ (a1 | 1);
    }
    else
    {
      v6 = *v4;
    }
    if ( v6 == a2 )
    {
      if ( (*(_BYTE *)v4 & 1) != 0 )
      {
        *v4 = (a3 ^ a1) & -(__int64)(a3 != 0);
        *(_BYTE *)v4 |= 1u;
      }
      else
      {
        *v4 = a3;
      }
    }
  }
  v7 = *(_QWORD *)(a3 + 8);
  if ( v7 )
    *(_QWORD *)(v7 + 16) = a3 | *(_DWORD *)(v7 + 16) & 3;
  result = (_QWORD *)(*(_QWORD *)(a3 + 16) & 0xFFFFFFFFFFFFFFFCuLL);
  if ( result )
  {
    if ( *result == a2 )
      *result = a3;
    else
      result[1] = a3;
  }
  else if ( (*(_BYTE *)v4 & 1) != 0 )
  {
    result = (_QWORD *)((a3 ^ a1) & -(__int64)(a3 != 0));
    *(_QWORD *)a1 = result;
  }
  else
  {
    *(_QWORD *)a1 = a3;
  }
  return result;
}
