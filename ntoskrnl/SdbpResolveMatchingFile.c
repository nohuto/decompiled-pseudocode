__int64 __fastcall SdbpResolveMatchingFile(__int64 a1, __int64 a2, _WORD *a3, unsigned int a4, __int64 a5, _QWORD *a6)
{
  _QWORD *v6; // r12
  unsigned int v7; // edi
  __int64 v12; // r15
  __int16 v13; // ax
  int v14; // ecx
  ULONGLONG v15; // rax
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  __int64 v18; // rcx
  size_t v19; // rsi
  _QWORD *v20; // rax
  _QWORD *v21; // rbx
  __int16 v22; // ax
  __int64 v23; // r8
  int v25; // [rsp+28h] [rbp-28h]
  int v26; // [rsp+30h] [rbp-20h]
  ULONGLONG pullResult; // [rsp+40h] [rbp-10h] BYREF
  _QWORD *v28; // [rsp+48h] [rbp-8h] BYREF
  __int16 v31; // [rsp+A8h] [rbp+58h] BYREF

  v6 = a6;
  v7 = 0;
  pullResult = 0LL;
  v28 = 0LL;
  *a6 = 0LL;
  v31 = -1;
  LOWORD(a6) = -1;
  if ( !a4 )
    goto LABEL_32;
  v12 = a5;
  if ( *a3 != 37 )
  {
    v16 = *(unsigned int *)(a5 + 8);
    v17 = v16 + a4;
    if ( v17 >= v16 )
    {
      v15 = v17 + 1;
      if ( v17 + 1 >= v17 )
        goto LABEL_11;
    }
LABEL_32:
    AslLogCallPrintf(1LL);
    return v7;
  }
  if ( (int)AslEnvGetProcessWowInfo(&a6, &v31) < 0 )
    goto LABEL_32;
  v13 = AslImageFileToArchitecture(*(unsigned __int16 *)(a1 + 584));
  if ( v13 == -1 )
    v13 = v31;
  v14 = AslEnvExpandStrings2(*(_QWORD *)(a2 + 56), a3, 0LL, 0LL, &pullResult, (_WORD)a6, v13);
  if ( (int)(v14 + 0x80000000) >= 0 && v14 != -1073741789 )
    goto LABEL_32;
  v15 = 2 * pullResult;
LABEL_11:
  if ( v15 + 20 < v15 )
    goto LABEL_32;
  pullResult = v15 + 20;
  if ( RtlULongLongMult(v15 + 20, 2uLL, &pullResult) < 0 )
    goto LABEL_32;
  v19 = pullResult;
  if ( pullResult < 0x208 )
    v19 = 520LL;
  v20 = AslAlloc(v18, v19);
  v21 = v20;
  if ( !v20 )
    goto LABEL_32;
  if ( *a3 == 37 )
  {
    if ( (int)AslEnvGetProcessWowInfo(&a6, &v31) < 0 )
      goto LABEL_24;
    v22 = AslImageFileToArchitecture(*(unsigned __int16 *)(a1 + 584));
    if ( v22 == -1 )
      v22 = v31;
    LOWORD(v26) = v22;
    LOWORD(v25) = (_WORD)a6;
    if ( (int)AslEnvExpandStrings2(*(_QWORD *)(a2 + 56), a3, v21, v19 >> 1, &pullResult, v25, v26) < 0 )
      goto LABEL_24;
  }
  else
  {
    memmove(v20, *(const void **)v12, 2LL * *(unsigned int *)(v12 + 8));
    memmove((char *)v21 + 2 * *(unsigned int *)(v12 + 8), a3, 2LL * (a4 + 1));
  }
  if ( (int)AslPathClean(v21, v21) < 0 )
  {
LABEL_24:
    AslLogCallPrintf(1LL);
    ExFreePoolWithTag(v21, 0x74705041u);
    return v7;
  }
  if ( (int)AslPathToNetworkPathNt(&v28, v21) < 0 )
  {
    if ( wcsnicmp((const wchar_t *)v21, L"\\??\\", 4uLL) )
    {
      v23 = -1LL;
      do
        ++v23;
      while ( *((_WORD *)v21 + v23) );
      memmove(v21 + 1, v21, 2 * v23 + 2);
      *v21 = *(_QWORD *)L"\\??\\";
    }
  }
  else
  {
    ExFreePoolWithTag(v21, 0x74705041u);
    v21 = v28;
  }
  *v6 = v21;
  return 1;
}
