/*
 * XREFs of RebalanceNode @ 0x140252D58
 * Callers:
 *     DeleteNodeFromTree @ 0x140252A00 (DeleteNodeFromTree.c)
 *     RtlInsertElementGenericTableFullAvl @ 0x140252C20 (RtlInsertElementGenericTableFullAvl.c)
 * Callees:
 *     PromoteNode @ 0x140252E14 (PromoteNode.c)
 */

__int64 __fastcall RebalanceNode(__int64 a1)
{
  int v1; // r9d
  __int64 v2; // r10
  __int64 v3; // r10
  __int64 v4; // r11
  __int64 result; // rax
  int v6; // edi
  __int64 v7; // rbx
  __int64 v8; // rcx
  char v9; // r9
  __int64 v10; // r10
  __int64 v11; // r11
  char v12; // r9
  __int64 v13; // r10

  v1 = *(char *)(a1 + 24);
  if ( *(_BYTE *)(a1 + 24) == 1 )
    v2 = *(_QWORD *)(a1 + 16);
  else
    v2 = *(_QWORD *)(a1 + 8);
  if ( *(_BYTE *)(v2 + 24) == (_BYTE)v1 )
  {
    PromoteNode(v2);
    *(_BYTE *)(v3 + 24) = 0;
    *(_BYTE *)(v4 + 24) = 0;
    return 0LL;
  }
  v6 = -v1;
  if ( *(char *)(v2 + 24) == -v1 )
  {
    if ( (_BYTE)v1 == 1 )
      v7 = *(_QWORD *)(v2 + 8);
    else
      v7 = *(_QWORD *)(v2 + 16);
    PromoteNode(v7);
    PromoteNode(v8);
    *(_BYTE *)(v11 + 24) = 0;
    *(_BYTE *)(v10 + 24) = 0;
    if ( *(_BYTE *)(v7 + 24) == v9 )
    {
      *(_BYTE *)(v11 + 24) = -v9;
    }
    else if ( *(char *)(v7 + 24) == v6 )
    {
      *(_BYTE *)(v10 + 24) = v9;
    }
    *(_BYTE *)(v7 + 24) = 0;
    return 0LL;
  }
  PromoteNode(v2);
  result = 1LL;
  *(_BYTE *)(v13 + 24) = -v12;
  return result;
}
