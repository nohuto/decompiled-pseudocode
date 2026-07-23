/*
 * XREFs of SdbpCheckMatchingDir @ 0x140964550
 * Callers:
 *     <none>
 * Callees:
 *     Feature_CompatBuildInVb__private_IsEnabledDeviceUsage @ 0x1403F989C (Feature_CompatBuildInVb__private_IsEnabledDeviceUsage.c)
 *     SdbpInitializeSearchDBContext @ 0x1407539C8 (SdbpInitializeSearchDBContext.c)
 *     SdbpResolveMatchingFile @ 0x140753B9C (SdbpResolveMatchingFile.c)
 *     AslLogCallPrintf @ 0x140756124 (AslLogCallPrintf.c)
 *     SdbGetStringTagPtr @ 0x140756740 (SdbGetStringTagPtr.c)
 *     SdbFindFirstTag @ 0x14075A344 (SdbFindFirstTag.c)
 *     AslDoesDirectoryExistNtPath @ 0x140967D04 (AslDoesDirectoryExistNtPath.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SdbpCheckMatchingDir(
        unsigned int *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        const WCHAR *P)
{
  int v7; // ebp
  unsigned int v8; // r12d
  unsigned int DoesDirectoryExistNtPath; // esi
  unsigned int FirstTag; // eax
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 StringTagPtr; // rax
  _WORD *v14; // r15
  __int64 v15; // r14
  const WCHAR *v16; // rdi
  int *v17; // r13
  WCHAR *v18; // r12
  unsigned __int64 v19; // rax
  __int64 v20; // rcx

  v7 = 0;
  v8 = 0;
  DoesDirectoryExistNtPath = 0;
  FirstTag = SdbFindFirstTag(a3, a5, 24577);
  if ( FirstTag )
  {
    StringTagPtr = SdbGetStringTagPtr(a3, FirstTag, v11, v12);
    v14 = (_WORD *)StringTagPtr;
    if ( !StringTagPtr )
      goto LABEL_3;
    v15 = -1LL;
    do
      ++v15;
    while ( *(_WORD *)(StringTagPtr + 2 * v15) );
    v16 = P;
    if ( (*(_DWORD *)P & 1) != 0 || (unsigned int)SdbpInitializeSearchDBContext((__int64)P) )
    {
      v17 = (int *)*((_QWORD *)v16 + 9);
      if ( *v17 > 0 )
      {
        while ( 1 )
        {
          P = 0LL;
          if ( !(unsigned int)SdbpResolveMatchingFile(a2, (__int64)v16, v14, v15, (__int64)&v17[12 * v7 + 2], &P) )
          {
            AslLogCallPrintf(1LL);
            v8 = 0;
            goto LABEL_18;
          }
          v18 = (WCHAR *)P;
          DoesDirectoryExistNtPath = AslDoesDirectoryExistNtPath(P);
          if ( v18 )
            ExFreePoolWithTag(v18, 0x74705041u);
          if ( DoesDirectoryExistNtPath )
            break;
          if ( ++v7 >= *v17 )
            goto LABEL_14;
        }
        if ( v7 > 0 )
          *((_DWORD *)v16 + 20) = 1;
      }
LABEL_14:
      v19 = (unsigned __int16)*v14;
      LOWORD(v19) = v19 - 37;
      if ( (unsigned __int16)v19 <= 0x37u )
      {
        v20 = 0x80000000000201LL;
        if ( _bittest64(&v20, v19) )
          *((_DWORD *)v16 + 20) = 1;
      }
      v8 = 1;
    }
    else
    {
LABEL_3:
      AslLogCallPrintf(1LL);
    }
  }
LABEL_18:
  *a1 = DoesDirectoryExistNtPath;
  if ( (unsigned int)Feature_CompatBuildInVb__private_IsEnabledDeviceUsage() )
    return v8;
  return DoesDirectoryExistNtPath;
}
