void __fastcall BlackScreenDiagnostics::GetCurrentProcessVersionInfo(_QWORD *a1, __int64 a2, __int64 a3)
{
  _WORD *v4; // rbx
  HANDLE CurrentProcess; // rax
  __int64 v6; // r8
  DWORD LastError; // eax
  __int64 v8; // rcx
  const WCHAR *v9; // rcx
  DWORD FileVersionInfoSizeW; // eax
  DWORD v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rdi
  char *v14; // rbx
  const WCHAR *v15; // rcx
  DWORD v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // r8
  unsigned __int64 v20; // rdx
  char *v21; // rdi
  __int64 v22; // rbx
  DWORD dwSize; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int puLen; // [rsp+44h] [rbp-BCh] BYREF
  LPVOID lpData[2]; // [rsp+48h] [rbp-B8h] BYREF
  char *v26; // [rsp+58h] [rbp-A8h]
  LPVOID lpBuffer; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v28; // [rsp+68h] [rbp-98h] BYREF
  LPCWSTR lptstrFilename[3]; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v30; // [rsp+88h] [rbp-78h]
  _OWORD Src[3]; // [rsp+90h] [rbp-70h] BYREF
  __int16 v32; // [rsp+C0h] [rbp-40h]
  WCHAR ExeName[264]; // [rsp+D0h] [rbp-30h] BYREF

  if ( a1[3] < 7uLL )
  {
    std::wstring::_Reallocate_for<_lambda_05cef1f6fdf474c9f3ed207deba0f73b_,unsigned short const *>(
      (__int64)a1,
      7uLL,
      a3,
      L"Unknown");
  }
  else
  {
    v4 = a1;
    if ( a1[3] >= 8uLL )
      v4 = (_WORD *)*a1;
    a1[2] = 7LL;
    memmove_0(v4, L"Unknown", 0xEuLL);
    v4[7] = 0;
  }
  dwSize = 260;
  memset_0(ExeName, 0, 0x208uLL);
  CurrentProcess = GetCurrentProcess();
  if ( !QueryFullProcessImageNameW(CurrentProcess, 0, ExeName, &dwSize) )
  {
    LastError = GetLastError();
    MicrosoftTelemetryAssertTriggeredArgs(v8, LastError, 0LL);
    return;
  }
  std::wstring::wstring(lptstrFilename, ExeName, v6);
  v9 = (const WCHAR *)lptstrFilename;
  if ( v30 >= 8 )
    v9 = lptstrFilename[0];
  FileVersionInfoSizeW = GetFileVersionInfoSizeW(v9, 0LL);
  if ( !FileVersionInfoSizeW )
  {
    v11 = GetLastError();
    MicrosoftTelemetryAssertTriggeredArgs(v12, v11, 0LL);
LABEL_12:
    std::wstring::~wstring((__int64)lptstrFilename);
    return;
  }
  *(_OWORD *)lpData = 0LL;
  v13 = FileVersionInfoSizeW;
  v26 = 0LL;
  lpData[0] = std::_Allocate<16,std::_Default_allocate_traits,0>(FileVersionInfoSizeW);
  v14 = (char *)lpData[0] + v13;
  v26 = (char *)lpData[0] + v13;
  memset_0(lpData[0], 0, (unsigned int)v13);
  lpData[1] = v14;
  v28 = 0LL;
  std::_Tidy_guard<std::vector<unsigned char>>::~_Tidy_guard<std::vector<unsigned char>>(&v28);
  v15 = (const WCHAR *)lptstrFilename;
  if ( v30 >= 8 )
    v15 = lptstrFilename[0];
  if ( !GetFileVersionInfoW(v15, 0, LODWORD(lpData[1]) - LODWORD(lpData[0]), lpData[0]) )
  {
    v16 = GetLastError();
    MicrosoftTelemetryAssertTriggeredArgs(v17, v16, 0LL);
LABEL_17:
    std::vector<unsigned char>::~vector<unsigned char>();
    goto LABEL_12;
  }
  lpBuffer = 0LL;
  puLen = 0;
  if ( !VerQueryValueW(lpData[0], L"\\", &lpBuffer, &puLen) )
  {
    MicrosoftTelemetryAssertTriggeredArgs(v18, 0LL, 0LL);
    goto LABEL_17;
  }
  memset(Src, 0, sizeof(Src));
  v32 = 0;
  StringCchPrintfW(
    (unsigned __int16 *)Src,
    0x19uLL,
    (size_t *)L"%hu.%hu.%hu.%hu",
    *((unsigned __int16 *)lpBuffer + 5),
    *((unsigned __int16 *)lpBuffer + 4),
    *((unsigned __int16 *)lpBuffer + 7),
    *((unsigned __int16 *)lpBuffer + 6));
  v20 = -1LL;
  do
    ++v20;
  while ( *((_WORD *)Src + v20) );
  if ( v20 > a1[3] )
  {
    std::wstring::_Reallocate_for<_lambda_05cef1f6fdf474c9f3ed207deba0f73b_,unsigned short const *>(
      (__int64)a1,
      v20,
      v19,
      Src);
  }
  else
  {
    v21 = (char *)a1;
    if ( a1[3] >= 8uLL )
      v21 = (char *)*a1;
    v22 = 2 * v20;
    a1[2] = v20;
    memmove_0(v21, Src, 2 * v20);
    *(_WORD *)&v21[v22] = 0;
  }
  std::vector<unsigned char>::_Tidy(lpData);
  if ( v30 >= 8 )
    std::_Deallocate<16,0>((char *)lptstrFilename[0], 2 * v30 + 2);
}
