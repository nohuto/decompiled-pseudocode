__int64 __fastcall AtmDrvFontManagementRedirector(__int64 a1, __int64 a2, int a3, int a4, int *a5, int a6, __int64 a7)
{
  unsigned int v7; // ecx
  int v11; // eax

  v7 = 0;
  if ( a3 == 8 )
  {
    v11 = *a5;
    if ( *a5 == 8 || v11 == 256 || (unsigned int)(v11 - 9473) <= 0x13 )
      return 1;
  }
  else if ( a3 == 256 || (unsigned int)(a3 - 9473) <= 0x13 )
  {
    UmfdHostLifeTimeManager::EnsureUmfdHost(0LL);
    return UmfdFontManagement(0, 0, a3, a4, (__int64)a5, a6, a7);
  }
  return v7;
}
