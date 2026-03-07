__int64 __fastcall AdtpBuildHexInt64String(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, int a5, _BYTE *a6)
{
  wchar_t *Pool2; // rax
  wchar_t *v9; // rbx
  __int64 result; // rax
  __int64 v11; // rax

  Pool2 = (wchar_t *)ExAllocatePool2(256LL, 38LL, 1799447891LL);
  v9 = Pool2;
  if ( !Pool2 )
    return 3221225495LL;
  *a6 = 1;
  if ( StringCchPrintfW(Pool2, 0x13uLL, L"0x%I64X", *a1) >= 0 )
  {
    v11 = -1LL;
    do
      ++v11;
    while ( v9[v11] );
    *(_WORD *)(a2 + 2) = 38;
    *(_WORD *)a2 = 2 * v11;
    result = 0LL;
    *(_QWORD *)(a2 + 8) = v9;
  }
  else
  {
    if ( *a6 == 1 )
    {
      ExFreePoolWithTag(v9, 0);
      *a6 = 0;
    }
    return 3221225485LL;
  }
  return result;
}
