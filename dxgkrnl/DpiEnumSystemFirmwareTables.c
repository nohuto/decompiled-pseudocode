__int64 __fastcall DpiEnumSystemFirmwareTables(__int64 a1, int a2, unsigned int a3, void *a4, unsigned int *a5)
{
  __int64 v5; // r10

  if ( a1
    && (v5 = *(_QWORD *)(a1 + 64)) != 0
    && *(_DWORD *)(v5 + 16) == 1953656900
    && (unsigned int)(*(_DWORD *)(v5 + 20) - 2) <= 1 )
  {
    if ( *(_BYTE *)(v5 + 2695) )
    {
      *a5 = 0;
      return 3221226599LL;
    }
    else
    {
      return DpiQuerySystemFirmwareTables(0, a2, 0, a3, a4, a5);
    }
  }
  else
  {
    WdLogSingleEntry2(2LL, a1, -1073741585LL);
    return 3221225711LL;
  }
}
