/*
 * XREFs of sub_180060BA8 @ 0x180060BA8
 * Callers:
 *     sub_18006034C @ 0x18006034C (sub_18006034C.c)
 * Callees:
 *     memset @ 0x18006AB8C (memset.c)
 */

__int64 __fastcall sub_180060BA8(_OWORD *a1, unsigned __int16 *a2)
{
  __int64 result; // rax

  memset(a1, 0, 0x40uLL);
  *(_DWORD *)a1 = 64;
  result = 65534LL;
  a1[1] = xmmword_180160A08;
  a1[3] = xmmword_1801609F8;
  if ( *a2 == 0xFFFE )
  {
    a1[2] = *(_OWORD *)(a2 + 12);
  }
  else
  {
    a1[2] = xmmword_18015B740;
    result = *a2;
    *((_DWORD *)a1 + 8) = result;
  }
  return result;
}
