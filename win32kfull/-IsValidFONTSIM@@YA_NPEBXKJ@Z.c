/*
 * XREFs of ?IsValidFONTSIM@@YA_NPEBXKJ@Z @ 0x1C02BA188
 * Callers:
 *     ?IsValidIFIMETRICS@@YA_NPEBU_IFIMETRICS@@K@Z @ 0x1C02BA1FC (-IsValidIFIMETRICS@@YA_NPEBU_IFIMETRICS@@K@Z.c)
 * Callees:
 *     ?IsValidFONTDIFF@@YA_NPEBXKJ@Z @ 0x1C02BA14C (-IsValidFONTDIFF@@YA_NPEBXKJ@Z.c)
 */

bool __fastcall IsValidFONTSIM(char *a1, unsigned int a2, int a3)
{
  bool result; // al
  int *v4; // r10
  unsigned int v5; // edx
  __int64 v6; // r10
  const void *v7; // r11
  unsigned int v8; // edx
  __int64 v9; // r10
  const void *v10; // r11

  result = 1;
  if ( a3 )
  {
    if ( a3 <= 0 )
      return 0;
    if ( a3 >= a2 )
      return 0;
    if ( a2 <= 0xC )
      return 0;
    if ( (unsigned int)a3 >= (unsigned __int64)a2 - 12 )
      return 0;
    v4 = (int *)&a1[a3];
    if ( ((unsigned __int8)v4 & 3) != 0
      || !IsValidFONTDIFF(a1, a2, *v4)
      || !IsValidFONTDIFF(v7, v5, *(_DWORD *)(v6 + 4))
      || !IsValidFONTDIFF(v10, v8, *(_DWORD *)(v9 + 8)) )
    {
      return 0;
    }
  }
  return result;
}
