/*
 * XREFs of PspCaptureUserProcessParameters @ 0x14069635C
 * Callers:
 *     PsCaptureUserProcessParameters @ 0x1406217D0 (PsCaptureUserProcessParameters.c)
 *     PspCaptureProcessParameters @ 0x140696C30 (PspCaptureProcessParameters.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140285C94 (PsGetServerSiloGlobals.c)
 *     ExAllocatePoolWithQuotaTag @ 0x14035DD70 (ExAllocatePoolWithQuotaTag.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     PspCopyUnicodeString @ 0x1406969A4 (PspCopyUnicodeString.c)
 *     PspCaptureAndValidateUnicodeString @ 0x140696A18 (PspCaptureAndValidateUnicodeString.c)
 *     PspValidateEnvironmentBlock @ 0x140696A90 (PspValidateEnvironmentBlock.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BFB0 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PspCaptureUserProcessParameters(_QWORD *a1, __int64 a2, __int64 a3, char a4, __int64 a5)
{
  _OWORD *v6; // rsi
  unsigned int v7; // r12d
  char *v8; // r14
  size_t v9; // rax
  __int64 result; // rax
  unsigned __int64 v11; // r13
  SIZE_T v12; // rdx
  signed int v13; // r14d
  _OWORD *PoolWithQuotaTag; // rax
  _DWORD *v15; // rdi
  __int64 v16; // rcx
  const void *v17; // rdx
  char *v18; // rsi
  size_t v19; // r13
  char *ServerSiloGlobals; // rax
  char v21; // r9
  unsigned __int64 v22; // rcx
  void *v23; // [rsp+20h] [rbp-118h] BYREF
  void *v24[2]; // [rsp+28h] [rbp-110h]
  unsigned int v25; // [rsp+38h] [rbp-100h]
  void *v26; // [rsp+40h] [rbp-F8h]
  void *Src; // [rsp+48h] [rbp-F0h]
  size_t Size; // [rsp+50h] [rbp-E8h] BYREF
  unsigned __int64 v29; // [rsp+58h] [rbp-E0h]
  _OWORD *v30; // [rsp+60h] [rbp-D8h]
  __int128 v31; // [rsp+68h] [rbp-D0h] BYREF
  __int128 v32; // [rsp+78h] [rbp-C0h] BYREF
  __int128 v33; // [rsp+88h] [rbp-B0h] BYREF
  __int128 v34; // [rsp+98h] [rbp-A0h] BYREF
  __int128 v35; // [rsp+A8h] [rbp-90h] BYREF
  __int128 v36; // [rsp+B8h] [rbp-80h] BYREF
  __int128 v37; // [rsp+C8h] [rbp-70h] BYREF
  __int128 v38; // [rsp+D8h] [rbp-60h] BYREF
  __int128 v39; // [rsp+E8h] [rbp-50h] BYREF

  v6 = (_OWORD *)a2;
  v35 = 0LL;
  v31 = 0LL;
  v37 = 0LL;
  v33 = 0LL;
  v26 = 0LL;
  v34 = 0LL;
  v32 = 0LL;
  *(_OWORD *)v24 = 0LL;
  v38 = 0LL;
  v36 = 0LL;
  if ( (a2 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v7 = *(_DWORD *)(a2 + 8) & 0xFFFFBFFF;
  v25 = v7;
  if ( ((v7 ^ 1) & 0xF7010E11) != 0 )
    return 3221225485LL;
  if ( ((unsigned __int8)v7 & (unsigned __int8)((v7 & 0xE0) - 1) & 0x60) != 0 )
    return 3221225485LL;
  v8 = *(char **)(a2 + 128);
  Src = v8;
  v26 = v8;
  v9 = *(_QWORD *)(a2 + 1008);
  Size = v9;
  if ( !v9 || (v9 & 1) != 0 )
    return 3221225485LL;
  if ( (unsigned __int64)&v8[v9] > 0x7FFFFFFF0000LL || &v8[v9] < v8 )
    MEMORY[0x7FFFFFFF0000] = 0;
  if ( (a4 & 1) != 0 )
  {
    ServerSiloGlobals = (char *)PsGetServerSiloGlobals(a5);
    v31 = *(_OWORD *)(ServerSiloGlobals + 1000);
    *(_OWORD *)v24 = PspProtectedRuntimeData;
    if ( (v21 & 2) == 0 )
    {
      Src = (void *)*((_QWORD *)ServerSiloGlobals + 128);
      v26 = Src;
      Size = *((unsigned __int16 *)ServerSiloGlobals + 509);
    }
  }
  else
  {
    result = PspCaptureAndValidateUnicodeString(a2 + 56, &v31);
    if ( (int)result < 0 )
      return result;
    if ( (unsigned __int16)v31 >= 0x208u )
      return 3221225485LL;
    WORD1(v31) = 520;
    *(_OWORD *)v24 = v6[14];
    if ( v24[1] )
    {
      WORD1(v24[0]) = v24[0];
      if ( LOWORD(v24[0])
        && ((char *)v24[1] + LOWORD(v24[0]) > (void *)0x7FFFFFFF0000LL || (char *)v24[1] + LOWORD(v24[0]) < v24[1]) )
      {
        MEMORY[0x7FFFFFFF0000] = 0;
      }
    }
    else
    {
      if ( LOWORD(v24[0]) )
        return 3221225485LL;
      LODWORD(v24[0]) = 0;
    }
  }
  result = PspCaptureAndValidateUnicodeString(v6 + 5, &v33);
  if ( (int)result < 0 )
    return result;
  result = PspCaptureAndValidateUnicodeString(v6 + 6, &v34);
  if ( (int)result < 0 )
    return result;
  result = PspCaptureAndValidateUnicodeString(v6 + 7, &v35);
  if ( (int)result < 0 )
    return result;
  result = PspCaptureAndValidateUnicodeString(v6 + 11, &v36);
  if ( (int)result < 0 )
    return result;
  result = PspCaptureAndValidateUnicodeString(v6 + 12, &v37);
  if ( (int)result < 0 )
    return result;
  result = PspCaptureAndValidateUnicodeString(v6 + 13, &v38);
  if ( (int)result < 0 )
    return result;
  if ( a3 && (*(_DWORD *)(a3 + 4) & 2) != 0 )
  {
    v32 = *(_OWORD *)(a3 + 8);
  }
  else
  {
    result = PspCaptureAndValidateUnicodeString(v6 + 65, &v32);
    if ( (int)result < 0 )
      return result;
  }
  if ( a3 && (*(_DWORD *)(a3 + 4) & 4) != 0 )
    v39 = *(_OWORD *)(a3 + 24);
  else
    v39 = 0LL;
  v11 = (WORD1(v24[0])
       + WORD1(v33)
       + WORD1(v34)
       + WORD1(v35)
       + WORD1(v36)
       + WORD1(v37)
       + WORD1(v38)
       + WORD1(v32)
       + (unsigned __int64)WORD1(v39)
       + WORD1(v31)
       + 1089LL) & 0xFFFFFFFFFFFFFFFEuLL;
  v29 = v11;
  if ( a3 && (*(_DWORD *)(a3 + 4) & 1) != 0 )
  {
    v22 = (v11 + 3) & 0xFFFFFFFFFFFFFFFCuLL;
    v11 = v22 + 8LL * *(unsigned int *)(a3 + 48);
    if ( v11 >= v22 )
    {
      v29 = v22 + 8LL * *(unsigned int *)(a3 + 48);
      goto LABEL_31;
    }
    return 3221225485LL;
  }
LABEL_31:
  v12 = -1LL;
  if ( v11 + Size >= v11 )
    v12 = v11 + Size;
  v13 = v11 + Size < v11 ? 0xC0000095 : 0;
  if ( v11 + Size < v11 )
    return 3221225485LL;
  PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, v12, 0x62507350u);
  v15 = PoolWithQuotaTag;
  v30 = PoolWithQuotaTag;
  if ( !PoolWithQuotaTag )
    return 3221225626LL;
  v16 = 8LL;
  do
  {
    *PoolWithQuotaTag = *v6;
    PoolWithQuotaTag[1] = v6[1];
    PoolWithQuotaTag[2] = v6[2];
    PoolWithQuotaTag[3] = v6[3];
    PoolWithQuotaTag[4] = v6[4];
    PoolWithQuotaTag[5] = v6[5];
    PoolWithQuotaTag[6] = v6[6];
    PoolWithQuotaTag += 8;
    *(PoolWithQuotaTag - 1) = v6[7];
    v6 += 8;
    --v16;
  }
  while ( v16 );
  *PoolWithQuotaTag = *v6;
  PoolWithQuotaTag[1] = v6[1];
  PoolWithQuotaTag[2] = v6[2];
  PoolWithQuotaTag[3] = v6[3];
  if ( v13 < 0 )
    goto LABEL_84;
  v15[2] = v7;
  v15[1] = v11;
  *v15 = v11;
  v23 = v15 + 272;
  if ( a3 && (*(_DWORD *)(a3 + 4) & 8) != 0 )
    v15[271] = *(_DWORD *)(a3 + 52);
  v13 = PspCopyUnicodeString(&v31, v15 + 14, &v23);
  if ( v13 < 0 )
    goto LABEL_84;
  v13 = PspCopyUnicodeString(&v33, v15 + 20, &v23);
  if ( v13 < 0 )
    goto LABEL_84;
  v13 = PspCopyUnicodeString(&v34, v15 + 24, &v23);
  if ( v13 < 0 )
    goto LABEL_84;
  v13 = PspCopyUnicodeString(&v35, v15 + 28, &v23);
  if ( v13 < 0 )
    goto LABEL_84;
  v13 = PspCopyUnicodeString(&v36, v15 + 44, &v23);
  if ( v13 < 0 )
    goto LABEL_84;
  v13 = PspCopyUnicodeString(&v37, v15 + 48, &v23);
  if ( v13 < 0 )
    goto LABEL_84;
  v13 = PspCopyUnicodeString(&v38, v15 + 52, &v23);
  if ( v13 < 0 )
    goto LABEL_84;
  PspCopyUnicodeString(&v32, v15 + 260, &v23);
  if ( a3 && (*(_DWORD *)(a3 + 4) & 4) != 0 )
    PspCopyUnicodeString(&v39, v15 + 264, &v23);
  else
    *((_OWORD *)v15 + 66) = 0LL;
  *((_OWORD *)v15 + 14) = *(_OWORD *)v24;
  v17 = v24[1];
  v18 = (char *)v23;
  if ( v24[1] )
  {
    *((_QWORD *)v15 + 29) = v23;
    memmove(v18, v17, LOWORD(v24[0]));
    if ( v18 )
    {
      v18 += LOWORD(v24[0]);
      v23 = v18;
    }
  }
  *((_QWORD *)v15 + 134) = 0LL;
  v15[270] = 0;
  if ( a3 )
  {
    if ( (*(_DWORD *)(a3 + 4) & 1) != 0 )
    {
      v18 = (char *)((unsigned __int64)(v18 + 3) & 0xFFFFFFFFFFFFFFFCuLL);
      v23 = v18;
      *((_QWORD *)v15 + 134) = v18;
      v15[270] = *(_DWORD *)(a3 + 48);
      memmove(v18, *(const void **)(a3 + 40), 8LL * *(unsigned int *)(a3 + 48));
      if ( v18 )
      {
        v18 += 8 * *(unsigned int *)(a3 + 48);
        v23 = v18;
      }
    }
  }
  v19 = (char *)v15 - v18 + v11;
  if ( v19 )
  {
    memset(v18, 0, v19);
    if ( v18 )
    {
      v18 += v19;
      v23 = v18;
    }
  }
  memmove(v18, Src, Size);
  if ( (a4 & 3) == 1 || (v13 = PspValidateEnvironmentBlock(v18, &Size), v13 >= 0) )
  {
    if ( (a4 & 1) != 0 )
    {
      *((_QWORD *)v15 + 2) = 0LL;
      *((_QWORD *)v15 + 4) = 0LL;
      *((_QWORD *)v15 + 5) = 0LL;
      *((_QWORD *)v15 + 6) = 0LL;
    }
    *((_QWORD *)v15 + 16) = v18;
    *((_QWORD *)v15 + 126) = Size;
    *((_QWORD *)v15 + 127) = 0LL;
    *a1 = v15;
    return 0LL;
  }
  else
  {
LABEL_84:
    ExFreePoolWithTag(v15, 0);
    return (unsigned int)v13;
  }
}
