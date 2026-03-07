char __fastcall HvpFindNextDirtyRun(unsigned int *a1, unsigned int *a2, unsigned int *a3, unsigned int *a4)
{
  unsigned int v4; // esi
  unsigned int v6; // edi
  __int64 v10; // r12
  unsigned int v11; // r11d
  unsigned __int64 v12; // r9
  _DWORD *v13; // r8
  _DWORD *v14; // rcx
  int v15; // eax
  unsigned int v16; // eax
  __int64 v17; // rdx
  unsigned int v18; // r10d
  _DWORD *v19; // rax
  __int64 v20; // r9
  unsigned int v21; // r11d
  unsigned int v22; // eax
  unsigned int v23; // edx
  char result; // al
  __int64 v25; // r11
  unsigned int v26; // r12d
  unsigned __int64 v27; // rbx
  _DWORD *v28; // r8
  int v29; // r10d
  _DWORD *i; // rax
  unsigned int v31; // r10d
  __int64 v32; // rcx
  unsigned int v33; // r13d
  unsigned int v34; // r12d
  unsigned __int64 v36; // [rsp+58h] [rbp+28h]

  v4 = *a2;
  v6 = *a1;
  if ( *a2 < *a1 )
  {
    v10 = *((_QWORD *)a1 + 1);
    v11 = 0;
    v36 = v6 - 1;
    v12 = v10 + 4 * (v36 >> 5);
    v13 = (_DWORD *)(v10 + 4 * ((unsigned __int64)v4 >> 5));
    v14 = v13 + 1;
    v15 = ((1 << (v4 & 0x1F)) - 1) | *v13;
    while ( 1 )
    {
      v16 = ~v15;
      if ( v16 )
        break;
      if ( (unsigned __int64)v14 > v12 )
        goto LABEL_20;
      v15 = v13[1];
      ++v13;
      ++v14;
    }
    _BitScanForward64((unsigned __int64 *)&v17, v16);
    v18 = v17 + 32 * (((__int64)v13 - v10) >> 2);
    if ( v18 > v6 )
    {
LABEL_20:
      v18 = v6;
      LODWORD(v20) = 32;
      goto LABEL_15;
    }
    for ( LODWORD(v19) = ~(((1 << v17) - 1) | v16); ; LODWORD(v19) = *v19 )
    {
      if ( (_DWORD)v19 )
      {
        LODWORD(v20) = 32;
        _BitScanForward64((unsigned __int64 *)&v19, (unsigned int)v19);
        goto LABEL_12;
      }
      v19 = v13 + 1;
      if ( (unsigned __int64)(v13 + 1) > v12 )
        break;
      ++v13;
    }
    LODWORD(v20) = 32;
    LODWORD(v19) = 32;
LABEL_12:
    v21 = v6;
    v22 = 32 * (((__int64)v13 - v10) >> 2) + (_DWORD)v19;
    if ( v22 <= v6 )
      v21 = v22;
    v11 = v21 - v18;
LABEL_15:
    if ( !v11 )
    {
LABEL_19:
      v23 = v6;
      goto LABEL_18;
    }
    if ( v18 != v4 )
    {
      v23 = v18;
      v6 = v18 + v11;
LABEL_18:
      *a2 = v6;
      result = 1;
      *a3 = v4;
      *a4 = v23;
      return result;
    }
    v4 += v11;
    if ( v4 < v6 )
    {
      v25 = *((_QWORD *)a1 + 1);
      v26 = 0;
      v27 = v25 + 4 * (v36 >> 5);
      v28 = (_DWORD *)(v25 + 4 * ((unsigned __int64)v4 >> 5));
      v29 = ((1 << (v4 & 0x1F)) - 1) | *v28;
      for ( i = v28 + 1; ; ++i )
      {
        v31 = ~v29;
        if ( v31 )
          break;
        if ( (unsigned __int64)i > v27 )
          goto LABEL_33;
        v29 = v28[1];
        ++v28;
      }
      _BitScanForward64((unsigned __int64 *)&v32, v31);
      v23 = v32 + 32 * (((__int64)v28 - v25) >> 2);
      if ( v23 > v6 )
      {
LABEL_33:
        v23 = v6;
        goto LABEL_38;
      }
      v33 = ~(v31 | ((1 << v32) - 1));
      while ( !v33 )
      {
        if ( (unsigned __int64)(v28 + 1) > v27 )
          goto LABEL_35;
        v33 = v28[1];
        ++v28;
      }
      _BitScanForward64((unsigned __int64 *)&v20, v33);
LABEL_35:
      v34 = v20 + 32 * (((__int64)v28 - v25) >> 2);
      if ( v34 > v6 )
        v34 = v6;
      v26 = v34 - v23;
LABEL_38:
      if ( v26 )
      {
        v6 = v23 + v26;
        goto LABEL_18;
      }
      goto LABEL_19;
    }
  }
  return 0;
}
