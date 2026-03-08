/*
 * XREFs of AdtpBuildMessageString @ 0x14083DDC8
 * Callers:
 *     AdtpPackageParameters @ 0x1403958B4 (AdtpPackageParameters.c)
 * Callees:
 *     StringCchPrintfW @ 0x1402FAA78 (StringCchPrintfW.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AdtpBuildMessageString(unsigned int a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5, char *a6)
{
  __int64 v8; // rax
  void *Pool2; // rbx
  char v10; // al
  __int64 v11; // rax
  __int64 result; // rax

  if ( !a3 )
    return 3221225485LL;
  v8 = (unsigned int)*a5;
  if ( (unsigned int)(v8 + 13) >= 0x400 )
  {
    Pool2 = (void *)ExAllocatePool2(256LL, 26LL, 1799447891LL);
    if ( !Pool2 )
      return 3221225495LL;
    v10 = 1;
  }
  else
  {
    Pool2 = (void *)(a4 + 2 * v8);
    *a5 = v8 + 13;
    v10 = 0;
  }
  *a6 = v10;
  if ( StringCchPrintfW((STRSAFE_LPWSTR)Pool2, 0xDuLL, L"%%%%%u", a1) < 0 )
  {
    if ( *a6 == 1 )
    {
      ExFreePoolWithTag(Pool2, 0);
      *a6 = 0;
    }
    return 3221225485LL;
  }
  v11 = -1LL;
  do
    ++v11;
  while ( *((_WORD *)Pool2 + v11) );
  *(_QWORD *)a3 = Pool2;
  *(_DWORD *)(a3 + 8) = 2 * v11 + 2;
  result = 0LL;
  *(_DWORD *)(a3 + 12) = 0;
  return result;
}
