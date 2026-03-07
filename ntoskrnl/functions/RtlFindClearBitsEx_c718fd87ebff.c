unsigned __int64 __fastcall RtlFindClearBitsEx(unsigned __int64 *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r15
  unsigned __int64 v5; // r14
  unsigned __int64 v7; // r11
  unsigned __int64 v8; // r10
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rdi
  unsigned __int64 *v11; // r8
  __int64 v12; // r9
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rdx
  __int64 v17; // rdx
  unsigned __int64 *v18; // rsi
  bool v19; // zf
  __int64 v20; // rax
  unsigned int v21; // r10d
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // r10
  __int64 v24; // rax
  unsigned __int64 v25; // r10
  __int64 v26; // rax
  unsigned int v27; // ecx
  unsigned int v28; // r9d
  __int64 v29; // rcx
  unsigned __int64 *v30; // rax
  __int64 v31; // rdx
  unsigned __int64 *v32; // r9
  __int64 v33; // rcx
  unsigned int v34; // eax
  unsigned __int64 v35; // rcx
  unsigned __int64 v36; // rax

  v3 = *a1;
  v5 = a1[1];
  v7 = a3 & -(__int64)(a3 < *a1);
  v8 = *a1 - 1;
  if ( !a2 )
    return v7 & 0xFFFFFFFFFFFFFFF8uLL;
  while ( 1 )
  {
    if ( v8 - v7 + 1 < a2 )
      goto LABEL_25;
    v9 = v8 - a2 + 1;
    v10 = v5 + 8 * (v9 >> 6);
    v11 = (unsigned __int64 *)(v5 + 8 * (v7 >> 6));
    v12 = *v11 | ((1LL << (v7 & 0x3F)) - 1);
    if ( a2 > 0x7F )
    {
      v25 = v10 + 8;
      if ( (v9 & 0x3F) == 0 )
        v25 = v5 + 8 * (v9 >> 6);
      if ( v12 )
      {
        if ( *++v11 )
          goto LABEL_47;
        v19 = !_BitScanReverse64((unsigned __int64 *)&v26, v12);
        if ( v19 )
          v27 = 64;
        else
          v27 = 63 - v26;
      }
      else
      {
        v27 = 0;
      }
      while ( 1 )
      {
        v14 = ((__int64)((__int64)v11 - v5) >> 3 << 6) - v27;
        if ( v14 > v9 )
          goto LABEL_25;
        v32 = &v11[(a2 - v27) >> 6];
        while ( ++v11 != v32 )
        {
          if ( *v11 )
            goto LABEL_47;
        }
        v28 = ((_BYTE)a2 - (_BYTE)v27) & 0x3F;
        if ( (((_BYTE)a2 - (_BYTE)v27) & 0x3F) == 0 )
          goto LABEL_11;
        v19 = !_BitScanForward64((unsigned __int64 *)&v29, *v11);
        if ( v19 )
          LODWORD(v29) = 64;
        if ( (unsigned int)v29 >= v28 )
          goto LABEL_11;
        do
        {
LABEL_47:
          v30 = v11;
          if ( (unsigned __int64)v11 > v25 )
            goto LABEL_25;
          ++v11;
        }
        while ( *v11 );
        v19 = !_BitScanReverse64((unsigned __int64 *)&v31, *v30);
        if ( v19 )
          v27 = 64;
        else
          v27 = 63 - v31;
      }
    }
    if ( a2 >= 0x40 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( v12 < 0 )
          {
            if ( (unsigned __int64)++v11 > v10 )
              goto LABEL_25;
            v12 = *v11;
          }
          v19 = !_BitScanReverse64((unsigned __int64 *)&v33, v12);
          if ( v19 )
            v34 = 64;
          else
            v34 = 63 - v33;
          v14 = ((((__int64)((__int64)v11 - v5) >> 3) + 1) << 6) - v34;
          if ( v14 > v9 )
            goto LABEL_25;
          v35 = a2 - v34;
          if ( a2 == v34 )
            goto LABEL_11;
          v12 = *++v11;
          if ( v35 >= 0x40 )
            break;
LABEL_65:
          v19 = !_BitScanForward64(&v36, v12);
          if ( v19 )
            v36 = 64LL;
          if ( v36 >= v35 )
            goto LABEL_11;
        }
        if ( !*v11 )
        {
          v35 -= 64LL;
          if ( !v35 )
            goto LABEL_11;
          v12 = *++v11;
          goto LABEL_65;
        }
      }
    }
    if ( a2 > 1 )
    {
      v17 = 0LL;
      v18 = (unsigned __int64 *)(v5 + 8 * (v8 >> 6));
      while ( v12 != -1 )
      {
LABEL_16:
        v19 = !_BitScanForward64((unsigned __int64 *)&v20, v12);
        if ( v19 )
          LODWORD(v20) = 64;
        if ( (unsigned int)(v17 + v20) >= a2 )
        {
          v22 = -v17;
LABEL_23:
          v14 = ((__int64)((__int64)v11 - v5) >> 3 << 6) + v22;
          goto LABEL_10;
        }
        v21 = a2;
        v22 = ~v12;
        while ( 1 )
        {
          v22 &= v22 >> (v21 >> 1);
          if ( !v22 )
            break;
          v21 -= v21 >> 1;
          if ( v21 <= 1 )
          {
            _BitScanForward64(&v22, v22);
            goto LABEL_23;
          }
        }
        if ( v11 == v18 )
          goto LABEL_25;
        v19 = !_BitScanReverse64((unsigned __int64 *)&v24, v12);
        if ( v19 )
          v17 = 64LL;
        else
          v17 = (unsigned int)(63 - v24);
        v12 = *++v11;
      }
      while ( 1 )
      {
        if ( (unsigned __int64)++v11 > v10 )
          goto LABEL_25;
        v12 = *v11;
        if ( *v11 != -1LL )
        {
          v17 = 0LL;
          goto LABEL_16;
        }
      }
    }
    while ( v12 == -1 )
    {
      if ( (unsigned __int64)++v11 > v10 )
        goto LABEL_25;
      v12 = *v11;
    }
    _BitScanForward64(&v13, ~v12);
    v14 = v13 + ((__int64)((__int64)v11 - v5) >> 3 << 6);
LABEL_10:
    if ( v14 <= v9 )
      break;
LABEL_25:
    v14 = -1LL;
LABEL_26:
    if ( !v7 )
      return v14;
    v23 = a2 + a3;
    if ( a2 + a3 > v3 )
      v23 = v3;
    v8 = v23 - 1;
    v7 = 0LL;
  }
LABEL_11:
  if ( v14 == -1LL )
    goto LABEL_26;
  return v14;
}
