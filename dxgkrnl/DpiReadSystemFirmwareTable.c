/*
 * XREFs of DpiReadSystemFirmwareTable @ 0x1C0215340
 * Callers:
 *     <none>
 * Callees:
 *     DpiQuerySystemFirmwareTables @ 0x1C02153B0 (DpiQuerySystemFirmwareTables.c)
 */

__int64 __fastcall DpiReadSystemFirmwareTable(__int64 a1, int a2, int a3, int a4, void *a5, _DWORD *a6)
{
  __int64 v6; // r10

  if ( a1
    && (v6 = *(_QWORD *)(a1 + 64)) != 0
    && *(_DWORD *)(v6 + 16) == 1953656900
    && (unsigned int)(*(_DWORD *)(v6 + 20) - 2) <= 1 )
  {
    if ( *(_BYTE *)(v6 + 2695) )
    {
      *a6 = 0;
      return 3221226599LL;
    }
    else
    {
      return DpiQuerySystemFirmwareTables(1, a2, a3, a4, a5, (__int64)a6);
    }
  }
  else
  {
    WdLogSingleEntry2(2LL, a1, -1073741585LL);
    return 3221225711LL;
  }
}
