/*
 * XREFs of SdbpCheckMatchingWildcardFiles @ 0x140A4D6E0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     AslLogCallPrintf @ 0x14079CA00 (AslLogCallPrintf.c)
 *     AslFileMappingDelete @ 0x1407A1D38 (AslFileMappingDelete.c)
 *     SdbGetStringTagPtr @ 0x1407A20E8 (SdbGetStringTagPtr.c)
 *     SdbpCheckAllAttributes @ 0x1407A24E8 (SdbpCheckAllAttributes.c)
 *     SdbFindFirstTag @ 0x1407A2798 (SdbFindFirstTag.c)
 *     AslFileMappingCreate @ 0x1407A2D8C (AslFileMappingCreate.c)
 *     SdbpInitializeSearchDBContext @ 0x140A4E760 (SdbpInitializeSearchDBContext.c)
 *     SdbpResolveMatchingFile @ 0x140A4EB00 (SdbpResolveMatchingFile.c)
 *     AslPathWildcardFindClose @ 0x140A528CC (AslPathWildcardFindClose.c)
 *     AslPathWildcardFindFirst @ 0x140A52910 (AslPathWildcardFindFirst.c)
 *     AslPathWildcardFindNext @ 0x140A52E68 (AslPathWildcardFindNext.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SdbpCheckMatchingWildcardFiles(
        _DWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6)
{
  _DWORD *v7; // r12
  unsigned int v8; // ebx
  PVOID v9; // rdi
  PVOID *v10; // rsi
  unsigned int FirstTag; // eax
  __int64 v12; // r8
  __int64 StringTagPtr; // rax
  __int64 v14; // rdx
  __int64 v15; // r12
  int *v16; // r13
  int v17; // r15d
  int i; // eax
  __int64 v19; // rdx
  __int64 result; // rax
  int v21; // [rsp+34h] [rbp-CCh] BYREF
  PVOID *v22; // [rsp+38h] [rbp-C8h] BYREF
  PVOID P; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v24; // [rsp+48h] [rbp-B8h] BYREF
  _DWORD *v25; // [rsp+50h] [rbp-B0h]
  __int64 v26; // [rsp+58h] [rbp-A8h]
  __int64 v27; // [rsp+60h] [rbp-A0h]
  __int64 v28; // [rsp+68h] [rbp-98h]
  wchar_t pszDest[264]; // [rsp+70h] [rbp-90h] BYREF

  v28 = a3;
  v26 = a2;
  v7 = a1;
  v8 = 0;
  v25 = a1;
  v21 = 0;
  v9 = 0LL;
  P = 0LL;
  v10 = 0LL;
  v22 = 0LL;
  v24 = 0LL;
  FirstTag = SdbFindFirstTag(a3, a5, 24577LL);
  if ( FirstTag )
  {
    StringTagPtr = SdbGetStringTagPtr(a3, FirstTag, v12);
    v27 = StringTagPtr;
    v14 = StringTagPtr;
    if ( !StringTagPtr )
    {
      AslLogCallPrintf(1LL);
      goto LABEL_28;
    }
    v15 = -1LL;
    do
      ++v15;
    while ( *(_WORD *)(StringTagPtr + 2 * v15) );
    v8 = 1;
    if ( (*(_DWORD *)a6 & 1) == 0 )
    {
      if ( !(unsigned int)SdbpInitializeSearchDBContext(a6) )
      {
        AslLogCallPrintf(1LL);
        v8 = 0;
LABEL_27:
        v7 = v25;
        goto LABEL_28;
      }
      v14 = v27;
    }
    v16 = *(int **)(a6 + 72);
    v17 = 0;
    if ( *v16 <= 0 )
    {
LABEL_26:
      *(_DWORD *)(a6 + 80) = 1;
    }
    else
    {
      while ( (unsigned int)SdbpResolveMatchingFile(v26, a6, v14, (unsigned int)v15, &v16[12 * v17 + 2], &P) )
      {
        AslPathWildcardFindClose(&v24);
        memset(pszDest, 0, 0x208uLL);
        v9 = P;
        for ( i = AslPathWildcardFindFirst(pszDest); i >= 0; i = AslPathWildcardFindNext(pszDest, v19, v24) )
        {
          if ( v10 )
          {
            AslFileMappingDelete(v10);
            v22 = 0LL;
          }
          i = AslFileMappingCreate((wchar_t ***)&v22, pszDest, 0LL, 0LL, 0LL);
          v10 = v22;
          if ( i < 0 )
            break;
          if ( (int)SdbpCheckAllAttributes(&v21, v26, v28, a5, (__int64)v22) >= 0 )
            goto LABEL_26;
        }
        if ( i != -2147483642 )
          AslLogCallPrintf(3LL);
        if ( v9 )
        {
          ExFreePoolWithTag(v9, 0x74705041u);
          v9 = 0LL;
          P = 0LL;
        }
        if ( ++v17 >= *v16 )
          goto LABEL_26;
        v14 = v27;
      }
      AslLogCallPrintf(1LL);
      v9 = P;
      v8 = 0;
    }
    goto LABEL_27;
  }
LABEL_28:
  AslPathWildcardFindClose(&v24);
  AslFileMappingDelete(v10);
  if ( v9 )
    ExFreePoolWithTag(v9, 0x74705041u);
  result = v8;
  *v7 = v21;
  return result;
}
