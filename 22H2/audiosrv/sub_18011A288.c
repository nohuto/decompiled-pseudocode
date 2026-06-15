/*
 * XREFs of sub_18011A288 @ 0x18011A288
 * Callers:
 *     sub_18006E5E0 @ 0x18006E5E0 (sub_18006E5E0.c)
 *     sub_1800DFF60 @ 0x1800DFF60 (sub_1800DFF60.c)
 * Callees:
 *     sub_1800229D0 @ 0x1800229D0 (sub_1800229D0.c)
 *     sub_180055010 @ 0x180055010 (sub_180055010.c)
 */

bool __fastcall sub_18011A288(__int64 a1, int a2)
{
  unsigned __int64 v2; // rdi
  char v4; // bl
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF

  v2 = a2;
  v6 = xmmword_18015B798;
  v4 = 0;
  if ( (unsigned int)sub_1800229D0(a1, a2, &v6) )
    return *(_DWORD *)sub_180055010((unsigned __int64 *)(a1 + 1704), v2) == 0;
  return v4;
}
