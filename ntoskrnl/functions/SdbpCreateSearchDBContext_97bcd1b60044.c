__int64 __fastcall SdbpCreateSearchDBContext(_QWORD *a1, const wchar_t **a2)
{
  unsigned int v4; // esi
  wchar_t *v5; // rdi
  __int64 v6; // rcx
  const wchar_t *v7; // r14
  __int64 v8; // rax
  unsigned int v9; // r15d
  wchar_t *v10; // rbp
  __int64 v11; // rcx
  wchar_t *v12; // rax
  __int64 v13; // rax
  char *v14; // rdx
  __int64 v15; // r8
  _WORD *v16; // rcx
  __int16 v17; // ax
  _WORD *v18; // rax
  __int64 v19; // rcx
  _WORD *v20; // rax
  int v22; // [rsp+20h] [rbp-488h]
  wchar_t pszSrc[264]; // [rsp+40h] [rbp-468h] BYREF
  wchar_t v24[264]; // [rsp+250h] [rbp-258h] BYREF

  v4 = 0;
  memset(v24, 0, 0x208uLL);
  v5 = 0LL;
  memset(pszSrc, 0, 0x208uLL);
  if ( !a2 )
  {
    v13 = AslAlloc(v6, 4LL);
    v14 = (char *)L"." - v13;
    v10 = (wchar_t *)v13;
    v15 = 2LL;
    v16 = (_WORD *)v13;
    do
    {
      if ( v15 == -2147483644 )
        break;
      v17 = *(_WORD *)((char *)v16 + (_QWORD)v14);
      if ( !v17 )
        break;
      *v16++ = v17;
      --v15;
    }
    while ( v15 );
    v18 = v16 - 1;
    if ( v15 )
      v18 = v16;
    *v18 = 0;
    v5 = (wchar_t *)AslAlloc(v16, 2LL);
    *v5 = 0;
    v20 = (_WORD *)AslAlloc(v19, 2LL);
    *v20 = 0;
    a1[3] = v20;
    goto LABEL_20;
  }
  v7 = *a2;
  v8 = -1LL;
  do
    ++v8;
  while ( v7[v8] );
  v9 = v8 + 1;
  v10 = (wchar_t *)AslAlloc(v6, 2LL * (unsigned int)(v8 + 1));
  if ( !v10 )
  {
    AslLogCallPrintf(1LL);
    return v4;
  }
  if ( (int)AslPathSplit(v7, v10, v9, pszSrc, v22, v24) < 0
    || (v12 = (wchar_t *)AslAlloc(v11, 520LL), (v5 = v12) == 0LL) )
  {
    AslLogCallPrintf(1LL);
    goto LABEL_11;
  }
  if ( RtlStringCchCopyW(v12, 0x104uLL, pszSrc) >= 0 && RtlStringCchCatW(v5, 0x104uLL, v24) >= 0 )
  {
LABEL_20:
    a1[1] = a2;
    v4 = 1;
    a1[7] = 0LL;
    a1[4] = v10;
    a1[5] = v5;
    a1[6] = 0LL;
    a1[9] = 0LL;
    a1[8] = 0LL;
    a1[11] = 0LL;
    a1[12] = 0LL;
    return v4;
  }
LABEL_11:
  ExFreePoolWithTag(v10, 0x74705041u);
  if ( v5 )
    ExFreePoolWithTag(v5, 0x74705041u);
  return v4;
}
