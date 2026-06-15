/*
 * XREFs of sub_18011E44C @ 0x18011E44C
 * Callers:
 *     sub_180023540 @ 0x180023540 (sub_180023540.c)
 * Callees:
 *     sub_1800BB2C8 @ 0x1800BB2C8 (sub_1800BB2C8.c)
 *     sub_18011B780 @ 0x18011B780 (sub_18011B780.c)
 */

__int128 *__fastcall sub_18011E44C(__int64 a1, __int64 a2, _QWORD *a3)
{
  int v4; // eax
  __int128 *v5; // r11
  __int128 v6; // xmm0

  v4 = sub_18011B780((__int64 *)a1, a3);
  if ( v4 == -1 )
  {
    v6 = xmmword_18015B730;
  }
  else
  {
    if ( v4 < 0 || v4 >= *(_DWORD *)(a1 + 16) )
    {
      sub_1800BB2C8(0xC000008C);
      JUMPOUT(0x18011E49DLL);
    }
    v6 = *(_OWORD *)(*(_QWORD *)(a1 + 8) + 16LL * v4);
  }
  *v5 = v6;
  return v5;
}
