/*
 * XREFs of AdtpBuildUlongString @ 0x140A589A8
 * Callers:
 *     AdtpPackageParameters @ 0x1403958B4 (AdtpPackageParameters.c)
 *     AdtpBuildRegistryValueString @ 0x140A57FA4 (AdtpBuildRegistryValueString.c)
 * Callees:
 *     _ultow @ 0x1403D38C0 (_ultow.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall AdtpBuildUlongString(unsigned int Value, __int64 a2, wchar_t **a3, __int64 a4, _DWORD *a5, char *a6)
{
  __int64 v10; // rax
  wchar_t *Pool2; // rbx
  char v12; // cl
  __int64 v13; // rax

  if ( !a3 && !a2 )
    return 3221225485LL;
  if ( a4 && a5 && (v10 = (unsigned int)*a5, (unsigned int)(v10 + 11) < 0x400) )
  {
    *a5 = v10 + 11;
    Pool2 = (wchar_t *)(a4 + 2 * v10);
    v12 = 0;
  }
  else
  {
    Pool2 = (wchar_t *)ExAllocatePool2(256LL, 22LL, 1799447891LL);
    if ( !Pool2 )
      return 3221225495LL;
    v12 = 1;
  }
  *a6 = v12;
  ultow(Value, Pool2, 10);
  v13 = -1LL;
  do
    ++v13;
  while ( Pool2[v13] );
  if ( a3 )
  {
    *a3 = Pool2;
    a3[1] = (wchar_t *)(unsigned int)(2 * v13 + 2);
  }
  else
  {
    *(_WORD *)(a2 + 2) = 22;
    *(_WORD *)a2 = 2 * v13;
    *(_QWORD *)(a2 + 8) = Pool2;
  }
  return 0LL;
}
