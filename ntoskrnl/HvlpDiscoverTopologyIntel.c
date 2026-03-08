/*
 * XREFs of HvlpDiscoverTopologyIntel @ 0x140B8FFB0
 * Callers:
 *     HvlpDiscoverTopologyWorker @ 0x14093E438 (HvlpDiscoverTopologyWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     HvlpLpCpuid @ 0x14093E4E0 (HvlpLpCpuid.c)
 */

__int64 __fastcall HvlpDiscoverTopologyIntel(ULONG a1, int a2, _DWORD *a3, _DWORD *a4)
{
  LONG v7; // edi
  __int64 result; // rax
  unsigned int v9; // ecx
  unsigned __int8 v10; // di
  unsigned int v11; // ecx
  unsigned __int8 v12; // bl
  __int128 v13; // [rsp+28h] [rbp-18h] BYREF

  *a4 = a2;
  *a3 = a2;
  v13 = 0LL;
  HvlpLpCpuid(a1, 0, 0, (PHYSICAL_ADDRESS *)&v13);
  if ( (unsigned int)v13 < 0xB )
  {
    if ( (unsigned int)v13 < 4 )
    {
      v10 = 1;
      goto LABEL_13;
    }
LABEL_11:
    HvlpLpCpuid(a1, 4u, 0, (PHYSICAL_ADDRESS *)&v13);
    _BitScanReverse(&v9, 2 * ((unsigned int)v13 >> 26) + 1);
    v10 = 1 << v9;
LABEL_13:
    HvlpLpCpuid(a1, 1u, 0, (PHYSICAL_ADDRESS *)&v13);
    if ( (HIDWORD(v13) & 0x10000000) != 0 )
    {
      _BitScanReverse(&v11, 2 * BYTE6(v13) - 1);
      v12 = 1 << v11;
    }
    else
    {
      v12 = v10;
    }
    *a4 /= (unsigned int)(unsigned __int8)(v12 / v10);
    result = *a3 / (unsigned int)v12;
    *a3 = result;
    return result;
  }
  HvlpLpCpuid(a1, 0xBu, 0, (PHYSICAL_ADDRESS *)&v13);
  if ( !DWORD1(v13) )
    goto LABEL_11;
  v7 = 0;
  do
  {
    HvlpLpCpuid(a1, 0xBu, v7++, (PHYSICAL_ADDRESS *)&v13);
    result = (unsigned int)((DWORD2(v13) >> 8) - 1);
    if ( DWORD2(v13) >> 8 == 1 )
    {
      *a4 >>= v13 & 0x1F;
    }
    else if ( DWORD2(v13) >> 8 == 2 )
    {
      *a3 >>= v13 & 0x1F;
    }
  }
  while ( WORD2(v13) );
  return result;
}
