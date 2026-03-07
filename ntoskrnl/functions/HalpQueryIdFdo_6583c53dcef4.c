__int64 __fastcall HalpQueryIdFdo(__int64 a1, int a2, _QWORD *a3)
{
  int v4; // edx
  const wchar_t *v5; // rbx
  const wchar_t *v6; // rax
  unsigned int v7; // eax
  unsigned __int64 v8; // rdi
  _WORD *Pool2; // rax
  _WORD *v10; // rsi
  __int64 result; // rax

  if ( a2 && (v4 = a2 - 1) != 0 )
  {
    if ( v4 != 2 )
      return 3221225659LL;
    v5 = L"0";
    v7 = 4;
  }
  else
  {
    v5 = L"acpiapic";
    v6 = L"acpiapic";
    do
      ++v6;
    while ( *v6 );
    v7 = (_DWORD)v6 - (unsigned int)L"acpiapic" + 2;
  }
  v8 = v7;
  Pool2 = (_WORD *)ExAllocatePool2(256LL, v7 + 2LL, 1886150984LL);
  v10 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  memmove(Pool2, v5, (unsigned int)v8);
  result = 0LL;
  v10[v8 >> 1] = 0;
  *a3 = v10;
  return result;
}
