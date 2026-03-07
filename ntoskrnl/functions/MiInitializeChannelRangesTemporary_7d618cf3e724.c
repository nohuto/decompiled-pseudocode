__int64 MiInitializeChannelRangesTemporary()
{
  __int64 result; // rax
  _QWORD *v1; // rcx
  unsigned int v2; // r9d
  int v3; // r10d
  _BYTE *v4; // r8
  unsigned int v5; // edx
  unsigned int v6; // eax
  _BYTE *v7; // rax
  unsigned int v8; // r9d
  char *i; // r8
  unsigned int v10; // eax
  unsigned int v11; // r10d
  unsigned int v12; // edx
  unsigned int v13; // r11d
  int v14; // ebx
  char *v15; // r15
  unsigned int v16; // edi
  unsigned int v17; // ecx
  char *v18; // rdx
  __int64 j; // r9
  unsigned int v20; // edx
  unsigned int v21; // edx
  unsigned __int64 v22; // rax
  unsigned int v23; // r11d
  int v24; // ebx
  char *v25; // rsi
  unsigned int v26; // r9d
  unsigned int v27; // eax
  unsigned int v28; // edi
  unsigned int v29; // ecx
  char *v30; // rdx
  __int64 k; // r8
  unsigned int v32; // edx
  unsigned int v33; // eax
  unsigned __int64 v34; // rax
  unsigned int v35; // eax
  int v36; // edx
  unsigned int v37; // eax
  unsigned __int16 *v38; // r8
  _QWORD *v39; // [rsp+30h] [rbp-50h] BYREF
  int v40; // [rsp+38h] [rbp-48h] BYREF
  int v41; // [rsp+3Ch] [rbp-44h]
  unsigned int v42; // [rsp+40h] [rbp-40h]
  _OWORD v43[2]; // [rsp+50h] [rbp-30h] BYREF
  _UNKNOWN *retaddr; // [rsp+98h] [rbp+18h] BYREF

  result = (__int64)&retaddr;
  v40 = 0;
  v39 = 0LL;
  memset(v43, 0, sizeof(v43));
  if ( !dword_140D1D1D8 )
    return result;
  if ( byte_140C69565 )
    return result;
  if ( !dword_140D1D1EC )
    return result;
  v42 = 256;
  result = ((__int64 (__fastcall *)(__int64, __int64, _QWORD **, int *))off_140C020E8[0])(31LL, 8LL, &v39, &v40);
  v1 = v39;
  if ( !v39 )
    return result;
  v2 = 0;
  v3 = 0;
  if ( *v39 == -1LL )
    goto LABEL_17;
  v4 = (char *)v39 + 14;
  do
  {
    v5 = *((unsigned __int16 *)v4 - 1);
    if ( v2 <= v5 )
      v2 = *((unsigned __int16 *)v4 - 1);
    if ( *v4 )
    {
      v3 = 1;
    }
    else
    {
      v6 = *((unsigned __int16 *)v4 - 2);
      if ( v6 < 0x40 && (unsigned __int16)v5 < 4u )
      {
        *((_BYTE *)v43 + ((unsigned __int64)(v5 + 4 * v6) >> 3)) |= 1 << ((v5 + 4 * v6) & 7);
        v1 = v39;
      }
    }
    v7 = v4;
    v4 += 16;
    result = (v7 - (_BYTE *)v1 - 14) >> 4;
    dword_140C65714 = result;
  }
  while ( *(_QWORD *)(v4 - 14) != -1LL );
  if ( !v3 )
LABEL_17:
    v2 = 0;
  v8 = v2 + 1;
  MmNumberOfChannels = v8;
  if ( v8 == 1 )
    return result;
  if ( v8 > 4 )
  {
    for ( i = (char *)v1 + 12; ; i += 16 )
    {
      if ( *(_QWORD *)(i - 12) == -1LL )
      {
        MmNumberOfChannels = 4;
        break;
      }
      if ( *(_WORD *)i < 4u )
        continue;
      v10 = *((unsigned __int16 *)i - 1);
      if ( v10 >= 0x40 )
        continue;
      v11 = 4 * v10;
      v12 = v42 - 1;
      v13 = v11 < v42 ? v11 : 0;
      v14 = ((unsigned __int64)v43 & 4) != 0 ? 0x20 : 0;
      v15 = (char *)v43 + (-(__int64)(((unsigned __int64)v43 & 4) != 0) & 0xFFFFFFFFFFFFFFFCuLL);
      while ( 1 )
      {
        v41 = 0;
        v16 = v14 + v12;
        v17 = v14 + v13;
        if ( v12 - v13 == -1 )
          goto LABEL_27;
        v18 = &v15[8 * ((unsigned __int64)v17 >> 6)];
        for ( j = ~*(_QWORD *)v18 | ((1LL << (v17 & 0x3F)) - 1); j == -1; j = ~*(_QWORD *)v18 )
        {
          v18 += 8;
          if ( v18 > &v15[8 * ((unsigned __int64)v16 >> 6)] )
            goto LABEL_27;
        }
        _BitScanForward64(&v22, ~j);
        v20 = v22 + ((unsigned int)((v18 - v15) >> 3) << 6);
        if ( v20 > v16 )
        {
LABEL_27:
          v20 = -1;
          goto LABEL_28;
        }
        if ( v20 != -1 )
          break;
LABEL_28:
        if ( !v13 )
          goto LABEL_38;
        v21 = v11 + 1;
        if ( v11 + 1 > v42 )
          v21 = v42;
        v12 = v21 - 1;
        v13 = 0;
      }
      v20 -= v14;
LABEL_38:
      if ( v20 < v11 || v20 >= v11 + 4 )
      {
        i[2] = 0;
        *(_WORD *)i = 3;
      }
      else
      {
        *(_WORD *)i = v20 & 3;
      }
    }
  }
  v23 = 0;
  v24 = ((unsigned __int64)v43 & 4) != 0 ? 0x20 : 0;
  v25 = (char *)v43 - (-(__int64)(((unsigned __int64)v43 & 4) != 0) & 4);
  while ( 2 )
  {
    v26 = v23 < v42 ? v23 : 0;
    v27 = v42 - 1;
    while ( 1 )
    {
      v41 = 0;
      v28 = v24 + v27;
      v29 = v24 + v26;
      if ( v27 - v26 == -1 )
        goto LABEL_48;
      v30 = &v25[8 * ((unsigned __int64)v29 >> 6)];
      for ( k = ~*(_QWORD *)v30 | ((1LL << (v29 & 0x3F)) - 1); k == -1; k = ~*(_QWORD *)v30 )
      {
        v30 += 8;
        if ( v30 > &v25[8 * ((unsigned __int64)v28 >> 6)] )
          goto LABEL_48;
      }
      _BitScanForward64(&v34, ~k);
      v32 = v34 + ((unsigned int)((v30 - v25) >> 3) << 6);
      if ( v32 > v28 )
      {
LABEL_48:
        v32 = -1;
        goto LABEL_49;
      }
      if ( v32 != -1 )
        break;
LABEL_49:
      if ( !v26 )
        goto LABEL_59;
      v33 = v23 + 1;
      if ( v23 + 1 > v42 )
        v33 = v42;
      v27 = v33 - 1;
      v26 = 0;
    }
    v32 -= v24;
LABEL_59:
    if ( v32 != -1 && v32 >= v23 )
    {
      v23 = v32 + 1;
      v35 = v32;
      v36 = v32 & 3;
      v37 = v35 >> 2;
      if ( *v39 != -1LL )
      {
        v38 = (unsigned __int16 *)v39 + 6;
        do
        {
          if ( *(v38 - 1) == v37 && *v38 == v36 )
            *((_BYTE *)v38 + 2) = 0;
          v38 += 8;
        }
        while ( *(_QWORD *)(v38 - 6) != -1LL );
      }
      continue;
    }
    break;
  }
  result = (__int64)v39;
  qword_140C65750 = v39;
  return result;
}
