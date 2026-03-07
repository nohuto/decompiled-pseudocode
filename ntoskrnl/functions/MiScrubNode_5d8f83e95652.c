__int64 __fastcall MiScrubNode(__int64 a1)
{
  unsigned int v1; // r8d
  __int64 v2; // rdi
  unsigned int *v4; // rdx
  __int64 result; // rax
  __int64 v6; // rbx
  __int64 v7; // rbp
  unsigned int *v8; // r9
  int v9; // r11d
  unsigned __int64 v10; // r13
  unsigned __int64 v11; // rcx
  int v12; // edx
  __int64 v13; // r15
  __int64 v14; // rax
  unsigned __int64 v15; // r12
  unsigned __int64 v16; // rdi
  __int64 v17; // rsi
  unsigned __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // r8
  char v21; // bl
  unsigned int *v22; // [rsp+60h] [rbp-58h]
  union _SLIST_HEADER *v23; // [rsp+68h] [rbp-50h]
  int v24; // [rsp+C0h] [rbp+8h] BYREF
  int v25; // [rsp+C8h] [rbp+10h]
  __int64 v26; // [rsp+D0h] [rbp+18h]
  __int64 v27; // [rsp+D8h] [rbp+20h]

  v24 = 0;
  v1 = -1;
  v2 = *(_QWORD *)a1;
  v26 = v2;
  v4 = *(unsigned int **)(v2 + 80);
  result = *(_QWORD *)(v2 + 48);
  v23 = (union _SLIST_HEADER *)result;
  v6 = *v4;
  v27 = v6;
  LODWORD(v7) = v6;
  v8 = &v4[4 * v6 + 4];
  v22 = v8;
  if ( !(_DWORD)v6 )
    return result;
  v9 = *(_DWORD *)(a1 + 8);
  while ( 1 )
  {
    v7 = (unsigned int)(v7 - 1);
    result = (unsigned int)v7;
    if ( v8[2 * v7] == v9 )
    {
      v10 = *(_QWORD *)(a1 + 192);
      result = 2LL * (unsigned int)v7;
      v1 = v7;
      v11 = *(_QWORD *)&v4[4 * (unsigned int)v7 + 4];
      if ( v10 >= v11 || v10 == -1LL )
        break;
    }
    if ( !(_DWORD)v7 )
      goto LABEL_11;
  }
  result = (unsigned int)(v6 + 1);
  if ( v10 >= *(_QWORD *)&v4[4 * (unsigned int)v7 + 6] + v11 - 1 )
  {
    result = (unsigned int)v6;
    v10 = *(_QWORD *)&v4[4 * (unsigned int)v7 + 6] + v11 - 1;
  }
  LODWORD(v6) = result;
  v27 = (unsigned int)result;
  if ( v10 != -1LL )
    goto LABEL_13;
LABEL_11:
  if ( v1 == -1 )
    return result;
  LODWORD(v7) = v1;
  result = 2LL * v1;
  v10 = *(_QWORD *)&v4[4 * v1 + 6] + *(_QWORD *)&v4[4 * v1 + 4] - 1LL;
LABEL_13:
  v12 = 0;
  LODWORD(v13) = v7 + 1;
  v25 = 0;
  if ( !(_DWORD)v6 )
    return result;
  while ( 1 )
  {
    if ( !(_DWORD)v13 )
      LODWORD(v13) = **(_DWORD **)(v2 + 80);
    v13 = (unsigned int)(v13 - 1);
    if ( v8[2 * v13] == *(_DWORD *)(a1 + 8) )
      break;
LABEL_38:
    result = (unsigned int)(v25 + 1);
    v25 = result;
    if ( (unsigned int)result >= (unsigned int)v6 )
      return result;
    v12 = result;
  }
  v14 = *(_QWORD *)(v2 + 80);
  v15 = *(_QWORD *)(v14 + 16LL * (unsigned int)v13 + 16);
  v16 = *(_QWORD *)(v14 + 16LL * (unsigned int)v13 + 24) + v15 - 1;
  if ( (_DWORD)v13 == (_DWORD)v7 )
  {
    if ( v12 )
      v15 = v10 + 1;
    else
      v16 = v10;
  }
  v17 = 48 * v16 - 0x220000000000LL;
  if ( v16 < v15 || !v15 )
  {
LABEL_37:
    v2 = v26;
    goto LABEL_38;
  }
  while ( !MiScrubInterrupted(a1) )
  {
    v18 = MiPfnsWorthTrying((__int64)v23, v17, 1LL, 117440512, &v24);
    if ( v18 )
    {
      if ( v18 >= v16 - v15 + 1 )
        goto LABEL_36;
      v17 += 48 - 48 * v18;
      v16 += 1 - v18;
      v19 = MiScrubLargePageRegions((__int64 *)a1, v17, v18);
      if ( v19 )
      {
        v16 += v19;
        if ( MiScrubInterrupted(a1) )
        {
          result = v23[1].Alignment;
          *(_QWORD *)(25408LL * *(unsigned int *)(a1 + 8) + result + 23112) = v16 - 1;
          return result;
        }
        v17 += 48 * v20;
      }
    }
    else
    {
      if ( (v24 & 1) != 0 )
        MiEmptyKernelStackCache(v23, 0);
      if ( !MiClaimPhysicalRun(
              (__int64)v23,
              v16,
              1LL,
              qword_140C65820,
              a1 + 48,
              117440512,
              -1,
              0LL,
              *(unsigned __int8 *)(v17 + 34) >> 6,
              0LL,
              &v24) )
      {
        v21 = 2;
        if ( (int)MiScrubPage((unsigned __int64 *)a1, v17, 0LL, 0) < 0 )
          v21 = 3;
        MiMakePageBad(v16, v21);
      }
    }
    --v16;
    v17 -= 48LL;
    if ( v16 < v15 )
    {
LABEL_36:
      LODWORD(v6) = v27;
      v8 = v22;
      goto LABEL_37;
    }
  }
  result = v23[1].Alignment;
  *(_QWORD *)(25408LL * *(unsigned int *)(a1 + 8) + result + 23112) = v16;
  return result;
}
