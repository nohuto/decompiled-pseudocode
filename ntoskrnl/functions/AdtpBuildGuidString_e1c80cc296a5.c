__int64 __fastcall AdtpBuildGuidString(unsigned int *a1, __int64 a2, __int64 a3, __int64 a4, int a5, _BYTE *a6)
{
  void *Pool2; // rbp
  __int64 result; // rax

  if ( !a2 )
    return 3221225485LL;
  Pool2 = (void *)ExAllocatePool2(256LL, 78LL, 1799447891LL);
  if ( !Pool2 )
    return 3221225495LL;
  *a6 = 1;
  if ( StringCchPrintfW(
         (STRSAFE_LPWSTR)Pool2,
         0x27uLL,
         L"{%08lx-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
         *a1,
         *((unsigned __int16 *)a1 + 2),
         *((unsigned __int16 *)a1 + 3),
         *((unsigned __int8 *)a1 + 8),
         *((unsigned __int8 *)a1 + 9),
         *((unsigned __int8 *)a1 + 10),
         *((unsigned __int8 *)a1 + 11),
         *((unsigned __int8 *)a1 + 12),
         *((unsigned __int8 *)a1 + 13),
         *((unsigned __int8 *)a1 + 14),
         *((unsigned __int8 *)a1 + 15)) < 0 )
  {
    if ( *a6 == 1 )
    {
      ExFreePoolWithTag(Pool2, 0);
      *a6 = 0;
    }
    return 3221225485LL;
  }
  *(_DWORD *)a2 = 5111884;
  result = 0LL;
  *(_QWORD *)(a2 + 8) = Pool2;
  return result;
}
