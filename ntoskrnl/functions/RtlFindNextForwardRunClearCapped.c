__int64 __fastcall RtlFindNextForwardRunClearCapped(__int64 a1, unsigned int a2, unsigned int a3, unsigned int *a4)
{
  unsigned int v4; // ebx
  unsigned int v5; // r11d
  unsigned int v6; // r10d
  __int64 v9; // r15
  unsigned int v10; // r8d
  _DWORD *v11; // rdx
  unsigned __int64 v12; // rsi
  int v13; // r9d
  _DWORD *i; // rax
  unsigned int v15; // r9d
  __int64 v16; // rcx
  int v17; // eax
  unsigned __int64 j; // rax
  unsigned int *v19; // rax
  unsigned int v20; // r8d

  v4 = *(_DWORD *)a1;
  v5 = 0;
  v6 = a2;
  if ( *(_DWORD *)a1 > a2 )
  {
    v9 = *(_QWORD *)(a1 + 8);
    v10 = 0;
    v11 = (_DWORD *)(v9 + 4 * ((unsigned __int64)a2 >> 5));
    v12 = v9 + 4 * ((unsigned __int64)(v4 - 1) >> 5);
    v13 = ((1 << (v6 & 0x1F)) - 1) | *v11;
    for ( i = v11 + 1; ; ++i )
    {
      v15 = ~v13;
      if ( v15 )
        break;
      if ( (unsigned __int64)i > v12 )
        goto LABEL_7;
      v13 = *++v11;
    }
    _BitScanForward64((unsigned __int64 *)&v16, v15);
    v6 = v16 + 32 * (((__int64)v11 - v9) >> 2);
    if ( v6 > v4 )
    {
LABEL_7:
      v6 = v4;
      goto LABEL_18;
    }
    v17 = 1 << v16;
    LODWORD(v16) = 32;
    for ( j = ~(v15 | (v17 - 1)); !(_DWORD)j; j = *v19 )
    {
      if ( v10 > a3 )
        goto LABEL_14;
      v10 += 32;
      v19 = v11 + 1;
      if ( (unsigned __int64)(v11 + 1) > v12 )
        goto LABEL_14;
      ++v11;
    }
    _BitScanForward64((unsigned __int64 *)&v16, j);
LABEL_14:
    v20 = v4;
    if ( 32 * (unsigned int)(((__int64)v11 - v9) >> 2) + (unsigned int)v16 <= v4 )
      v20 = 32 * (((__int64)v11 - v9) >> 2) + v16;
    v10 = v20 - v6;
    if ( v10 > a3 )
      v10 = a3;
LABEL_18:
    v5 = v10;
  }
  *a4 = v6;
  return v5;
}
