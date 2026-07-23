/*
 * XREFs of LdrResGetRCConfig @ 0x14078BB7C
 * Callers:
 *     LdrpResSearchResourceMappedFile @ 0x140300848 (LdrpResSearchResourceMappedFile.c)
 *     LdrpVerifyAlternateResourceModuleEx @ 0x14038149C (LdrpVerifyAlternateResourceModuleEx.c)
 * Callees:
 *     LdrpResSearchResourceMappedFile @ 0x140300848 (LdrpResSearchResourceMappedFile.c)
 *     LdrpGetFromMUIMemCache @ 0x140302064 (LdrpGetFromMUIMemCache.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x14037EC0C (LdrpSetAlternateResourceModuleHandle.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     CheckOneBitValidFlag @ 0x140586514 (CheckOneBitValidFlag.c)
 *     LdrpResGetMappingSize @ 0x1406710B0 (LdrpResGetMappingSize.c)
 */

NTSTATUS __fastcall LdrResGetRCConfig(void *a1, ULONG64 a2, _QWORD *a3, int a4, char a5)
{
  int v8; // edi
  _DWORD *v9; // rax
  __int64 v10; // r13
  int v11; // edi
  NTSTATUS result; // eax
  __int64 v13; // rsi
  int v14; // ecx
  _DWORD *v15; // r8
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
  _DWORD *v37; // [rsp+58h] [rbp-80h] BYREF
  ULONG64 v38; // [rsp+60h] [rbp-78h] BYREF
  void *v39; // [rsp+68h] [rbp-70h]
  __int64 v40[2]; // [rsp+70h] [rbp-68h] BYREF
  _QWORD v41[3]; // [rsp+80h] [rbp-58h] BYREF

  v39 = a1;
  v40[1] = (__int64)a1;
  v41[0] = L"MUI";
  v41[1] = 1LL;
  v41[2] = 0LL;
  v40[0] = 0LL;
  v38 = a2;
  v37 = 0LL;
  v8 = a4 & 0x2000;
  if ( !a1 )
    return -1073741811;
  if ( !a5 )
  {
    v10 = -1LL;
    goto LABEL_10;
  }
  v9 = LdrpGetFromMUIMemCache((unsigned __int64)a1, 0, 0LL, 8);
  v37 = v9;
  v10 = -1LL;
  if ( v9 == (_DWORD *)-1LL )
    return -1073741686;
  if ( v9 )
  {
    v11 = 0;
    if ( a3 )
      *a3 = v9;
    return v11;
  }
  a1 = v39;
LABEL_10:
  if ( a2 || v8 || (result = LdrpResGetMappingSize((unsigned __int64)a1, &v38, a4), result >= 0) )
  {
    v13 = (__int64)v39;
    v14 = LdrpResSearchResourceMappedFile(
            v39,
            v38,
            (v8 != 0 ? 0x2000 : 4096) | 0x200030u,
            (__int64)v41,
            3,
            &v37,
            v40,
            0LL,
            0LL);
    if ( v14 < 0 )
    {
      if ( v14 != -1073741701 )
        v14 = -1073741686;
      v11 = v14;
      goto LABEL_15;
    }
    v15 = v37;
    if ( !v8 )
    {
      v16 = (unsigned int)v37[1];
      if ( (unsigned __int64)v37 + v16 > v38 + (v13 & 0xFFFFFFFFFFFFFFFCuLL) )
      {
        v11 = -1073741701;
LABEL_15:
        v15 = 0LL;
        v37 = 0LL;
LABEL_16:
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
        goto LABEL_15;
      if ( v18 < v17 )
        goto LABEL_15;
      v19 = v37[19];
      v20 = v19 + v37[20];
      if ( v20 > (unsigned int)v16 )
        goto LABEL_15;
      if ( v20 < v19 )
        goto LABEL_15;
      v21 = v37[21];
      v22 = v21 + v37[22];
      if ( v22 > (unsigned int)v16 )
        goto LABEL_15;
      if ( v22 < v21 )
        goto LABEL_15;
      v23 = v37[23];
      v24 = v23 + v37[24];
      if ( v24 > (unsigned int)v16 )
        goto LABEL_15;
      if ( v24 < v23 )
        goto LABEL_15;
      v25 = v37[25];
      v26 = v25 + v37[26];
      if ( v26 > (unsigned int)v16 )
        goto LABEL_15;
      if ( v26 < v25 )
        goto LABEL_15;
      v27 = v37[27];
      v28 = v27 + v37[28];
      if ( v28 > (unsigned int)v16 )
        goto LABEL_15;
      if ( v28 < v27 )
        goto LABEL_15;
      v29 = v37[29];
      v30 = v29 + v37[30];
      if ( v30 > (unsigned int)v16 )
        goto LABEL_15;
      if ( v30 < v29 )
        goto LABEL_15;
      v31 = v37[31];
      v32 = v31 + v37[32];
      if ( v32 > (unsigned int)v16 )
        goto LABEL_15;
      if ( v32 < v31 )
        goto LABEL_15;
      if ( *v37 != -20054323 )
        goto LABEL_15;
      if ( v16 != v40[0] )
        goto LABEL_15;
      if ( v37[2] != 0x10000 )
        goto LABEL_15;
      v33 = v37[3];
      if ( v33 )
      {
        if ( !CheckOneBitValidFlag(v33, 7) )
          goto LABEL_15;
      }
      if ( !CheckOneBitValidFlag(v15[4] & 0xFFFFFFCF, 3) )
        goto LABEL_15;
      if ( !CheckOneBitValidFlag(v34 & 0xFFFFFFFC, 48) )
        goto LABEL_15;
      if ( (v35 & 1) != 0 )
      {
        if ( !CheckOneBitValidFlag(v15[6], 3) )
          goto LABEL_15;
        v36 = v15[5];
        if ( v36 )
        {
          if ( !CheckOneBitValidFlag(v36, 256) )
            goto LABEL_15;
        }
      }
    }
    if ( a3 )
      *a3 = v15;
    v11 = 0;
    goto LABEL_16;
  }
  return result;
}
