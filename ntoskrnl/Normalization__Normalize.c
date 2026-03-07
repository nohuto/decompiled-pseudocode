__int64 __fastcall Normalization__Normalize(__int64 a1, __int64 a2, int a3, __int64 a4, unsigned int a5, _DWORD *a6)
{
  __int64 v7; // r15
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // rax
  unsigned int v13; // edi
  unsigned int v14; // eax
  __int64 v15; // rdx
  int v16; // r10d
  __int64 v17; // rbx
  int v18; // ecx
  int v19; // r9d
  int v20; // r10d
  int v21; // eax
  _QWORD v23[16]; // [rsp+28h] [rbp-49h] BYREF

  v7 = a3;
  memset(v23, 0, 0x78uLL);
  if ( !a2 || !a4 || !a6 )
    return 3221225485LL;
  LODWORD(v23[7]) = 0;
  LOWORD(v23[9]) = 0;
  LODWORD(v23[11]) = 0;
  WORD2(v23[11]) = 0;
  *a6 = 0;
  v23[1] = a2 + 2 * v7;
  v11 = a4 + 2LL * (int)a5;
  v23[6] = __PAIR64__(v7, a5);
  v12 = a4 - 2;
  v23[3] = a4;
  v23[5] = a4;
  v23[10] = a4;
  v13 = 0;
  v23[8] = v12;
  v23[0] = a2;
  v23[4] = v11;
  v23[2] = a2;
  v23[14] = a1;
  while ( a2 != v23[1] )
  {
    if ( v13 )
      goto LABEL_17;
    v14 = *(unsigned __int16 *)a2;
    v15 = *(unsigned __int16 *)a2;
    v23[2] = a2 + 2;
    if ( (signed int)v14 < *(_DWORD *)(a1 + 28)
      || (LOBYTE(v10) = *(_BYTE *)(((unsigned __int64)v14 >> 7) + *(_QWORD *)(a1 + 32)), !(_BYTE)v10)
      || (_BYTE)v10 == 0xFB && *(_BYTE *)(a1 + 113) )
    {
      if ( !NormBuffer__Append((__int64)v23, v15) )
      {
        a2 = v23[2];
        v13 = -1073741789;
        goto LABEL_18;
      }
    }
    else
    {
      v13 = Normalization__NormalizeCharacter(a1, v15, v10, v23);
    }
    a2 = v23[2];
  }
  if ( !v13 )
  {
    a2 = (__int64)(v23[5] - v23[3]) >> 1;
    goto LABEL_24;
  }
LABEL_17:
  if ( v13 != -1073741789 )
  {
    LODWORD(a2) = ((a2 - v23[0]) >> 1) - 1;
    goto LABEL_24;
  }
LABEL_18:
  v16 = ((v23[1] - a2) >> 1) + 1;
  v17 = (a2 - v23[0]) >> 1;
  if ( !(_DWORD)v17 )
    LODWORD(v17) = 1;
  v18 = Normalization__GuessCharCountBySize(a1, v16);
  v21 = v20 * v19 / (int)v17;
  if ( v21 <= v18 )
    v21 = v18;
  LODWORD(a2) = v19 + v21 + (v21 >> 3);
LABEL_24:
  *a6 = a2;
  return v13;
}
