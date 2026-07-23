/*
 * XREFs of SdbpCheckMatchingWildcardFiles @ 0x140965260
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     Feature_CompatBuildInVb__private_IsEnabledDeviceUsage @ 0x1403F989C (Feature_CompatBuildInVb__private_IsEnabledDeviceUsage.c)
 *     memset @ 0x140414300 (memset.c)
 *     SdbpInitializeSearchDBContext @ 0x1407539C8 (SdbpInitializeSearchDBContext.c)
 *     SdbpResolveMatchingFile @ 0x140753B9C (SdbpResolveMatchingFile.c)
 *     AslFree @ 0x14075493C (AslFree.c)
 *     AslLogCallPrintf @ 0x140756124 (AslLogCallPrintf.c)
 *     AslFileMappingDelete @ 0x140756528 (AslFileMappingDelete.c)
 *     SdbGetStringTagPtr @ 0x140756740 (SdbGetStringTagPtr.c)
 *     AslFileMappingCreate @ 0x140758BB8 (AslFileMappingCreate.c)
 *     SdbFindFirstTag @ 0x14075A344 (SdbFindFirstTag.c)
 *     SdbpCheckAllAttributes @ 0x1407B219C (SdbpCheckAllAttributes.c)
 *     AslPathWildcardFindClose @ 0x140968C90 (AslPathWildcardFindClose.c)
 *     AslPathWildcardFindFirst @ 0x140968CD4 (AslPathWildcardFindFirst.c)
 *     AslPathWildcardFindNext @ 0x1409692A4 (AslPathWildcardFindNext.c)
 */

__int64 __fastcall SdbpCheckMatchingWildcardFiles(
        _DWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6)
{
  unsigned int v7; // r12d
  void *v8; // rdi
  PVOID *v9; // r14
  _DWORD *v10; // r15
  unsigned int FirstTag; // eax
  __int64 v12; // r8
  __int64 v13; // r9
  _WORD *v14; // r8
  __int64 v15; // r13
  int *v16; // rdx
  int v17; // r15d
  int i; // eax
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 result; // rax
  int v23; // [rsp+30h] [rbp-D0h] BYREF
  PVOID *v24; // [rsp+38h] [rbp-C8h] BYREF
  void *v25; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v26; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v27; // [rsp+50h] [rbp-B0h]
  __int64 StringTagPtr; // [rsp+58h] [rbp-A8h]
  _DWORD *v29; // [rsp+60h] [rbp-A0h]
  __int64 v30; // [rsp+68h] [rbp-98h]
  int *v31; // [rsp+70h] [rbp-90h]
  wchar_t pszDest[264]; // [rsp+80h] [rbp-80h] BYREF

  v23 = 0;
  v30 = a3;
  v7 = 0;
  v8 = 0LL;
  v25 = 0LL;
  v9 = 0LL;
  v24 = 0LL;
  v26 = 0LL;
  v10 = a1;
  v27 = a2;
  v29 = a1;
  if ( !(unsigned int)Feature_CompatBuildInVb__private_IsEnabledDeviceUsage() && *(_QWORD *)(a6 + 88) )
  {
    v23 = 1;
LABEL_29:
    v7 = 1;
    goto LABEL_30;
  }
  FirstTag = SdbFindFirstTag(a3, a5, 24577);
  if ( !FirstTag )
    goto LABEL_30;
  StringTagPtr = SdbGetStringTagPtr(a3, FirstTag, v12, v13);
  v14 = (_WORD *)StringTagPtr;
  if ( !StringTagPtr )
  {
LABEL_6:
    AslLogCallPrintf(1LL);
    goto LABEL_30;
  }
  v15 = -1LL;
  do
    ++v15;
  while ( *(_WORD *)(StringTagPtr + 2 * v15) );
  if ( (*(_DWORD *)a6 & 1) == 0 )
  {
    if ( !(unsigned int)SdbpInitializeSearchDBContext(a6) )
      goto LABEL_6;
    v14 = (_WORD *)StringTagPtr;
  }
  v16 = *(int **)(a6 + 72);
  v31 = v16;
  v17 = 0;
  if ( *v16 <= 0 )
  {
LABEL_28:
    v10 = v29;
    *(_DWORD *)(a6 + 80) = 1;
    goto LABEL_29;
  }
  while ( (unsigned int)SdbpResolveMatchingFile(v27, a6, v14, v15, (__int64)&v16[12 * v17 + 2], &v25) )
  {
    AslPathWildcardFindClose(&v26);
    memset(pszDest, 0, 0x208uLL);
    v8 = v25;
    for ( i = AslPathWildcardFindFirst(pszDest); ; i = AslPathWildcardFindNext(pszDest, v20, v26) )
    {
      v19 = 0LL;
      if ( i < 0 )
        break;
      if ( v9 )
      {
        AslFileMappingDelete(v9);
        v24 = 0LL;
      }
      i = AslFileMappingCreate((__int64 *)&v24, pszDest, 0LL, 0LL, 0LL);
      v9 = v24;
      if ( i < 0 )
        break;
      if ( (int)SdbpCheckAllAttributes(&v23, v27, v30, a5, (__int64)v24) >= 0 )
        goto LABEL_28;
    }
    if ( i != -2147483642 )
      AslLogCallPrintf(3LL);
    if ( v8 )
    {
      AslFree(v19, v8);
      v8 = 0LL;
      v25 = 0LL;
    }
    v16 = v31;
    if ( ++v17 >= *v31 )
      goto LABEL_28;
    v14 = (_WORD *)StringTagPtr;
  }
  AslLogCallPrintf(1LL);
  v8 = v25;
  v10 = v29;
LABEL_30:
  AslPathWildcardFindClose(&v26);
  AslFileMappingDelete(v9);
  if ( v8 )
    AslFree(v21, v8);
  result = v7;
  *v10 = v23;
  return result;
}
