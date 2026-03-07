__int64 __fastcall LdrResGetRCConfig(__int64 a1, __int64 a2, unsigned int **a3, unsigned int a4, char a5)
{
  int v8; // edi
  unsigned int *v9; // rax
  __int64 v10; // r13
  unsigned int v11; // edi
  __int64 result; // rax
  __int64 v13; // rsi
  int v14; // ecx
  unsigned int *v15; // r8
  __int64 v16; // rdx
  unsigned int v17; // ecx
  unsigned int v18; // r9d
  unsigned int v19; // ecx
  unsigned int v20; // r9d
  unsigned int v21; // ecx
  unsigned int v22; // r9d
  unsigned int v23; // ecx
  unsigned int v24; // r9d
  unsigned int v25; // ecx
  unsigned int v26; // r9d
  unsigned int v27; // ecx
  unsigned int v28; // r9d
  unsigned int v29; // ecx
  unsigned int v30; // r9d
  unsigned int v31; // ecx
  unsigned int v32; // r9d
  int v33; // ecx
  int v34; // r9d
  char v35; // r9
  int v36; // ecx
  unsigned int *v37; // [rsp+58h] [rbp-80h] BYREF
  __int64 v38; // [rsp+60h] [rbp-78h] BYREF
  __int64 v39; // [rsp+68h] [rbp-70h]
  __int64 v40[2]; // [rsp+70h] [rbp-68h] BYREF
  unsigned __int64 v41[3]; // [rsp+80h] [rbp-58h] BYREF

  v39 = a1;
  v40[1] = a1;
  v41[0] = (unsigned __int64)L"MUI";
  v41[1] = 1LL;
  v41[2] = 0LL;
  v40[0] = 0LL;
  v38 = a2;
  v37 = 0LL;
  v8 = a4 & 0x2000;
  if ( !a1 )
    return (unsigned int)-1073741811;
  if ( !a5 )
  {
    v10 = -1LL;
    goto LABEL_13;
  }
  v9 = LdrpGetFromMUIMemCache(a1, 0, 0LL, 8);
  v37 = v9;
  v10 = -1LL;
  if ( v9 == (unsigned int *)-1LL )
    return (unsigned int)-1073741686;
  if ( v9 )
  {
    v11 = 0;
    if ( a3 )
      *a3 = v9;
    return v11;
  }
  a1 = v39;
LABEL_13:
  if ( a2 || v8 || (result = LdrpResGetMappingSize(a1, &v38, a4), (int)result >= 0) )
  {
    v13 = v39;
    v14 = LdrpResSearchResourceMappedFile(v39, v38, v8 != 0 ? 8240 : 4144, v41, 3, &v37, v40, 0LL, 0LL);
    if ( v14 < 0 )
    {
      if ( v14 != -1073741701 )
        v14 = -1073741686;
      v11 = v14;
      goto LABEL_57;
    }
    v15 = v37;
    if ( !v8 )
    {
      v16 = v37[1];
      if ( (unsigned __int64)v37 + v16 > v38 + (v13 & 0xFFFFFFFFFFFFFFFCuLL) )
      {
        v11 = -1073741701;
LABEL_57:
        v15 = 0LL;
        v37 = 0LL;
LABEL_58:
        if ( a5 )
        {
          if ( v15 )
            v10 = (__int64)v15;
          LdrpSetAlternateResourceModuleHandle(v13, 0LL, 0LL, v10, 0, 2, v11, 0LL);
        }
        return v11;
      }
      v11 = -1073020925;
      v17 = v37[17];
      v18 = v17 + v37[18];
      if ( v18 > (unsigned int)v16 )
        goto LABEL_57;
      if ( v18 < v17 )
        goto LABEL_57;
      v19 = v37[19];
      v20 = v19 + v37[20];
      if ( v20 > (unsigned int)v16 )
        goto LABEL_57;
      if ( v20 < v19 )
        goto LABEL_57;
      v21 = v37[21];
      v22 = v21 + v37[22];
      if ( v22 > (unsigned int)v16 )
        goto LABEL_57;
      if ( v22 < v21 )
        goto LABEL_57;
      v23 = v37[23];
      v24 = v23 + v37[24];
      if ( v24 > (unsigned int)v16 )
        goto LABEL_57;
      if ( v24 < v23 )
        goto LABEL_57;
      v25 = v37[25];
      v26 = v25 + v37[26];
      if ( v26 > (unsigned int)v16 )
        goto LABEL_57;
      if ( v26 < v25 )
        goto LABEL_57;
      v27 = v37[27];
      v28 = v27 + v37[28];
      if ( v28 > (unsigned int)v16 )
        goto LABEL_57;
      if ( v28 < v27 )
        goto LABEL_57;
      v29 = v37[29];
      v30 = v29 + v37[30];
      if ( v30 > (unsigned int)v16 )
        goto LABEL_57;
      if ( v30 < v29 )
        goto LABEL_57;
      v31 = v37[31];
      v32 = v31 + v37[32];
      if ( v32 > (unsigned int)v16 )
        goto LABEL_57;
      if ( v32 < v31 )
        goto LABEL_57;
      if ( *v37 != -20054323 )
        goto LABEL_57;
      if ( v16 != v40[0] )
        goto LABEL_57;
      if ( v37[2] != 0x10000 )
        goto LABEL_57;
      v33 = v37[3];
      if ( v33 )
      {
        if ( !CheckOneBitValidFlag(v33, 7) )
          goto LABEL_57;
      }
      if ( !CheckOneBitValidFlag(v15[4] & 0xFFFFFFCF, 3) )
        goto LABEL_57;
      if ( !CheckOneBitValidFlag(v34 & 0xFFFFFFFC, 48) )
        goto LABEL_57;
      if ( (v35 & 1) != 0 )
      {
        if ( !CheckOneBitValidFlag(v15[6], 3) )
          goto LABEL_57;
        v36 = v15[5];
        if ( v36 )
        {
          if ( !CheckOneBitValidFlag(v36, 256) )
            goto LABEL_57;
        }
      }
    }
    if ( a3 )
      *a3 = v15;
    v11 = 0;
    goto LABEL_58;
  }
  return result;
}
