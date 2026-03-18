/*
 * XREFs of SdbpCheckMatchingFiles @ 0x1408414E0
 * Callers:
 *     <none>
 * Callees:
 *     AslLogCallPrintf @ 0x1406E0C3C (AslLogCallPrintf.c)
 *     AslFileMappingCreate @ 0x14075E160 (AslFileMappingCreate.c)
 *     AslFileMappingDelete @ 0x14075E448 (AslFileMappingDelete.c)
 *     SdbFindFirstTag @ 0x140792CCC (SdbFindFirstTag.c)
 *     AslFileNotFound @ 0x1408415E4 (AslFileNotFound.c)
 *     SdbpCheckAllAttributes @ 0x140841610 (SdbpCheckAllAttributes.c)
 *     SdbGetStringTagPtr @ 0x140842A24 (SdbGetStringTagPtr.c)
 *     SdbpInitializeSearchDBContext @ 0x140A129F4 (SdbpInitializeSearchDBContext.c)
 *     SdbpResolveMatchingFile @ 0x140A12DA0 (SdbpResolveMatchingFile.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SdbpCheckMatchingFiles(int *a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, _QWORD *a6)
{
  _QWORD *v6; // rsi
  int v8; // r15d
  int *v9; // r13
  unsigned int v10; // r14d
  PVOID v11; // rdi
  PVOID *v12; // r12
  unsigned int FirstTag; // eax
  _WORD *StringTagPtr; // r13
  unsigned int v15; // eax
  int v16; // ecx
  __int64 result; // rax
  __int64 v18; // rdx
  int v19; // eax
  int *v20; // r8
  int v21; // r15d
  unsigned __int64 v22; // rax
  __int64 v23; // rcx
  int v24; // [rsp+30h] [rbp-20h] BYREF
  PVOID P; // [rsp+38h] [rbp-18h] BYREF
  __int64 v26; // [rsp+40h] [rbp-10h]
  int *v27; // [rsp+48h] [rbp-8h]
  int v30; // [rsp+A0h] [rbp+50h]

  v30 = a3;
  v6 = a6;
  v24 = 0;
  v8 = a2;
  P = 0LL;
  v9 = a1;
  v10 = 0;
  v11 = 0LL;
  v12 = 0LL;
  if ( a6[11] )
  {
    v24 = 1;
    goto LABEL_36;
  }
  FirstTag = SdbFindFirstTag(a3, a5, 24577);
  if ( FirstTag )
  {
    StringTagPtr = (_WORD *)SdbGetStringTagPtr(a3, FirstTag);
    if ( StringTagPtr )
    {
      if ( v6[1] && *StringTagPtr == 42 )
      {
        v15 = SdbpCheckAllAttributes((unsigned int)&v24, v8, a3, a5, v6[1]);
        if ( (unsigned int)AslFileNotFound(v15) || v16 >= 0 )
          v10 = 1;
        else
          AslLogCallPrintf(1LL);
        goto LABEL_9;
      }
      v18 = -1LL;
      do
        ++v18;
      while ( StringTagPtr[v18] );
      v19 = *(_DWORD *)v6;
      v26 = v18;
      if ( (v19 & 1) != 0 )
      {
LABEL_21:
        v20 = (int *)v6[9];
        v21 = 0;
        v27 = v20;
        if ( *v20 <= 0 )
          goto LABEL_32;
        while ( 1 )
        {
          if ( !(unsigned int)SdbpResolveMatchingFile(a2, v6, StringTagPtr, (unsigned int)v18, &v20[12 * v21 + 2], &P) )
          {
            AslLogCallPrintf(1LL);
            v11 = P;
            goto LABEL_9;
          }
          v11 = P;
          a6 = 0LL;
          if ( (int)AslFileMappingCreate((wchar_t ***)&a6, (const WCHAR *)P, 0LL, 0LL, 0LL) >= 0 )
          {
            v12 = (PVOID *)a6;
            if ( (int)SdbpCheckAllAttributes((unsigned int)&v24, a2, v30, a5, (__int64)a6) >= 0 )
            {
              if ( v21 > 0 )
                *((_DWORD *)v6 + 20) = 1;
LABEL_32:
              v22 = (unsigned __int16)*StringTagPtr;
              LOWORD(v22) = v22 - 37;
              if ( (unsigned __int16)v22 <= 0x37u )
              {
                v23 = 0x80000000000201LL;
                if ( _bittest64(&v23, v22) )
                  *((_DWORD *)v6 + 20) = 1;
              }
              v9 = a1;
LABEL_36:
              v10 = 1;
              goto LABEL_10;
            }
            AslFileMappingDelete(v12);
            v12 = 0LL;
            if ( v11 )
              ExFreePoolWithTag(v11, 0x74705041u);
          }
          else
          {
            if ( v11 )
              ExFreePoolWithTag(v11, 0x74705041u);
            v12 = (PVOID *)a6;
          }
          v20 = v27;
          ++v21;
          LODWORD(v18) = v26;
          v11 = 0LL;
          P = 0LL;
          if ( v21 >= *v27 )
            goto LABEL_32;
        }
      }
      if ( (unsigned int)SdbpInitializeSearchDBContext(v6) )
      {
        LODWORD(v18) = v26;
        goto LABEL_21;
      }
    }
    AslLogCallPrintf(1LL);
LABEL_9:
    v9 = a1;
  }
LABEL_10:
  AslFileMappingDelete(v12);
  if ( v11 )
    ExFreePoolWithTag(v11, 0x74705041u);
  result = v10;
  *v9 = v24;
  return result;
}
