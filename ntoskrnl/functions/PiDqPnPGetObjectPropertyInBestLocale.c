__int64 __fastcall PiDqPnPGetObjectPropertyInBestLocale(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        NTSTRSAFE_PCWSTR a6,
        _OWORD *a7)
{
  __int64 v12; // rax
  __int64 result; // rax

  *a7 = 0LL;
  a7[1] = 0LL;
  a7[2] = 0LL;
  while ( *a6 )
  {
    result = PiDqPnPGetObjectProperty(a1, a2, a3, a4, a5, a6, (__int64)a7);
    if ( (int)result < 0 || *((_DWORD *)a7 + 8) )
      return result;
    PnpFreeDevProperty(a7, 1483763280LL);
    v12 = -1LL;
    do
      ++v12;
    while ( a6[v12] );
    a6 += v12 + 1;
  }
  return PiDqPnPGetObjectProperty(a1, a2, a3, a4, a5, 0LL, (__int64)a7);
}
