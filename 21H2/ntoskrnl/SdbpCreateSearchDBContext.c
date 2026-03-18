/*
 * XREFs of SdbpCreateSearchDBContext @ 0x14075B270
 * Callers:
 *     SdbGetDatabaseMatch @ 0x14075E2D8 (SdbGetDatabaseMatch.c)
 *     SdbpCheckKObject @ 0x140843160 (SdbpCheckKObject.c)
 * Callees:
 *     RtlStringCchCatW @ 0x1402D87F0 (RtlStringCchCatW.c)
 *     RtlStringCchCopyW @ 0x1402E0200 (RtlStringCchCopyW.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     AslLogCallPrintf @ 0x1406E0C3C (AslLogCallPrintf.c)
 *     AslAlloc @ 0x14075B444 (AslAlloc.c)
 *     AslPathSplit @ 0x14075CF70 (AslPathSplit.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SdbpCreateSearchDBContext(_QWORD *a1, const wchar_t **a2)
{
  unsigned int v4; // ebx
  wchar_t *v5; // rsi
  __int64 v6; // rcx
  const wchar_t *v7; // r14
  __int64 v8; // rax
  unsigned int v9; // r15d
  wchar_t *v10; // rbp
  __int64 v11; // rcx
  wchar_t *v12; // rax
  unsigned int v13; // r11d
  __int64 v15; // rax
  char *v16; // rdx
  __int64 v17; // r8
  _WORD *v18; // rcx
  __int16 v19; // ax
  _WORD *v20; // rax
  __int64 v21; // rcx
  _WORD *v22; // rax
  int v23; // [rsp+20h] [rbp-488h]
  wchar_t pszSrc[264]; // [rsp+40h] [rbp-468h] BYREF
  wchar_t v25[264]; // [rsp+250h] [rbp-258h] BYREF

  v4 = 0;
  memset(v25, 0, 0x208uLL);
  v5 = 0LL;
  memset(pszSrc, 0, 0x208uLL);
  if ( !a2 )
  {
    v15 = AslAlloc(v6, 4LL);
    v16 = (char *)L"." - v15;
    v10 = (wchar_t *)v15;
    v17 = 2LL;
    v18 = (_WORD *)v15;
    do
    {
      if ( v17 == -2147483644 )
        break;
      v19 = *(_WORD *)((char *)v18 + (_QWORD)v16);
      if ( !v19 )
        break;
      *v18++ = v19;
      --v17;
    }
    while ( v17 );
    v20 = v18 - 1;
    if ( v17 )
      v20 = v18;
    *v20 = 0;
    v5 = (wchar_t *)AslAlloc(v18, 2LL);
    *v5 = 0;
    v22 = (_WORD *)AslAlloc(v21, 2LL);
    *v22 = 0;
    a1[3] = v22;
    goto LABEL_9;
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
  if ( (int)AslPathSplit(v7, v10, v9, pszSrc, v23, v25) >= 0
    && (v12 = (wchar_t *)AslAlloc(v11, 520LL), (v5 = v12) != 0LL) )
  {
    if ( RtlStringCchCopyW(v12, 0x104uLL, pszSrc) >= 0 && RtlStringCchCatW(v5, v13, v25) >= 0 )
    {
LABEL_9:
      a1[7] = 0LL;
      a1[6] = 0LL;
      a1[9] = 0LL;
      a1[8] = 0LL;
      a1[11] = 0LL;
      v4 = 1;
      a1[1] = a2;
      a1[4] = v10;
      a1[5] = v5;
      return v4;
    }
  }
  else
  {
    AslLogCallPrintf(1LL);
  }
  ExFreePoolWithTag(v10, 0x74705041u);
  if ( v5 )
    ExFreePoolWithTag(v5, 0x74705041u);
  return v4;
}
