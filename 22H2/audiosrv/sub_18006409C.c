/*
 * XREFs of sub_18006409C @ 0x18006409C
 * Callers:
 *     sub_180063E28 @ 0x180063E28 (sub_180063E28.c)
 * Callees:
 *     sub_1800641AC @ 0x1800641AC (sub_1800641AC.c)
 */

_QWORD *__fastcall sub_18006409C(__int64 a1, _QWORD *a2)
{
  int v3; // eax
  int v4; // r9d
  int v5; // r10d
  int v6; // edx

  v3 = sub_1800641AC(16046125LL, 1LL);
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
