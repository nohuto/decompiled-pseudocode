/*
 * XREFs of sub_1800485D0 @ 0x1800485D0
 * Callers:
 *     sub_180048E60 @ 0x180048E60 (sub_180048E60.c)
 *     sub_18011D4F8 @ 0x18011D4F8 (sub_18011D4F8.c)
 *     sub_18011D640 @ 0x18011D640 (sub_18011D640.c)
 * Callees:
 *     sub_180020D20 @ 0x180020D20 (sub_180020D20.c)
 *     sub_180022D60 @ 0x180022D60 (sub_180022D60.c)
 *     sub_180022F30 @ 0x180022F30 (sub_180022F30.c)
 *     sub_180023050 @ 0x180023050 (sub_180023050.c)
 *     sub_1800233B0 @ 0x1800233B0 (sub_1800233B0.c)
 */

__int64 __fastcall sub_1800485D0(_QWORD *a1, unsigned int a2, int a3, _QWORD *a4, _QWORD *a5, _QWORD *a6)
{
  unsigned int v6; // ebx
  unsigned __int64 v8; // rbp
  __int64 v10; // rax
  __int64 v11; // rax
  __int128 v13; // [rsp+60h] [rbp-48h] BYREF

  v6 = 0;
  v8 = a3;
  if ( a5 )
    *a5 = 0LL;
  if ( a6 )
    *a6 = 0LL;
  if ( (unsigned int)sub_180022F30(a1, a3) )
  {
    if ( a2
      || (v10 = sub_1800233B0(a1 + 211, v8), v13 = xmmword_18015B810,
                                             sub_180022D60(v10, &v13, *(_BYTE *)(v10 + 52) == 0))
      && *(_DWORD *)(sub_180023050((__int64)a1, v8, 0) + 8) <= 1u )
    {
      v13 = xmmword_18015B810;
      v11 = sub_1800233B0(a1 + 211, v8);
      return (unsigned int)sub_180020D20((__int64)a1, v11, 3, 1, &v13, a2, 0, v8, a4, a5, a6);
    }
  }
  return v6;
}
