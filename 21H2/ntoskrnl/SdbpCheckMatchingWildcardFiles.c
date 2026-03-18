/*
 * XREFs of SdbpCheckMatchingWildcardFiles @ 0x140A11A00
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     AslLogCallPrintf @ 0x1406E0C3C (AslLogCallPrintf.c)
 *     AslFileMappingCreate @ 0x14075E160 (AslFileMappingCreate.c)
 *     AslFileMappingDelete @ 0x14075E448 (AslFileMappingDelete.c)
 *     SdbFindFirstTag @ 0x140792CCC (SdbFindFirstTag.c)
 *     SdbpCheckAllAttributes @ 0x140841610 (SdbpCheckAllAttributes.c)
 *     SdbGetStringTagPtr @ 0x140842A24 (SdbGetStringTagPtr.c)
 *     SdbpInitializeSearchDBContext @ 0x140A129F4 (SdbpInitializeSearchDBContext.c)
 *     SdbpResolveMatchingFile @ 0x140A12DA0 (SdbpResolveMatchingFile.c)
 *     AslPathWildcardFindClose @ 0x140A15E88 (AslPathWildcardFindClose.c)
 *     AslPathWildcardFindFirst @ 0x140A15ECC (AslPathWildcardFindFirst.c)
 *     AslPathWildcardFindNext @ 0x140A1641C (AslPathWildcardFindNext.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SdbpCheckMatchingWildcardFiles(
        _DWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6)
{
  _DWORD *v7; // r15
  unsigned int v8; // r12d
  PVOID v9; // rdi
  PVOID *v10; // rsi
  unsigned int FirstTag; // eax
  __int64 StringTagPtr; // rax
  __int64 v13; // r8
  __int64 v14; // r13
  int *v15; // rdx
  int v16; // r15d
  int i; // eax
  __int64 v18; // rdx
  __int64 result; // rax
  int v20; // [rsp+30h] [rbp-D0h] BYREF
  PVOID *v21; // [rsp+38h] [rbp-C8h] BYREF
  PVOID P; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v23; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v24; // [rsp+50h] [rbp-B0h]
  __int64 v25; // [rsp+58h] [rbp-A8h]
  _DWORD *v26; // [rsp+60h] [rbp-A0h]
  __int64 v27; // [rsp+68h] [rbp-98h]
  int *v28; // [rsp+70h] [rbp-90h]
  wchar_t pszDest[264]; // [rsp+80h] [rbp-80h] BYREF

  v24 = a2;
  v27 = a3;
  v7 = a1;
  v26 = a1;
  v8 = 0;
  v9 = 0LL;
  v20 = 0;
  v10 = 0LL;
  P = 0LL;
  v21 = 0LL;
  v23 = 0LL;
  if ( *(_QWORD *)(a6 + 88) )
  {
    v20 = 1;
LABEL_28:
    v8 = 1;
    goto LABEL_29;
  }
  FirstTag = SdbFindFirstTag(a3, a5, 24577);
  if ( !FirstTag )
    goto LABEL_29;
  StringTagPtr = SdbGetStringTagPtr(a3, FirstTag);
  v25 = StringTagPtr;
  v13 = StringTagPtr;
  if ( !StringTagPtr )
  {
LABEL_5:
    AslLogCallPrintf(1LL);
    goto LABEL_29;
  }
  v14 = -1LL;
  do
    ++v14;
  while ( *(_WORD *)(StringTagPtr + 2 * v14) );
  if ( (*(_DWORD *)a6 & 1) == 0 )
  {
    if ( !(unsigned int)SdbpInitializeSearchDBContext(a6) )
      goto LABEL_5;
    v13 = v25;
  }
  v15 = *(int **)(a6 + 72);
  v16 = 0;
  v28 = v15;
  if ( *v15 <= 0 )
  {
LABEL_27:
    v7 = v26;
    *(_DWORD *)(a6 + 80) = 1;
    goto LABEL_28;
  }
  while ( (unsigned int)SdbpResolveMatchingFile(v24, a6, v13, (unsigned int)v14, &v15[12 * v16 + 2], &P) )
  {
    AslPathWildcardFindClose(&v23);
    memset(pszDest, 0, 0x208uLL);
    v9 = P;
    for ( i = AslPathWildcardFindFirst(pszDest); i >= 0; i = AslPathWildcardFindNext(pszDest, v18, v23) )
    {
      if ( v10 )
      {
        AslFileMappingDelete(v10);
        v21 = 0LL;
      }
      i = AslFileMappingCreate((wchar_t ***)&v21, pszDest, 0LL, 0LL, 0LL);
      v10 = v21;
      if ( i < 0 )
        break;
      if ( (int)SdbpCheckAllAttributes(&v20, v24, v27, a5, (__int64)v21) >= 0 )
        goto LABEL_27;
    }
    if ( i != -2147483642 )
      AslLogCallPrintf(3LL);
    if ( v9 )
    {
      ExFreePoolWithTag(v9, 0x74705041u);
      v9 = 0LL;
      P = 0LL;
    }
    v15 = v28;
    if ( ++v16 >= *v28 )
      goto LABEL_27;
    v13 = v25;
  }
  AslLogCallPrintf(1LL);
  v9 = P;
  v7 = v26;
LABEL_29:
  AslPathWildcardFindClose(&v23);
  AslFileMappingDelete(v10);
  if ( v9 )
    ExFreePoolWithTag(v9, 0x74705041u);
  result = v8;
  *v7 = v20;
  return result;
}
