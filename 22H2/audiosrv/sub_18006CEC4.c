/*
 * XREFs of sub_18006CEC4 @ 0x18006CEC4
 * Callers:
 *     sub_18006CDF4 @ 0x18006CDF4 (sub_18006CDF4.c)
 * Callees:
 *     sub_1800641AC @ 0x1800641AC (sub_1800641AC.c)
 */

_QWORD *__fastcall sub_18006CEC4(__int64 a1, _QWORD *a2)
{
  unsigned int v3; // eax
  int v4; // r9d
  int v5; // r10d
  int v6; // edx

  v3 = (unsigned int)sub_1800641AC();
  v4 = 0;
  *a2 = 0LL;
  v5 = 64;
  if ( (v3 & 0xFFFFFF3F) != 0 )
  {
    if ( (v3 & 0xFFFFFF3F) == 2 )
      v4 = 64;
    v5 = v4;
  }
  v6 = ((v3 & 3) << 7) | ((v3 & 0x80) != 0 ? 0x400 : 0) | ((v3 & 0x40) != 0 ? 0x800 : 0);
  *(_DWORD *)a2 = v5 | v6 | ((v5 | (unsigned int)v6) >> 6) & 1;
  return a2;
}
