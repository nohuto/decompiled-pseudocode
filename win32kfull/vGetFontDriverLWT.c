__int64 __fastcall vGetFontDriverLWT(__int64 *a1, __int64 *a2)
{
  __int64 result; // rax
  __int64 v5; // [rsp+40h] [rbp+18h] BYREF

  v5 = 0LL;
  if ( (unsigned int)Win32FileInfo(L"\\SystemRoot\\system32\\win32kfull.sys", &v5, 0LL) )
    *a1 = v5;
  result = Win32FileInfo(L"\\SystemRoot\\system32\\fontdrvhost.exe", &v5, 0LL);
  if ( (_DWORD)result )
  {
    result = v5;
    *a2 = v5;
  }
  return result;
}
