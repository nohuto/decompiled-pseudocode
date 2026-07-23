/*
 * XREFs of SdbpCheckMatchingFiles @ 0x140754680
 * Callers:
 *     <none>
 * Callees:
 *     Feature_CompatBuildInVb__private_IsEnabledDeviceUsage @ 0x1403F989C (Feature_CompatBuildInVb__private_IsEnabledDeviceUsage.c)
 *     SdbpInitializeSearchDBContext @ 0x1407539C8 (SdbpInitializeSearchDBContext.c)
 *     SdbpResolveMatchingFile @ 0x140753B9C (SdbpResolveMatchingFile.c)
 *     AslFree @ 0x14075493C (AslFree.c)
 *     AslLogCallPrintf @ 0x140756124 (AslLogCallPrintf.c)
 *     AslFileNotFound @ 0x1407564FC (AslFileNotFound.c)
 *     AslFileMappingDelete @ 0x140756528 (AslFileMappingDelete.c)
 *     SdbGetStringTagPtr @ 0x140756740 (SdbGetStringTagPtr.c)
 *     AslFileMappingCreate @ 0x140758BB8 (AslFileMappingCreate.c)
 *     SdbFindFirstTag @ 0x14075A344 (SdbFindFirstTag.c)
 *     SdbpCheckAllAttributes @ 0x1407B219C (SdbpCheckAllAttributes.c)
 */

__int64 __fastcall SdbpCheckMatchingFiles(int *a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, _QWORD *a6)
{
  unsigned int v6; // ebx
  __int64 v8; // r14
  int v9; // r15d
  int IsEnabledDeviceUsage; // eax
  _QWORD *v11; // rsi
  unsigned int FirstTag; // eax
  unsigned __int16 *StringTagPtr; // r12
  const char *v14; // r9
  int v15; // r8d
  unsigned int v16; // eax
  int v17; // ecx
  __int64 v18; // r13
  int *v19; // rdx
  int v20; // r15d
  __int64 v21; // rcx
  __int64 v22; // rcx
  unsigned __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rcx
  int v27; // [rsp+30h] [rbp-20h] BYREF
  PVOID P; // [rsp+38h] [rbp-18h]
  __int64 v29; // [rsp+40h] [rbp-10h] BYREF
  int *v30; // [rsp+48h] [rbp-8h]
  int v33; // [rsp+A0h] [rbp+50h]

  v33 = a3;
  v6 = 0;
  v27 = 0;
  v8 = 0LL;
  v29 = 0LL;
  v9 = a2;
  P = 0LL;
  IsEnabledDeviceUsage = Feature_CompatBuildInVb__private_IsEnabledDeviceUsage();
  v11 = a6;
  if ( !IsEnabledDeviceUsage && a6[11] )
    goto LABEL_3;
  FirstTag = SdbFindFirstTag(a3, a5, 24577LL);
  if ( !FirstTag )
    goto LABEL_31;
  StringTagPtr = (unsigned __int16 *)SdbGetStringTagPtr(a3, FirstTag);
  if ( !StringTagPtr )
  {
    v14 = "Failed to get the string from the database";
    v15 = 2943;
LABEL_7:
    AslLogCallPrintf(1, (unsigned int)"SdbpCheckMatchingFiles", v15, (_DWORD)v14);
    goto LABEL_31;
  }
  if ( *StringTagPtr == 42 )
  {
    if ( v11[1] )
    {
      v16 = SdbpCheckAllAttributes((unsigned int)&v27, v9, a3, a5, v11[1]);
      if ( (unsigned int)AslFileNotFound(v16) || v17 >= 0 )
        v6 = 1;
      else
        AslLogCallPrintf(
          1,
          (unsigned int)"SdbpCheckMatchingFiles",
          2968,
          (unsigned int)"Failed to check file attributes [%x]");
      goto LABEL_31;
    }
    if ( (unsigned int)Feature_CompatBuildInVb__private_IsEnabledDeviceUsage() )
    {
LABEL_3:
      v27 = 1;
      goto LABEL_30;
    }
  }
  v18 = -1LL;
  do
    ++v18;
  while ( StringTagPtr[v18] );
  if ( (*(_DWORD *)v11 & 1) == 0 && !(unsigned int)SdbpInitializeSearchDBContext((__int64)v11) )
  {
    v14 = "Failed to initialize SEARCHDBCONTEXT";
    v15 = 3006;
    goto LABEL_7;
  }
  v19 = (int *)v11[9];
  v20 = 0;
  v30 = v19;
  if ( *v19 <= 0 )
    goto LABEL_27;
  while ( 1 )
  {
    if ( !(unsigned int)SdbpResolveMatchingFile(a2, (__int64)v11, StringTagPtr, v18, (__int64)&v19[12 * v20 + 2], &v29) )
    {
      AslLogCallPrintf(1, (unsigned int)"SdbpCheckMatchingFiles", 3030, (unsigned int)"Failed to resolve matching file");
      v8 = v29;
      goto LABEL_31;
    }
    v8 = v29;
    a6 = 0LL;
    if ( (int)AslFileMappingCreate((unsigned int)&a6, v29, 0, 0, 0LL) >= 0 )
      break;
    AslFree(v21, v8);
    P = a6;
LABEL_26:
    v19 = v30;
    ++v20;
    v8 = 0LL;
    v29 = 0LL;
    if ( v20 >= *v30 )
      goto LABEL_27;
  }
  P = a6;
  if ( (int)SdbpCheckAllAttributes((unsigned int)&v27, a2, v33, a5, (__int64)a6) < 0 )
  {
    AslFileMappingDelete(P);
    P = 0LL;
    AslFree(v22, v8);
    goto LABEL_26;
  }
  if ( v20 > 0 )
    *((_DWORD *)v11 + 20) = 1;
LABEL_27:
  v23 = *StringTagPtr;
  LOWORD(v23) = v23 - 37;
  if ( (unsigned __int16)v23 <= 0x37u )
  {
    v24 = 0x80000000000201LL;
    if ( _bittest64(&v24, v23) )
      *((_DWORD *)v11 + 20) = 1;
  }
LABEL_30:
  v6 = 1;
LABEL_31:
  AslFileMappingDelete(P);
  AslFree(v25, v8);
  *a1 = v27;
  return v6;
}
