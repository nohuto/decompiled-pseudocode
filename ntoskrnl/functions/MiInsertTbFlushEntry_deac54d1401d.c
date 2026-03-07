void __fastcall MiInsertTbFlushEntry(__int64 a1, unsigned __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v6; // rdi
  unsigned __int64 v7; // r14
  __int64 v8; // r8
  _BYTE *v9; // r15
  __int64 v10; // r10
  __int64 v11; // rbp
  unsigned __int64 v12; // rdx
  __int64 v13; // rax
  _BYTE *v14; // rax
  unsigned __int64 v15; // rbp
  __int64 v16; // rdx
  unsigned __int64 v17; // rax
  int v18; // r8d
  unsigned __int64 v19; // rax
  __int64 v20; // r10
  char v21; // al
  unsigned __int64 v22; // rcx

  v6 = 4096LL << (9 * (unsigned __int8)a4);
  v7 = a2;
  if ( *(_DWORD *)a1 != 1 )
  {
    v21 = *(_BYTE *)(a1 + 4);
    if ( (v21 & 8) == 0 && a2 >= 0xFFFFF68000000000uLL && a2 <= 0xFFFFF6FFFFFFFFFFuLL )
      *(_BYTE *)(a1 + 4) = v21 | 8;
  }
  LODWORD(v8) = *(_DWORD *)(a1 + 12);
  v9 = (_BYTE *)(a1 + 4);
  if ( !(_DWORD)v8 || (*v9 & 4) != 0 )
  {
    v11 = a4;
    v10 = (unsigned int)(v8 - 1);
    v14 = (_BYTE *)(a1 + 4);
    if ( !(_DWORD)v8 )
      goto LABEL_10;
  }
  else
  {
    v10 = (unsigned int)(v8 - 1);
    v11 = a4;
    if ( ((*(_QWORD *)(a1 + 8 * v10 + 24) >> 10) & 3LL) == a4 )
    {
      v12 = *(_QWORD *)(a1 + 8 * v10 + 24) & 0x3FFLL;
      if ( (*(_QWORD *)(a1 + 8 * v10 + 24) & 0xFFFFFFFFFFFFF000uLL) + v6 * (v12 + 1) == v7
        && v12 + a3 > v12
        && v12 + a3 <= 0x3FF )
      {
        v13 = *(_QWORD *)(a1 + 8 * v10 + 24);
        *(_QWORD *)(a1 + 16) += a3;
        *(_QWORD *)(a1 + 8 * v10 + 24) = v13 ^ ((unsigned __int16)v13 ^ (unsigned __int16)(v13 + a3)) & 0x3FF;
        return;
      }
      v14 = (_BYTE *)(a1 + 4);
    }
    else
    {
      v14 = (_BYTE *)(a1 + 4);
    }
  }
  if ( (*v14 & 4) == 0 )
  {
    v19 = *(_QWORD *)(a1 + 8 * v10 + 24);
    v20 = a1 + 8 * v10;
    if ( ((v19 >> 10) & 3) == v11 && (v19 & 0xFFFFFFFFFFFFF000uLL) == a3 * v6 + v7 )
    {
      v22 = v19 & 0x3FF;
      if ( v22 + a3 > v22 && v22 + a3 <= 0x3FF )
      {
        *(_QWORD *)(a1 + 16) += a3;
        *(_QWORD *)(v20 + 24) = (v19 - a3 * v6) ^ ((unsigned __int16)(v19 - a3 * v6) ^ (unsigned __int16)(v19 - a3 * v6 + a3)) & 0x3FF;
        return;
      }
    }
  }
LABEL_10:
  if ( (unsigned int)v8 >= *(_DWORD *)(a1 + 8) )
  {
LABEL_31:
    *(_BYTE *)(a1 + 5) = 1;
    return;
  }
  if ( a3 )
  {
    v15 = (unsigned __int64)(v11 & 3) << 10;
    while ( 1 )
    {
      v16 = 1024LL;
      if ( (unsigned __int64)(a3 - 1) <= 0x3FF )
        v16 = a3;
      a3 -= v16;
      v17 = v15 | v7 & 0xFFFFFFFFFFFFF000uLL | ((_WORD)v16 - 1) & 0x3FF;
      v7 += v16 * v6;
      *(_QWORD *)(a1 + 8LL * (unsigned int)v8 + 24) = v17;
      v18 = *(_DWORD *)(a1 + 12);
      *(_QWORD *)(a1 + 16) += v16;
      LODWORD(v8) = v18 + 1;
      *(_DWORD *)(a1 + 12) = v8;
      if ( (_DWORD)v8 == *(_DWORD *)(a1 + 8) && (*v9 & 4) == 0 )
      {
        qsort((void *)(a1 + 24), (unsigned int)v8, 8uLL, (int (__cdecl *)(const void *, const void *))MiTbFlushSort);
        MiCompressTbFlushList(a1);
        v8 = *(unsigned int *)(a1 + 12);
        if ( (_DWORD)v8 == *(_DWORD *)(a1 + 8) )
          break;
      }
      if ( !a3 )
        return;
    }
    if ( a3 )
    {
      *(_QWORD *)(a1 + 16) = v8;
      goto LABEL_31;
    }
  }
}
