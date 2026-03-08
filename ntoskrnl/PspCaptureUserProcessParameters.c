/*
 * XREFs of PspCaptureUserProcessParameters @ 0x140759A00
 * Callers:
 *     PspCaptureProcessParameters @ 0x14070D704 (PspCaptureProcessParameters.c)
 *     PsCaptureUserProcessParameters @ 0x1407599C0 (PsCaptureUserProcessParameters.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x1402992FC (PsGetServerSiloGlobals.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     PspCopyUnicodeString @ 0x14075A07C (PspCopyUnicodeString.c)
 *     PspCaptureAndValidateUnicodeString @ 0x14075A0F0 (PspCaptureAndValidateUnicodeString.c)
 *     PspValidateEnvironmentBlock @ 0x14075A170 (PspValidateEnvironmentBlock.c)
 *     ExRaiseDatatypeMisalignment @ 0x1409FDD10 (ExRaiseDatatypeMisalignment.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PspCaptureUserProcessParameters(_QWORD *a1, __int64 a2, __int64 a3, char a4, __int64 a5)
{
  _OWORD *v6; // rsi
  unsigned int v8; // edi
  char *v9; // rdi
  size_t v10; // rax
  __int64 result; // rax
  _DWORD *v12; // r12
  unsigned __int64 v13; // r13
  __int64 v14; // rdx
  signed int v15; // r14d
  __int64 Pool2; // rax
  _DWORD *v17; // rdi
  _OWORD *v18; // rcx
  __int64 v19; // rax
  const void *v20; // rdx
  char *v21; // rsi
  size_t v22; // r13
  char *ServerSiloGlobals; // rax
  __int64 v24; // rcx
  unsigned __int64 v25; // rax
  void *v26; // [rsp+20h] [rbp-128h] BYREF
  void *v27[2]; // [rsp+28h] [rbp-120h]
  unsigned int v28; // [rsp+38h] [rbp-110h]
  unsigned int v29; // [rsp+3Ch] [rbp-10Ch]
  void *v30; // [rsp+40h] [rbp-108h]
  void *Src; // [rsp+48h] [rbp-100h]
  size_t Size; // [rsp+50h] [rbp-F8h] BYREF
  _DWORD *v33; // [rsp+58h] [rbp-F0h]
  int v34; // [rsp+60h] [rbp-E8h]
  unsigned __int64 v35; // [rsp+68h] [rbp-E0h]
  __int64 v36; // [rsp+70h] [rbp-D8h]
  __int128 v37; // [rsp+78h] [rbp-D0h] BYREF
  __int128 v38; // [rsp+88h] [rbp-C0h] BYREF
  __int128 v39; // [rsp+98h] [rbp-B0h] BYREF
  __int128 v40; // [rsp+A8h] [rbp-A0h] BYREF
  __int128 v41; // [rsp+B8h] [rbp-90h] BYREF
  __int128 v42; // [rsp+C8h] [rbp-80h] BYREF
  __int128 v43; // [rsp+D8h] [rbp-70h] BYREF
  __int128 v44; // [rsp+E8h] [rbp-60h] BYREF
  __int128 v45; // [rsp+F8h] [rbp-50h] BYREF

  v6 = (_OWORD *)a2;
  v33 = (_DWORD *)a3;
  v41 = 0LL;
  v37 = 0LL;
  v43 = 0LL;
  v39 = 0LL;
  v30 = 0LL;
  v45 = 0LL;
  v40 = 0LL;
  v38 = 0LL;
  *(_OWORD *)v27 = 0LL;
  v44 = 0LL;
  v42 = 0LL;
  if ( (a2 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v8 = *(_DWORD *)(a2 + 8) & 0xFFFFBFFF;
  v28 = v8;
  v29 = v8;
  if ( ((v8 ^ 1) & 0xF6010E11) != 0 )
    return 3221225485LL;
  if ( (v8 & ((v8 & 0xFF000060) - 1) & 0x1000060) != 0 )
    return 3221225485LL;
  v9 = *(char **)(a2 + 128);
  Src = v9;
  v30 = v9;
  v10 = *(_QWORD *)(a2 + 1008);
  Size = v10;
  if ( !v10 || (v10 & 1) != 0 )
    return 3221225485LL;
  if ( (unsigned __int64)&v9[v10] > 0x7FFFFFFF0000LL || &v9[v10] < v9 )
    MEMORY[0x7FFFFFFF0000] = 0;
  v34 = a4 & 1;
  if ( (a4 & 1) != 0 )
  {
    ServerSiloGlobals = (char *)PsGetServerSiloGlobals(a5);
    v37 = *(_OWORD *)(ServerSiloGlobals + 1000);
    *(_OWORD *)v27 = PspProtectedRuntimeData;
    if ( (a4 & 2) == 0 )
    {
      Src = (void *)*((_QWORD *)ServerSiloGlobals + 128);
      v30 = Src;
      Size = *((unsigned __int16 *)ServerSiloGlobals + 509);
    }
  }
  else
  {
    result = PspCaptureAndValidateUnicodeString(a2 + 56, &v37);
    if ( (int)result < 0 )
      return result;
    if ( (unsigned __int16)v37 >= 0x208u )
      return 3221225485LL;
    WORD1(v37) = 520;
    *(_OWORD *)v27 = v6[14];
    if ( v27[1] )
    {
      WORD1(v27[0]) = v27[0];
      if ( LOWORD(v27[0])
        && ((char *)v27[1] + LOWORD(v27[0]) > (void *)0x7FFFFFFF0000LL || (char *)v27[1] + LOWORD(v27[0]) < v27[1]) )
      {
        MEMORY[0x7FFFFFFF0000] = 0;
      }
    }
    else
    {
      if ( LOWORD(v27[0]) )
        return 3221225485LL;
      LODWORD(v27[0]) = 0;
    }
  }
  result = PspCaptureAndValidateUnicodeString(v6 + 5, &v39);
  if ( (int)result < 0 )
    return result;
  result = PspCaptureAndValidateUnicodeString(v6 + 6, &v40);
  if ( (int)result < 0 )
    return result;
  result = PspCaptureAndValidateUnicodeString(v6 + 7, &v41);
  if ( (int)result < 0 )
    return result;
  result = PspCaptureAndValidateUnicodeString(v6 + 11, &v42);
  if ( (int)result < 0 )
    return result;
  result = PspCaptureAndValidateUnicodeString(v6 + 12, &v43);
  if ( (int)result < 0 )
    return result;
  result = PspCaptureAndValidateUnicodeString(v6 + 13, &v44);
  if ( (int)result < 0 )
    return result;
  if ( a3 )
  {
    v12 = (_DWORD *)(a3 + 4);
    if ( (*(_DWORD *)(a3 + 4) & 2) != 0 )
    {
      v38 = *(_OWORD *)(a3 + 8);
      goto LABEL_29;
    }
  }
  else
  {
    v12 = (_DWORD *)(a3 + 4);
  }
  result = PspCaptureAndValidateUnicodeString(v6 + 65, &v38);
  if ( (int)result < 0 )
    return result;
LABEL_29:
  v33 = v12;
  if ( a3 && (*v12 & 4) != 0 )
    v45 = *(_OWORD *)(a3 + 24);
  v13 = (WORD1(v27[0])
       + WORD1(v39)
       + WORD1(v40)
       + WORD1(v41)
       + WORD1(v42)
       + WORD1(v43)
       + WORD1(v44)
       + WORD1(v38)
       + (unsigned __int64)WORD1(v45)
       + WORD1(v37)
       + 1097LL) & 0xFFFFFFFFFFFFFFFEuLL;
  v35 = v13;
  if ( a3 && (*v12 & 1) != 0 )
  {
    v24 = *(unsigned int *)(a3 + 48);
    v25 = (v13 + 3) & 0xFFFFFFFFFFFFFFFCuLL;
    v13 = v25 + 8 * v24;
    if ( v13 >= v25 )
    {
      v35 = v25 + 8 * v24;
      goto LABEL_31;
    }
    return 3221225485LL;
  }
LABEL_31:
  v14 = -1LL;
  if ( v13 + Size >= v13 )
    v14 = v13 + Size;
  v15 = v13 + Size < v13 ? 0xC0000095 : 0;
  if ( v13 + Size < v13 )
    return 3221225485LL;
  Pool2 = ExAllocatePool2(65LL, v14, 1649439568LL);
  v17 = (_DWORD *)Pool2;
  v36 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  v18 = (_OWORD *)Pool2;
  v19 = 8LL;
  do
  {
    *v18 = *v6;
    v18[1] = v6[1];
    v18[2] = v6[2];
    v18[3] = v6[3];
    v18[4] = v6[4];
    v18[5] = v6[5];
    v18[6] = v6[6];
    v18 += 8;
    *(v18 - 1) = v6[7];
    v6 += 8;
    --v19;
  }
  while ( v19 );
  *v18 = *v6;
  v18[1] = v6[1];
  v18[2] = v6[2];
  v18[3] = v6[3];
  *((_QWORD *)v18 + 8) = *((_QWORD *)v6 + 8);
  if ( v15 < 0 )
    goto LABEL_84;
  v17[2] = v28;
  v17[1] = v13;
  *v17 = v13;
  v26 = v17 + 274;
  if ( a3 && (*v12 & 8) != 0 )
    v17[271] = *(_DWORD *)(a3 + 52);
  v15 = PspCopyUnicodeString(&v37, v17 + 14, &v26);
  if ( v15 < 0 )
    goto LABEL_84;
  v15 = PspCopyUnicodeString(&v39, v17 + 20, &v26);
  if ( v15 < 0 )
    goto LABEL_84;
  v15 = PspCopyUnicodeString(&v40, v17 + 24, &v26);
  if ( v15 < 0 )
    goto LABEL_84;
  v15 = PspCopyUnicodeString(&v41, v17 + 28, &v26);
  if ( v15 < 0 )
    goto LABEL_84;
  v15 = PspCopyUnicodeString(&v42, v17 + 44, &v26);
  if ( v15 < 0 )
    goto LABEL_84;
  v15 = PspCopyUnicodeString(&v43, v17 + 48, &v26);
  if ( v15 < 0 )
    goto LABEL_84;
  v15 = PspCopyUnicodeString(&v44, v17 + 52, &v26);
  if ( v15 < 0 )
    goto LABEL_84;
  PspCopyUnicodeString(&v38, v17 + 260, &v26);
  if ( a3 && (*v12 & 4) != 0 )
  {
    PspCopyUnicodeString(&v45, v17 + 264, &v26);
    v17[272] = *(_DWORD *)(a3 + 56);
  }
  else
  {
    *((_OWORD *)v17 + 66) = 0LL;
  }
  *((_OWORD *)v17 + 14) = *(_OWORD *)v27;
  v20 = v27[1];
  v21 = (char *)v26;
  if ( v27[1] )
  {
    *((_QWORD *)v17 + 29) = v26;
    memmove(v21, v20, LOWORD(v27[0]));
    if ( v21 )
    {
      v21 += LOWORD(v27[0]);
      v26 = v21;
    }
  }
  *((_QWORD *)v17 + 134) = 0LL;
  v17[270] = 0;
  if ( a3 )
  {
    if ( (*v12 & 1) != 0 )
    {
      v21 = (char *)((unsigned __int64)(v21 + 3) & 0xFFFFFFFFFFFFFFFCuLL);
      v26 = v21;
      *((_QWORD *)v17 + 134) = v21;
      v17[270] = *(_DWORD *)(a3 + 48);
      memmove(v21, *(const void **)(a3 + 40), 8LL * *(unsigned int *)(a3 + 48));
      if ( v21 )
      {
        v21 += 8 * *(unsigned int *)(a3 + 48);
        v26 = v21;
      }
    }
  }
  v22 = (char *)v17 - v21 + v13;
  if ( v22 )
  {
    memset(v21, 0, v22);
    if ( v21 )
    {
      v21 += v22;
      v26 = v21;
    }
  }
  memmove(v21, Src, Size);
  if ( (a4 & 3) == 1 || (v15 = PspValidateEnvironmentBlock(v21, &Size), v15 >= 0) )
  {
    if ( v34 )
    {
      *((_QWORD *)v17 + 2) = 0LL;
      *((_QWORD *)v17 + 4) = 0LL;
      *((_QWORD *)v17 + 5) = 0LL;
      *((_QWORD *)v17 + 6) = 0LL;
    }
    *((_QWORD *)v17 + 16) = v21;
    *((_QWORD *)v17 + 126) = Size;
    *((_QWORD *)v17 + 127) = 0LL;
    *a1 = v17;
    return 0LL;
  }
  else
  {
LABEL_84:
    ExFreePoolWithTag(v17, 0);
    return (unsigned int)v15;
  }
}
