/*
 * XREFs of ?SpiGetStickyKeys@@YAHKPEAX@Z @ 0x1C009CEBC
 * Callers:
 *     xxxSystemParametersInfo @ 0x1C009C980 (xxxSystemParametersInfo.c)
 * Callees:
 *     memmove @ 0x1C00E1EC0 (memmove.c)
 */

__int64 __fastcall SpiGetStickyKeys(int a1, _WORD *a2)
{
  _DWORD *v3; // rbx
  __int64 result; // rax

  if ( (a1 & 0xFFFFFFF7) != 0 || !a2 || *(_DWORD *)a2 != 8 )
    return 0LL;
  v3 = a2 + 2;
  memmove(a2 + 2, &dword_1C02D1594, 4uLL);
  a2[3] = 0;
  *v3 |= (unsigned __int8)gLatchBits << 24;
  result = 1LL;
  *v3 |= (unsigned __int8)gLockBits << 16;
  return result;
}
