__int64 __fastcall SdbpCheckMatchingFiles(int *a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, _QWORD *a6)
{
  int v7; // r15d
  int *v8; // rsi
  unsigned int v9; // r14d
  PVOID v10; // rdi
  PVOID v11; // r12
  unsigned int FirstTag; // eax
  _WORD *StringTagPtr; // r13
  _QWORD *v14; // rsi
  int v15; // eax
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
  v7 = a2;
  v24 = 0;
  v8 = a1;
  P = 0LL;
  v9 = 0;
  v10 = 0LL;
  v11 = 0LL;
  FirstTag = SdbFindFirstTag(a3, a5, 24577LL);
  if ( FirstTag )
  {
    StringTagPtr = (_WORD *)SdbGetStringTagPtr(a3, FirstTag);
    if ( StringTagPtr )
    {
      v14 = a6;
      if ( *StringTagPtr != 42 )
      {
        v18 = -1LL;
        do
          ++v18;
        while ( StringTagPtr[v18] );
        v19 = *(_DWORD *)a6;
        v26 = v18;
        if ( (v19 & 1) == 0 )
        {
          if ( !(unsigned int)SdbpInitializeSearchDBContext(a6) )
          {
            AslLogCallPrintf(1LL);
            goto LABEL_8;
          }
          LODWORD(v18) = v26;
        }
        v20 = (int *)v14[9];
        v21 = 0;
        v27 = v20;
        if ( *v20 <= 0 )
          goto LABEL_32;
        while ( 1 )
        {
          if ( !(unsigned int)SdbpResolveMatchingFile(a2, v14, StringTagPtr, (unsigned int)v18, &v20[12 * v21 + 2], &P) )
          {
            AslLogCallPrintf(1LL);
            v10 = P;
            goto LABEL_8;
          }
          v10 = P;
          a6 = 0LL;
          if ( (int)AslFileMappingCreate((unsigned int)&a6, (_DWORD)P, 0, 0, 0LL) >= 0 )
          {
            v11 = a6;
            if ( (int)SdbpCheckAllAttributes((unsigned int)&v24, a2, v30, a5, (__int64)a6) >= 0 )
            {
              if ( v21 > 0 )
                *((_DWORD *)v14 + 20) = 1;
LABEL_32:
              v22 = (unsigned __int16)*StringTagPtr;
              LOWORD(v22) = v22 - 37;
              if ( (unsigned __int16)v22 <= 0x37u )
              {
                v23 = 0x80000000000201LL;
                if ( _bittest64(&v23, v22) )
                  *((_DWORD *)v14 + 20) = 1;
              }
LABEL_35:
              v9 = 1;
              goto LABEL_8;
            }
            AslFileMappingDelete(v11);
            v11 = 0LL;
            if ( v10 )
              ExFreePoolWithTag(v10, 0x74705041u);
          }
          else
          {
            if ( v10 )
              ExFreePoolWithTag(v10, 0x74705041u);
            v11 = a6;
          }
          v20 = v27;
          ++v21;
          LODWORD(v18) = v26;
          v10 = 0LL;
          P = 0LL;
          if ( v21 >= *v27 )
            goto LABEL_32;
        }
      }
      if ( !a6[1] )
      {
        v24 = 1;
        goto LABEL_35;
      }
      v15 = SdbpCheckAllAttributes((unsigned int)&v24, v7, a3, a5, a6[1]);
      if ( AslFileNotFound(v15) || v16 >= 0 )
        v9 = 1;
      else
        AslLogCallPrintf(1LL);
LABEL_8:
      v8 = a1;
    }
    else
    {
      AslLogCallPrintf(1LL);
    }
  }
  AslFileMappingDelete(v11);
  if ( v10 )
    ExFreePoolWithTag(v10, 0x74705041u);
  result = v9;
  *v8 = v24;
  return result;
}
