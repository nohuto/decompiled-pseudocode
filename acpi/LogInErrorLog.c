void __fastcall LogInErrorLog(char a1, unsigned int a2, unsigned int a3)
{
  __int64 v3; // r9
  int v5; // eax
  int v6; // edx
  __int16 *v7[3]; // [rsp+30h] [rbp-78h] BYREF
  wchar_t pszDest[12]; // [rsp+48h] [rbp-60h] BYREF
  wchar_t v9[24]; // [rsp+60h] [rbp-48h] BYREF

  v3 = a2;
  if ( gpBadIOErrorLogDoneList )
  {
    v5 = *((_DWORD *)gpBadIOErrorLogDoneList + a3);
    v6 = 2 - (a1 != 0);
    if ( (v5 & v6) == 0 )
    {
      *((_DWORD *)gpBadIOErrorLogDoneList + a3) = v6 | v5;
      RtlStringCchPrintfW(pszDest, 0xBuLL, L"0x%x", v3);
      RtlStringCchPrintfW(v9, 0x18uLL, L"0x%x - 0x%x");
      v7[0] = L"AMLI";
      v7[1] = (__int16 *)pszDest;
      v7[2] = (__int16 *)v9;
      ACPIWriteEventLogEntry(-(a1 != 0) - 1073414139, v7, 3u);
    }
  }
}
