__int64 __fastcall RtlFindNextForwardRunSet(__int64 a1, unsigned int a2, unsigned int *a3)
{
  unsigned int v3; // r11d
  unsigned int v4; // r10d
  unsigned int v5; // r9d
  __int64 v7; // rdi
  unsigned int *v8; // rdx
  unsigned __int64 v9; // rbx
  unsigned int v10; // r8d
  _DWORD *v11; // rax
  __int64 v12; // rcx
  int v13; // r8d
  unsigned int v14; // r8d
  __int64 v15; // rax
  unsigned int v16; // r10d

  v3 = *(_DWORD *)a1;
  v4 = 0;
  v5 = a2;
  if ( *(_DWORD *)a1 > a2 )
  {
    v7 = *(_QWORD *)(a1 + 8);
    v8 = (unsigned int *)(v7 + 4 * ((unsigned __int64)a2 >> 5));
    v9 = v7 + 4 * ((unsigned __int64)(v3 - 1) >> 5);
    v10 = (-1 << (v5 & 0x1F)) & *v8;
    v11 = v8 + 1;
    while ( !v10 )
    {
      if ( (unsigned __int64)v11 > v9 )
        goto LABEL_17;
      ++v8;
      ++v11;
      v10 = *v8;
    }
    _BitScanForward64((unsigned __int64 *)&v12, v10);
    v5 = v12 + 32 * (((__int64)v8 - v7) >> 2);
    if ( v5 > v3 )
    {
LABEL_17:
      v5 = v3;
      goto LABEL_13;
    }
    v13 = ((1 << v12) - 1) | v10;
    while ( 1 )
    {
      v14 = ~v13;
      if ( v14 )
      {
        _BitScanForward64((unsigned __int64 *)&v15, v14);
        goto LABEL_10;
      }
      if ( (unsigned __int64)(v8 + 1) > v9 )
        break;
      v13 = v8[1];
      ++v8;
    }
    LODWORD(v15) = 32;
LABEL_10:
    v16 = v3;
    if ( 32 * (unsigned int)(((__int64)v8 - v7) >> 2) + (unsigned int)v15 <= v3 )
      v16 = 32 * (((__int64)v8 - v7) >> 2) + v15;
    v4 = v16 - v5;
  }
LABEL_13:
  *a3 = v5;
  return v4;
}
