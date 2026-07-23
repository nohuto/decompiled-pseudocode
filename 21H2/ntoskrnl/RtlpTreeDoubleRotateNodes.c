/*
 * XREFs of RtlpTreeDoubleRotateNodes @ 0x1403231A0
 * Callers:
 *     MiZeroLargePages @ 0x1402D6D70 (MiZeroLargePages.c)
 *     RtlAvlRemoveNode @ 0x1402D9370 (RtlAvlRemoveNode.c)
 *     RtlAvlInsertNodeEx @ 0x1403212A0 (RtlAvlInsertNodeEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpTreeDoubleRotateNodes(_QWORD *a1, __int64 a2, unsigned __int64 a3, unsigned int a4)
{
  __int64 result; // rax
  unsigned __int64 *v5; // r11
  unsigned __int64 *v6; // rbx
  unsigned __int64 v7; // r10
  unsigned int v8; // r9d
  __int64 v9; // r8
  _QWORD *v10; // r9
  unsigned __int64 v11; // r10
  unsigned __int64 v12; // rcx
  __int64 *v13; // r10
  __int64 v14; // r8
  __int64 v15; // rdi
  __int64 v16; // r11

  result = *(_QWORD *)a3;
  if ( !a4 )
    result = *(_QWORD *)(a3 + 8);
  if ( (*(_QWORD *)(result + 16) & 0xFFFFFFFFFFFFFFFCuLL) != a3 )
    goto LABEL_23;
  v5 = (unsigned __int64 *)(a3 + 8 * (a4 ^ 1LL));
  if ( *v5 != result || *(_QWORD *)(a2 + 8LL * a4) != a3 || (*(_QWORD *)(a3 + 16) & 0xFFFFFFFFFFFFFFFCuLL) != a2 )
    goto LABEL_23;
  *(_QWORD *)(a2 + 8LL * a4) = result;
  v6 = (unsigned __int64 *)(result + 8LL * a4);
  *(_QWORD *)(result + 16) = a2 | *(_DWORD *)(result + 16) & 3;
  v7 = *v6;
  if ( *v6 )
  {
    v15 = *(_QWORD *)(v7 + 16);
    if ( (v15 & 0xFFFFFFFFFFFFFFFCuLL) != result )
      goto LABEL_23;
    *(_QWORD *)(v7 + 16) = a3 | v15 & 3;
  }
  *v5 = v7;
  v8 = a4 ^ 1;
  *v6 = a3;
  *(_QWORD *)(a3 + 16) = result | *(_DWORD *)(a3 + 16) & 3;
  if ( (*(_QWORD *)(result + 16) & 0xFFFFFFFFFFFFFFFCuLL) != a2
    || (v9 = v8, v10 = (_QWORD *)(a2 + 8 * (v8 ^ 1LL)), *v10 != result) )
  {
LABEL_23:
    __fastfail(0x1Du);
  }
  v11 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
  if ( v11 )
  {
    if ( *(_QWORD *)(v11 + 8) == a2 )
    {
      *(_QWORD *)(v11 + 8) = result;
    }
    else
    {
      if ( *(_QWORD *)v11 != a2 )
        goto LABEL_23;
      *(_QWORD *)v11 = result;
    }
  }
  else
  {
    if ( *a1 != a2 )
      goto LABEL_23;
    *a1 = result;
  }
  v12 = v11 | *(_DWORD *)(result + 16) & 3;
  v13 = (__int64 *)(result + 8 * v9);
  *(_QWORD *)(result + 16) = v12;
  v14 = *v13;
  if ( *v13 )
  {
    v16 = *(_QWORD *)(v14 + 16);
    if ( (v16 & 0xFFFFFFFFFFFFFFFCuLL) == result )
    {
      *(_QWORD *)(v14 + 16) = a2 | v16 & 3;
      goto LABEL_14;
    }
    goto LABEL_23;
  }
LABEL_14:
  *v10 = v14;
  *v13 = a2;
  *(_QWORD *)(a2 + 16) = result | *(_DWORD *)(a2 + 16) & 3;
  return result;
}
