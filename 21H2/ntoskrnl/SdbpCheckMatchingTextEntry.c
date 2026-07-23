/*
 * XREFs of SdbpCheckMatchingTextEntry @ 0x140964E74
 * Callers:
 *     SdbpCheckMatchingText @ 0x140964D50 (SdbpCheckMatchingText.c)
 * Callees:
 *     memmove @ 0x140414040 (memmove.c)
 *     SdbpInitializeSearchDBContext @ 0x1407539C8 (SdbpInitializeSearchDBContext.c)
 *     SdbpResolveMatchingFile @ 0x140753B9C (SdbpResolveMatchingFile.c)
 *     AslLogCallPrintf @ 0x140756124 (AslLogCallPrintf.c)
 *     AslFileNotFound @ 0x1407564FC (AslFileNotFound.c)
 *     AslFileMappingDelete @ 0x140756528 (AslFileMappingDelete.c)
 *     AslFileMappingCreate @ 0x140758BB8 (AslFileMappingCreate.c)
 *     AslAlloc @ 0x14075B258 (AslAlloc.c)
 *     AslStringSearchA @ 0x140967B84 (AslStringSearchA.c)
 *     AslStringSearchW @ 0x140967C1C (AslStringSearchW.c)
 *     AslFileMappingEnsureMappedAs @ 0x140968164 (AslFileMappingEnsureMappedAs.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SdbpCheckMatchingTextEntry(
        __int64 a1,
        __int64 a2,
        unsigned __int16 *a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        int *a8,
        _DWORD *a9)
{
  _DWORD *v10; // r13
  int v11; // edx
  unsigned int v13; // esi
  int v14; // eax
  PVOID v15; // rdi
  PVOID *v16; // rbx
  int v17; // eax
  int *v18; // rbp
  int v19; // esi
  __int64 v20; // r9
  int v21; // eax
  int v22; // ecx
  int v23; // ecx
  unsigned __int64 v24; // rax
  __int64 v25; // rcx
  unsigned int v27; // esi
  unsigned int v28; // ebp
  int v29; // r15d
  int v30; // r15d
  unsigned int v31; // r14d
  PVOID v32; // rax
  char *v33; // rdx
  __int64 v34; // rax
  int v35; // ecx
  int v36; // [rsp+30h] [rbp-58h]
  PVOID P; // [rsp+38h] [rbp-50h] BYREF
  PVOID v38[9]; // [rsp+40h] [rbp-48h] BYREF
  unsigned __int16 *v39; // [rsp+A0h] [rbp+18h]

  v39 = a3;
  v10 = a9;
  v11 = 0;
  P = 0LL;
  v38[0] = 0LL;
  v13 = 0;
  v14 = *(_DWORD *)a2;
  v15 = 0LL;
  v36 = 0;
  v16 = 0LL;
  *a8 = 0;
  *a9 = 0;
  if ( (v14 & 1) == 0 )
  {
    v17 = SdbpInitializeSearchDBContext(a2);
    v11 = 0;
    if ( !v17 )
    {
      AslLogCallPrintf(1LL);
      goto LABEL_17;
    }
    a3 = v39;
  }
  v18 = *(int **)(a2 + 72);
  v19 = 0;
  if ( *v18 <= 0 )
    goto LABEL_15;
  while ( 1 )
  {
    v20 = -1LL;
    do
      ++v20;
    while ( a3[v20] );
    if ( !(unsigned int)SdbpResolveMatchingFile(a1, a2, a3, v20, (__int64)&v18[12 * v19 + 2], &P) )
    {
      AslLogCallPrintf(1LL);
      v15 = P;
      goto LABEL_52;
    }
    v15 = P;
    v21 = AslFileMappingCreate((__int64 *)v38, (const WCHAR *)P, 0LL, 0LL, 0LL);
    v16 = (PVOID *)v38[0];
    v22 = v21;
    if ( v21 >= 0 )
      v22 = AslFileMappingEnsureMappedAs(v38[0], 0LL);
    if ( !AslFileNotFound(v22) )
      break;
    AslFileMappingDelete(v16);
    v11 = 0;
    v38[0] = 0LL;
    v16 = 0LL;
    if ( v15 )
    {
      ExFreePoolWithTag(v15, 0x74705041u);
      v11 = 0;
    }
    a3 = v39;
    ++v19;
    v15 = 0LL;
    P = 0LL;
    if ( v19 >= *v18 )
      goto LABEL_15;
  }
  if ( v23 < 0 )
  {
    AslLogCallPrintf(1LL);
LABEL_52:
    v13 = 0;
    goto LABEL_17;
  }
  if ( v19 > 0 )
    *a9 = 1;
  if ( !v16 )
    goto LABEL_15;
  v27 = v11;
  v28 = a7;
  if ( a7 >= (unsigned __int64)v16[3] )
    v28 = (unsigned int)v16[3];
  P = v16[4];
  if ( a5 <= v28 )
  {
    v29 = v11;
    LOBYTE(v29) = a6 == 3;
    v30 = v29 + 1;
    if ( !v28 )
    {
LABEL_49:
      v10 = a9;
      *a8 = v36;
      goto LABEL_16;
    }
    while ( 1 )
    {
      if ( v27 > a5 )
        v27 += v30 - a5;
      v31 = v28 - v27;
      if ( v28 - v27 > 0x1000 )
        v31 = 4096;
      v32 = AslAlloc(4096LL, v31 + 2LL);
      v38[0] = v32;
      if ( !v32 )
        break;
      v33 = (char *)P + v27;
      if ( v33 < P )
        break;
      memmove(v32, v33, v31);
      if ( !a6 )
        break;
      if ( a6 <= 2 )
      {
        v34 = AslStringSearchA(v38[0], v31, a4, a5);
        v35 = v36;
        if ( v34 )
          v35 = 1;
        v36 = v35;
      }
      else
      {
        if ( a6 != 3 )
          break;
        if ( AslStringSearchW(v38[0], v31 >> 1, a4, a5 >> 1) )
          v36 = 1;
      }
      v27 += v31;
      ExFreePoolWithTag(v38[0], 0x74705041u);
      if ( v27 >= v28 )
        goto LABEL_49;
    }
    AslLogCallPrintf(1LL);
    v13 = 0;
    v10 = a9;
  }
  else
  {
LABEL_15:
    *a8 = v11;
LABEL_16:
    v13 = 1;
  }
LABEL_17:
  v24 = *v39;
  LOWORD(v24) = v24 - 37;
  if ( (unsigned __int16)v24 <= 0x37u )
  {
    v25 = 0x80000000000201LL;
    if ( _bittest64(&v25, v24) )
      *v10 = 1;
  }
  if ( v15 )
    ExFreePoolWithTag(v15, 0x74705041u);
  if ( v16 )
    AslFileMappingDelete(v16);
  return v13;
}
