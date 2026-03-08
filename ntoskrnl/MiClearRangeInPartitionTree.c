/*
 * XREFs of MiClearRangeInPartitionTree @ 0x140656C50
 * Callers:
 *     MiAddMdlToPartitionTree @ 0x140656460 (MiAddMdlToPartitionTree.c)
 * Callees:
 *     RtlClearBitsEx @ 0x14020FC50 (RtlClearBitsEx.c)
 *     RtlAvlRemoveNode @ 0x140333B40 (RtlAvlRemoveNode.c)
 *     MiDeletePartitionPageNode @ 0x140656DFC (MiDeletePartitionPageNode.c)
 */

void __fastcall MiClearRangeInPartitionTree(unsigned __int64 *a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // rdi
  unsigned __int64 v4; // rsi
  __int64 v5; // rbp
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  unsigned __int64 *v10; // r14
  unsigned __int64 v11; // r15
  unsigned __int64 v12; // rcx
  __int64 *v13; // r8
  __int64 v14; // r9
  __int64 *v15; // rdx
  bool v16; // zf
  bool i; // zf

  if ( a3 )
  {
    v3 = a2 & 0x3FFFFFFFFFFC0000LL;
    v4 = a3;
    v5 = a2;
    while ( 1 )
    {
      v7 = *a1;
      if ( *a1 )
      {
        v8 = v3 & 0x3FFFFFFFFFFFFFFFLL;
        do
        {
          v9 = *(_QWORD *)(v7 + 24) & 0x3FFFFFFFFFFFFFFFLL;
          if ( v8 >= v9 )
          {
            if ( v8 < *(_QWORD *)(v7 + 32) + v9 )
              break;
            v7 = *(_QWORD *)(v7 + 8);
          }
          else
          {
            v7 = *(_QWORD *)v7;
          }
        }
        while ( v7 );
      }
      v10 = (unsigned __int64 *)(v7 + 32);
      v11 = v4;
      if ( *(_QWORD *)(v7 + 32) + (*(_QWORD *)(v7 + 24) & 0x3FFFFFFFFFFFFFFFuLL) - v5 <= v4 )
        v11 = *(_QWORD *)(v7 + 32) + (*(_QWORD *)(v7 + 24) & 0x3FFFFFFFFFFFFFFFLL) - v5;
      RtlClearBitsEx(v7 + 32, v5 - (*(_QWORD *)(v7 + 24) & 0x3FFFFFFFFFFFFFFFLL), v11);
      *(_QWORD *)(v7 + 24) &= ~0x8000000000000000uLL;
      v12 = *v10;
      if ( !*v10 )
        goto LABEL_26;
      if ( v12 <= 1 )
        break;
      v13 = *(__int64 **)(v7 + 40);
      v14 = *v13;
      v15 = &v13[(v12 - 1) >> 6];
      if ( v13 != v15 )
      {
        for ( i = v14 == 0; i; i = *v13 == 0 )
        {
          if ( ++v13 == v15 )
          {
            v16 = ((0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)v12 - 1)) & *v13) == 0;
            goto LABEL_24;
          }
        }
        goto LABEL_26;
      }
      v16 = (v14 & (0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v12))) == 0;
LABEL_24:
      if ( v16 )
        goto LABEL_25;
LABEL_26:
      v5 += v11;
      v3 ^= (v5 ^ v3) & 0x3FFFFFFFFFFFFFFFLL;
      v4 -= v11;
      if ( !v4 )
        return;
    }
    if ( v12 != 1 || _bittest64(*(const signed __int64 **)(v7 + 40), 0) )
      goto LABEL_26;
LABEL_25:
    RtlAvlRemoveNode(a1, (unsigned __int64 *)v7);
    MiDeletePartitionPageNode((PVOID)v7);
    goto LABEL_26;
  }
}
