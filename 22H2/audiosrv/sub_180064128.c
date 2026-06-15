/*
 * XREFs of sub_180064128 @ 0x180064128
 * Callers:
 *     sub_180063FC0 @ 0x180063FC0 (sub_180063FC0.c)
 * Callees:
 *     sub_1800641AC @ 0x1800641AC (sub_1800641AC.c)
 */

_QWORD *__fastcall sub_180064128(__int64 a1, _QWORD *a2)
{
  int v3; // eax
  int v4; // r9d
  int v5; // edx

  v3 = sub_1800641AC(10011581LL, 0LL);
  v4 = 0;
  *a2 = 0LL;
  if ( (v3 & 0xFFFFFF3F) == 2 )
    v4 = 64;
  v5 = ((v3 & 3) << 7) | ((v3 & 0x40) != 0 ? 0x800 : 0) | ((v3 & 0x80) != 0 ? 0x400 : 0);
  *(_DWORD *)a2 = v4 | v5 | ((v4 | (unsigned int)v5) >> 6) & 1;
  return a2;
}
