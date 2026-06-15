/*
 * XREFs of sub_18004BA04 @ 0x18004BA04
 * Callers:
 *     sub_18004B708 @ 0x18004B708 (sub_18004B708.c)
 *     sub_180072420 @ 0x180072420 (sub_180072420.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18004BA04(__int16 a1, unsigned __int16 a2, __int16 a3, int a4, __int64 a5)
{
  unsigned __int16 v5; // cx
  __int64 result; // rax

  *(_WORD *)a5 = -2;
  *(_WORD *)(a5 + 16) = 22;
  *(_DWORD *)(a5 + 4) = a4;
  *(_WORD *)(a5 + 14) = a2;
  *(_WORD *)(a5 + 18) = a3;
  *(_WORD *)(a5 + 2) = a1;
  *(_OWORD *)(a5 + 24) = xmmword_18015B710;
  switch ( a1 )
  {
    case 2:
      *(_DWORD *)(a5 + 20) = 3;
      break;
    case 6:
      *(_DWORD *)(a5 + 20) = 1551;
      break;
    case 8:
      *(_DWORD *)(a5 + 20) = 1599;
      break;
  }
  v5 = a1 * (a2 >> 3);
  *(_WORD *)(a5 + 12) = v5;
  result = a4 * (unsigned int)v5;
  *(_DWORD *)(a5 + 8) = result;
  return result;
}
