__int64 __fastcall SdbpCheckMatchingTextEntry(
        __int64 a1,
        int *a2,
        unsigned __int16 *a3,
        __int64 a4,
        unsigned int a5,
        int a6,
        unsigned int a7,
        int *a8,
        _DWORD *a9)
{
  _DWORD *v10; // rbp
  int v11; // edx
  unsigned int v13; // esi
  int v14; // eax
  int v15; // r13d
  PVOID v16; // rdi
  PVOID *v17; // rbx
  int v18; // eax
  int *v19; // rbp
  int v20; // esi
  __int64 v21; // r9
  int v22; // eax
  __int64 v23; // r8
  int v24; // ecx
  int v25; // ecx
  unsigned __int64 v26; // rax
  __int64 v27; // rcx
  unsigned int v29; // esi
  unsigned int v30; // ebp
  int v31; // r15d
  int v32; // r15d
  unsigned int v33; // r14d
  void *v34; // rax
  void *v35; // r13
  char *v36; // rdx
  __int64 v37; // rax
  int v38; // ecx
  int v39; // [rsp+30h] [rbp-58h]
  PVOID P; // [rsp+38h] [rbp-50h] BYREF
  PVOID v41; // [rsp+40h] [rbp-48h] BYREF
  unsigned __int16 *v42; // [rsp+A0h] [rbp+18h]

  v42 = a3;
  v10 = a9;
  v11 = 0;
  P = 0LL;
  v41 = 0LL;
  v13 = 0;
  v14 = *a2;
  v15 = 0;
  v39 = 0;
  v16 = 0LL;
  *a8 = 0;
  v17 = 0LL;
  *a9 = 0;
  if ( (v14 & 1) != 0 )
    goto LABEL_5;
  v18 = SdbpInitializeSearchDBContext(a2);
  v11 = 0;
  if ( v18 )
  {
    a3 = v42;
LABEL_5:
    v19 = (int *)*((_QWORD *)a2 + 9);
    v20 = 0;
    if ( *v19 <= 0 )
      goto LABEL_15;
    while ( 1 )
    {
      v21 = -1LL;
      do
        ++v21;
      while ( a3[v21] );
      if ( !(unsigned int)SdbpResolveMatchingFile(a1, a2, a3, v21, &v19[12 * v20 + 2], &P) )
      {
        AslLogCallPrintf(1LL);
        v16 = P;
        goto LABEL_28;
      }
      v16 = P;
      v22 = AslFileMappingCreate((wchar_t ***)&v41, (const WCHAR *)P, 0LL, 0LL, 0LL);
      v17 = (PVOID *)v41;
      v24 = v22;
      if ( v22 >= 0 )
        v24 = AslFileMappingEnsureMappedAs(v41, 0LL, v23);
      if ( !AslFileNotFound(v24) )
        break;
      AslFileMappingDelete(v17);
      v11 = 0;
      v41 = 0LL;
      v17 = 0LL;
      if ( v16 )
      {
        ExFreePoolWithTag(v16, 0x74705041u);
        v11 = 0;
      }
      a3 = v42;
      ++v20;
      v16 = 0LL;
      P = 0LL;
      if ( v20 >= *v19 )
        goto LABEL_15;
    }
    if ( v25 < 0 )
    {
      AslLogCallPrintf(1LL);
LABEL_28:
      v13 = 0;
      goto LABEL_17;
    }
    if ( v20 > 0 )
      *a9 = 1;
    if ( !v17 )
      goto LABEL_15;
    v29 = v11;
    v30 = a7;
    if ( a7 >= (unsigned __int64)v17[3] )
      v30 = (unsigned int)v17[3];
    v41 = v17[4];
    if ( a5 <= v30 )
    {
      v31 = v11;
      LOBYTE(v31) = a6 == 3;
      v32 = v31 + 1;
      if ( v30 )
      {
        while ( 1 )
        {
          if ( v29 > a5 )
            v29 += v32 - a5;
          v33 = v30 - v29;
          if ( v30 - v29 > 0x1000 )
            v33 = 4096;
          v34 = AslAlloc(4096LL, v33 + 2LL);
          v35 = v34;
          if ( !v34 )
            break;
          v36 = (char *)v41 + v29;
          if ( v36 < v41 )
            break;
          memmove(v34, v36, v33);
          if ( a6 == 1 || a6 == 2 )
          {
            v37 = AslStringSearchA(v35, v33, a4, a5);
            v38 = v39;
            if ( v37 )
              v38 = 1;
            v39 = v38;
          }
          else
          {
            if ( a6 != 3 )
              break;
            if ( AslStringSearchW(v35, v33 >> 1, a4, a5 >> 1) )
              v39 = 1;
          }
          v29 += v33;
          ExFreePoolWithTag(v35, 0x74705041u);
          if ( v29 >= v30 )
          {
            v15 = v39;
            goto LABEL_52;
          }
        }
        AslLogCallPrintf(1LL);
        v13 = 0;
        goto LABEL_17;
      }
LABEL_52:
      *a8 = v15;
    }
    else
    {
LABEL_15:
      *a8 = v11;
    }
    v13 = 1;
LABEL_17:
    v10 = a9;
    goto LABEL_18;
  }
  AslLogCallPrintf(1LL);
LABEL_18:
  v26 = *v42;
  LOWORD(v26) = v26 - 37;
  if ( (unsigned __int16)v26 <= 0x37u )
  {
    v27 = 0x80000000000201LL;
    if ( _bittest64(&v27, v26) )
      *v10 = 1;
  }
  if ( v16 )
    ExFreePoolWithTag(v16, 0x74705041u);
  if ( v17 )
    AslFileMappingDelete(v17);
  return v13;
}
