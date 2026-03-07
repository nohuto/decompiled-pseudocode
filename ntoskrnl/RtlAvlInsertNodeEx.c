char __fastcall RtlAvlInsertNodeEx(unsigned __int64 *a1, unsigned __int64 a2, bool a3, unsigned __int64 a4)
{
  __int64 v5; // rax
  bool v6; // r9
  char v8; // r8
  char v9; // bl
  unsigned int v10; // r9d
  __int64 v11; // r10
  _QWORD *v12; // r9
  unsigned __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rdx
  char v16; // r9
  __int64 v17; // rcx

  LOBYTE(v5) = 0;
  v6 = a3;
  *(_QWORD *)a4 = 0LL;
  *(_QWORD *)(a4 + 8) = 0LL;
  *(_QWORD *)(a4 + 16) = a2;
  if ( !a2 )
  {
    *a1 = a4;
    return v5;
  }
  LOBYTE(v5) = 2 * a3;
  *(_QWORD *)(a2 + 8LL * a3) = a4;
  v8 = (-1 - 2 * a3) & 3;
  v9 = *(_BYTE *)(a2 + 16) & 3;
  if ( v9 )
  {
LABEL_5:
    if ( v9 != v8 )
    {
      *(_BYTE *)(a2 + 16) &= 0xFCu;
      return v5;
    }
    if ( (*(_BYTE *)(a4 + 16) & 3) != v9 )
    {
      v5 = RtlpTreeDoubleRotateNodes(a1, a2, a4, v6);
      *(_BYTE *)(v15 + 16) &= 0xFCu;
      v16 = *(_BYTE *)(a4 + 16) & 0xFC;
      *(_BYTE *)(a4 + 16) = v16;
      if ( v9 == (*(_BYTE *)(v5 + 16) & 3) )
      {
        *(_BYTE *)(v15 + 16) ^= (*(_BYTE *)(v15 + 16) ^ v9 ^ 0xFE) & 3;
        *(_BYTE *)(v5 + 16) &= 0xFCu;
      }
      else
      {
        if ( v9 == ((*(_BYTE *)(v5 + 16) ^ 0xFE) & 3) )
          *(_BYTE *)(a4 + 16) = v9 | v16;
        *(_BYTE *)(v5 + 16) &= 0xFCu;
      }
      return v5;
    }
    v10 = !v6;
    if ( (*(_QWORD *)(a4 + 16) & 0xFFFFFFFFFFFFFFFCuLL) == a2 )
    {
      v11 = v10;
      v12 = (_QWORD *)(a2 + 8 * (v10 ^ 1LL));
      if ( *v12 == a4 )
      {
        v13 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( v13 )
        {
          if ( *(_QWORD *)(v13 + 8) == a2 )
          {
            *(_QWORD *)(v13 + 8) = a4;
          }
          else
          {
            if ( *(_QWORD *)v13 != a2 )
              goto LABEL_28;
            *(_QWORD *)v13 = a4;
          }
        }
        else
        {
          if ( *a1 != a2 )
            goto LABEL_28;
          *a1 = a4;
        }
        *(_QWORD *)(a4 + 16) = v13 | *(_DWORD *)(a4 + 16) & 3;
        v14 = *(_QWORD *)(a4 + 8 * v11);
        if ( !v14 )
        {
LABEL_13:
          *v12 = v14;
          *(_QWORD *)(a4 + 8 * v11) = a2;
          v5 = a4 | *(_DWORD *)(a2 + 16) & 3;
          *(_QWORD *)(a2 + 16) = v5;
          *(_BYTE *)(a4 + 16) &= 0xFCu;
          *(_BYTE *)(a2 + 16) &= 0xFCu;
          return v5;
        }
        v17 = *(_QWORD *)(v14 + 16);
        if ( (v17 & 0xFFFFFFFFFFFFFFFCuLL) == a4 )
        {
          *(_QWORD *)(v14 + 16) = a2 | v17 & 3;
          goto LABEL_13;
        }
      }
    }
LABEL_28:
    __fastfail(0x1Du);
  }
  while ( 1 )
  {
    a4 = a2;
    LOBYTE(v5) = v8 | *(_BYTE *)(a2 + 16) & 0xFC;
    *(_BYTE *)(a2 + 16) = v5;
    a2 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( !a2 )
      return v5;
    v6 = *(_QWORD *)a2 != a4;
    LOBYTE(v5) = 2 * v6;
    v8 = (-1 - 2 * v6) & 3;
    v9 = *(_BYTE *)(a2 + 16) & 3;
    if ( v9 )
      goto LABEL_5;
  }
}
