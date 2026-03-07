__int64 __fastcall LocalGetStringForControl(unsigned __int16 a1, int a2, wchar_t **a3)
{
  int v3; // r15d
  unsigned int v6; // edi
  int *v7; // rbx
  unsigned int i; // esi
  wchar_t *v9; // rax
  wchar_t Src[256]; // [rsp+20h] [rbp-238h] BYREF

  v3 = a1;
  v6 = 0;
  if ( !a3 )
    return 87LL;
  *a3 = 0LL;
  v7 = &dword_1400082FC;
  for ( i = 0; i < 6; ++i )
  {
    if ( (a2 & v7[1]) == a2 )
    {
      if ( *(v7 - 1) + v6 >= 0x100 )
        return 87LL;
      if ( (v3 & *v7) != 0 )
      {
        wcsncpy_s(&Src[v6], 256LL - v6, *(const wchar_t **)(v7 - 3), (unsigned int)*(v7 - 1));
        v6 += *(v7 - 1);
      }
    }
    v7 += 6;
  }
  if ( 2 * (unsigned __int64)v6 >= 0x200 )
    _report_rangecheckfailure();
  Src[v6] = 0;
  if ( !v6 )
    return 0LL;
  v9 = (wchar_t *)SddlpAlloc(2LL * (v6 + 1));
  *a3 = v9;
  if ( v9 )
  {
    wcscpy_s(v9, v6 + 1, Src);
    return 0LL;
  }
  return 8LL;
}
