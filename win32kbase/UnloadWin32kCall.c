__int64 UnloadWin32kCall()
{
  __int64 result; // rax
  __int64 v1; // rdi
  __int64 v2; // rsi
  __int64 v3; // rbx
  void *v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0LL;
  result = (__int64)SetWin32kSilo(&v4);
  v1 = result;
  if ( off_1C02C9448 )
  {
    v2 = 0LL;
    v3 = 0LL;
    do
    {
      if ( (*(_QWORD **)((char *)&Win32kApiSetTable + v3 + 8))[5] )
      {
        MmUnloadSystemImage();
        (*(_QWORD **)((char *)&Win32kApiSetTable + v3 + 8))[5] = 0LL;
      }
      ++v2;
      result = 3 * v2;
      v3 = 24 * v2;
    }
    while ( *(&Win32kApiSetTable + 3 * v2 + 1) );
  }
  if ( v1 )
    return PsDetachSiloFromCurrentThread(v1);
  return result;
}
