/*
 * XREFs of AslpFileQueryVersionString @ 0x1406D48D0
 * Callers:
 *     AslpFileMakeStringVersionAttributes @ 0x1407A0A68 (AslpFileMakeStringVersionAttributes.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x140208BFC (RtlStringCchPrintfW.c)
 *     RtlStringCchCatW @ 0x140246580 (RtlStringCchCatW.c)
 *     RtlStringCchCopyW @ 0x1402470F0 (RtlStringCchCopyW.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     AslpFileVerQueryBlock @ 0x1406D5020 (AslpFileVerQueryBlock.c)
 *     AslpFileVerStringBlockGetValue @ 0x14076C2E4 (AslpFileVerStringBlockGetValue.c)
 *     AslLogCallPrintf @ 0x14079CA00 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslpFileQueryVersionString(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3,
        unsigned __int16 *a4,
        unsigned __int64 a5,
        NTSTRSAFE_PCWSTR pszSrc)
{
  __int64 v10; // rdi
  NTSTATUS v11; // ebx
  int v12; // eax
  const char *v14; // r9
  int v15; // r8d
  unsigned __int64 v16; // rdi
  int v17; // eax
  __int64 v18; // [rsp+20h] [rbp-E0h]
  __int64 v19; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v20; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v21; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v22; // [rsp+48h] [rbp-B8h] BYREF
  NTSTRSAFE_PCWSTR v23; // [rsp+50h] [rbp-B0h]
  wchar_t pszDest[128]; // [rsp+60h] [rbp-A0h] BYREF

  *a1 = 0LL;
  *a2 = 0LL;
  v23 = pszSrc;
  pszDest[0] = 0;
  v22 = 0LL;
  v10 = 0LL;
  v21 = 0LL;
  v20 = 0LL;
  v19 = 0LL;
  while ( 1 )
  {
    v11 = RtlStringCchCopyW(pszDest, 0x80uLL, off_1400080A0[v10]);
    if ( v11 < 0 )
    {
      v14 = "RtlStringCchCopyW failed [%x]";
      v15 = 2327;
      goto LABEL_24;
    }
    v11 = RtlStringCchCatW(pszDest, 0x80uLL, pszSrc);
    if ( v11 < 0 )
    {
      v14 = "RtlStringCchCatW failed [%x]";
      v15 = 2333;
LABEL_24:
      AslLogCallPrintf(1, (unsigned int)"AslpFileQueryVersionString", v15, (_DWORD)v14);
      return (unsigned int)v11;
    }
    v12 = AslpFileVerQueryBlock(a3, pszDest, &v20, &v19);
    v11 = v12;
    if ( v12 >= 0 )
      break;
    if ( v12 != -1073741275 )
    {
      v14 = "AslpFileVerQueryBlock failed [%x]";
      v15 = 2363;
      goto LABEL_24;
    }
    if ( (unsigned __int64)++v10 >= 4 )
      goto LABEL_11;
  }
  if ( (int)AslpFileVerStringBlockGetValue(&v22, &v21, v20, v19) >= 0 )
  {
LABEL_9:
    *a2 = v21;
    *a1 = v22;
    return 0LL;
  }
LABEL_11:
  if ( a4 )
  {
    v16 = 0LL;
    if ( a5 )
    {
      while ( 1 )
      {
        LODWORD(v18) = a4[1];
        v11 = RtlStringCchPrintfW(pszDest, 0x80uLL, L"\\StringFileInfo\\%04X%04X\\%s", *a4, v18, v23);
        if ( v11 < 0 )
        {
          v14 = "RtlStringCchPrintfW failed [%x]";
          v15 = 2381;
          goto LABEL_24;
        }
        v17 = AslpFileVerQueryBlock(a3, pszDest, &v20, &v19);
        v11 = v17;
        if ( v17 >= 0 )
          break;
        if ( v17 != -1073741275 )
        {
          v14 = "AslpFileVerQueryBlock failed [%x]";
          v15 = 2411;
          goto LABEL_24;
        }
        ++v16;
        a4 += 2;
        if ( v16 >= a5 )
          return 3221226021LL;
      }
      if ( (int)AslpFileVerStringBlockGetValue(&v22, &v21, v20, v19) < 0 )
        return 3221226021LL;
      goto LABEL_9;
    }
  }
  return 3221226021LL;
}
