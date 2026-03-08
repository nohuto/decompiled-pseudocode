/*
 * XREFs of AslEnvGetSysNativeDirPathForGuestBuf @ 0x140A54564
 * Callers:
 *     SdbpGetPathAppraiser @ 0x140A500D0 (SdbpGetPathAppraiser.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x1402470F0 (RtlStringCchCopyW.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     AslLogCallPrintf @ 0x14079CA00 (AslLogCallPrintf.c)
 *     AslPathCombine @ 0x140A524A8 (AslPathCombine.c)
 *     AslEnvGetSystem32DirPathBuf @ 0x140A547B8 (AslEnvGetSystem32DirPathBuf.c)
 */

__int64 __fastcall AslEnvGetSysNativeDirPathForGuestBuf(
        NTSTRSAFE_PWSTR pszDest,
        size_t cchDest,
        _WORD *a3,
        __int16 a4,
        _WORD *a5)
{
  __int64 v8; // r8
  wchar_t *v9; // rcx
  wchar_t v10; // ax
  wchar_t *v11; // rax
  unsigned int v12; // edi
  __int64 v13; // r8
  wchar_t *v14; // rax
  __int64 v15; // r9
  signed int v16; // eax
  wchar_t *v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rax
  char *v20; // r8
  wchar_t v21; // r9
  wchar_t *v22; // rax
  int v23; // ebx
  wchar_t pszSrc[64]; // [rsp+30h] [rbp-B8h] BYREF

  *pszDest = 0;
  if ( a5 && *a5 != a4 )
  {
    memset(pszSrc, 0, sizeof(pszSrc));
    v8 = 64LL;
    v9 = pszSrc;
    do
    {
      if ( v8 == -2147483582 )
        break;
      v10 = *(wchar_t *)((char *)v9 + (char *)L"\\SystemRoot" - (char *)pszSrc);
      if ( !v10 )
        break;
      *v9++ = v10;
      --v8;
    }
    while ( v8 );
    v11 = v9 - 1;
    if ( v8 )
      v11 = v9;
    *v11 = 0;
    v12 = v8 == 0 ? 0x80000005 : 0;
    if ( !v8 )
      goto LABEL_23;
    v13 = 64LL;
    v14 = pszSrc;
    do
    {
      if ( !*v14 )
        break;
      ++v14;
      --v13;
    }
    while ( v13 );
    v12 = -1073741811;
    v15 = (64 - v13) & -(__int64)(v13 != 0);
    v16 = v13 == 0 ? 0xC000000D : 0;
    if ( v13 )
    {
      v17 = &pszSrc[v15];
      v18 = 64 - v15;
      if ( 64 != v15 )
      {
        v19 = 2147483646LL;
        v20 = (char *)((char *)L"\\SysNative" - (char *)v17);
        do
        {
          if ( !v19 )
            break;
          v21 = *(wchar_t *)((char *)v17 + (_QWORD)v20);
          if ( !v21 )
            break;
          *v17 = v21;
          --v19;
          ++v17;
          --v18;
        }
        while ( v18 );
      }
      v22 = v17 - 1;
      if ( v18 )
        v22 = v17;
      *v22 = 0;
      v16 = v18 == 0 ? 0x80000005 : 0;
    }
    if ( v16 < 0 )
    {
LABEL_23:
      v23 = v12;
      AslLogCallPrintf(1LL);
LABEL_29:
      AslLogCallPrintf(1LL);
      return (unsigned int)v23;
    }
    if ( a3 && *a3 )
    {
      v23 = AslPathCombine(pszSrc, (__int64)a3, pszDest, cchDest);
      if ( v23 < 0 )
        goto LABEL_29;
    }
    else
    {
      v23 = RtlStringCchCopyW(pszDest, cchDest, pszSrc);
      if ( v23 < 0 )
        goto LABEL_29;
    }
    return (unsigned int)v23;
  }
  return AslEnvGetSystem32DirPathBuf(pszDest, cchDest, (__int64)a5);
}
