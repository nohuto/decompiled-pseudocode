__int64 __fastcall MiEnumerateBadHugeRangePages(__int64 a1, __int64 a2, char a3)
{
  _QWORD *v3; // rax
  __int64 v4; // rdi
  unsigned __int64 j; // r9
  bool v9; // zf
  __int64 v10; // r14
  unsigned __int64 v11; // r11
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // rdx
  _QWORD *v15; // rdx
  __int64 i; // r10
  unsigned __int64 v17; // rax
  __int64 v18; // r8
  _QWORD **v19; // rax
  unsigned __int64 v20; // rcx
  _QWORD *v21; // rcx

  v3 = (_QWORD *)qword_140C66FE0;
  v4 = 0LL;
  j = 0LL;
  while ( v3 )
  {
    j = (unsigned __int64)v3;
    v3 = (_QWORD *)*v3;
  }
  while ( j )
  {
    if ( (*(_BYTE *)(qword_140C67A70 + 8LL * (*(_DWORD *)(j + 24) & 0x3FFFFF)) & 7) == 4 )
      v9 = (a3 & 1) == 0;
    else
      v9 = (a3 & 2) == 0;
    if ( !v9 )
    {
      v10 = *(_QWORD *)(j + 32);
      v11 = 0LL;
      do
      {
        v12 = v11 & -(__int64)(v11 < 0x40000);
        v13 = 0x3FFFFLL;
        while ( 1 )
        {
          if ( v13 - v12 == -1LL )
            goto LABEL_12;
          v15 = (_QWORD *)(v10 + 8 * (v12 >> 6));
          for ( i = ~*v15 | ((1LL << (v12 & 0x3F)) - 1); i == -1; i = ~*v15 )
          {
            if ( (unsigned __int64)++v15 > v10 + 8 * (v13 >> 6) )
              goto LABEL_12;
          }
          _BitScanForward64(&v17, ~i);
          v14 = v17 + (((__int64)v15 - v10) >> 3 << 6);
          if ( v14 > v13 )
          {
LABEL_12:
            v14 = -1LL;
          }
          else if ( v14 != -1LL )
          {
            break;
          }
          if ( !v12 )
            break;
          v18 = v11 + 1;
          if ( v11 + 1 > 0x40000 )
            v18 = 0x40000LL;
          v13 = v18 - 1;
          v12 = 0LL;
        }
        if ( v14 < v11 || v14 == -1LL )
          break;
        *(_QWORD *)(a1 + 8 * v4++) = v14 + ((unsigned __int64)(*(_DWORD *)(j + 24) & 0x3FFFFF) << 18);
        if ( v4 == a2 )
          return v4;
        v11 = v14 + 1;
      }
      while ( v14 + 1 < 0x40000 );
    }
    v19 = *(_QWORD ***)(j + 8);
    v20 = j;
    if ( v19 )
    {
      v21 = *v19;
      for ( j = *(_QWORD *)(j + 8); v21; v21 = (_QWORD *)*v21 )
        j = (unsigned __int64)v21;
    }
    else
    {
      while ( 1 )
      {
        j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !j || *(_QWORD *)j == v20 )
          break;
        v20 = j;
      }
    }
  }
  return v4;
}
