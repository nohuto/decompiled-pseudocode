__int64 __fastcall FontDriverQueryRoutine(__int64 a1, int a2, const wchar_t *a3, int a4)
{
  struct _LDEV *Driver; // rax
  struct PDEV *v9; // [rsp+70h] [rbp-238h] BYREF
  wchar_t Dst[264]; // [rsp+80h] [rbp-228h] BYREF

  wcscpy_s(Dst, 0x105uLL, L"\\SystemRoot\\System32\\");
  if ( (a4 & 0xFFFFFFFE) >= 0x1DC )
    return 0LL;
  if ( a2 != 1 )
    return 0LL;
  wcscat_s(Dst, 0x105uLL, a3);
  if ( !_wcsicmp(L"\\SystemRoot\\System32\\atmdrvr.dll", Dst) )
    return 0LL;
  if ( !_wcsicmp(L"\\SystemRoot\\System32\\atmfd.dll", Dst) )
    return 0LL;
  Driver = (struct _LDEV *)ldevLoadDriver(Dst, 6LL, 1LL);
  if ( !Driver )
    return 0LL;
  PDEVOBJ::PDEVOBJ((PDEVOBJ *)&v9, Driver, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0, 0, 0);
  if ( !v9 )
    return 0LL;
  *((_DWORD *)v9 + 10) |= 0x2000u;
  FntCacheHDEV(v9, 0);
  return 1LL;
}
