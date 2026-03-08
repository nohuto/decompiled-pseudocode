/*
 * XREFs of MiAddMdlToPartitionTree @ 0x140656460
 * Callers:
 *     MiAllocatePartitionPhysicalPages @ 0x140A416B8 (MiAllocatePartitionPhysicalPages.c)
 * Callees:
 *     MiAddRangeToPartitionTree @ 0x14065654C (MiAddRangeToPartitionTree.c)
 *     MiClearRangeInPartitionTree @ 0x140656C50 (MiClearRangeInPartitionTree.c)
 */

__int64 __fastcall MiAddMdlToPartitionTree(__int64 a1, __int64 a2, char a3)
{
  unsigned __int64 v3; // rsi
  BOOL v4; // r13d
  __int64 v5; // rbx
  __int64 v6; // r15
  __int64 v8; // rdi
  __int64 v9; // rax
  unsigned int v10; // r14d
  __int64 v11; // rbp

  v3 = (unsigned __int64)*(unsigned int *)(a2 + 40) >> 12;
  v4 = (a3 & 1) == 0;
  v5 = 0LL;
  v6 = -1LL;
  v8 = 0LL;
  v9 = a1;
  v10 = 1;
  do
  {
    v11 = (unsigned int)v8;
    if ( (unsigned int)v8 == v3 )
    {
      if ( !v5 )
        return v10;
LABEL_4:
      if ( v10 )
      {
        if ( !(unsigned int)MiAddRangeToPartitionTree(v9, v6, v5, v4) )
        {
          LODWORD(v8) = -1;
          v3 = v11 - v5;
          v5 = 0LL;
          v10 = 0;
LABEL_8:
          v9 = a1;
          goto LABEL_9;
        }
      }
      else
      {
        MiClearRangeInPartitionTree(v9, v6, v5);
      }
      if ( (unsigned int)v8 == v3 )
        return v10;
      v5 = 0LL;
      LODWORD(v8) = v8 - 1;
      goto LABEL_8;
    }
    if ( v5 )
    {
      v9 = a1;
      if ( *(_QWORD *)(a2 + 8 * v8 + 40) + 1LL != *(_QWORD *)(a2 + 8 * v8 + 48) )
        goto LABEL_4;
      ++v5;
    }
    else
    {
      v6 = *(_QWORD *)(a2 + 8 * v8 + 48);
      v5 = 1LL;
    }
LABEL_9:
    v8 = (unsigned int)(v8 + 1);
  }
  while ( (unsigned int)v8 <= v3 );
  return v10;
}
