/*
 * XREFs of sub_180037744 @ 0x180037744
 * Callers:
 *     sub_180023540 @ 0x180023540 (sub_180023540.c)
 *     sub_1800702D8 @ 0x1800702D8 (sub_1800702D8.c)
 *     sub_1800D76E0 @ 0x1800D76E0 (sub_1800D76E0.c)
 *     sub_18011D4F8 @ 0x18011D4F8 (sub_18011D4F8.c)
 *     sub_18011D640 @ 0x18011D640 (sub_18011D640.c)
 * Callees:
 *     sub_180020D20 @ 0x180020D20 (sub_180020D20.c)
 *     sub_1800229D0 @ 0x1800229D0 (sub_1800229D0.c)
 *     sub_180022F30 @ 0x180022F30 (sub_180022F30.c)
 *     sub_1800233B0 @ 0x1800233B0 (sub_1800233B0.c)
 *     sub_18005BB40 @ 0x18005BB40 (sub_18005BB40.c)
 */

__int64 __fastcall sub_180037744(_QWORD *a1, __int128 *a2, unsigned int a3, int a4, _QWORD *a5, _QWORD *a6, _QWORD *a7)
{
  unsigned int v7; // edi
  unsigned __int64 v8; // rbp
  BOOL v12; // ebx
  __int64 v13; // rax
  __int128 v15; // [rsp+60h] [rbp-38h] BYREF

  v7 = 0;
  v8 = a4;
  if ( a5 )
    *a5 = 0LL;
  if ( a6 )
    *a6 = 0LL;
  if ( a7 )
    *a7 = 0LL;
  if ( (unsigned int)sub_180022F30(a1, a4) )
  {
    if ( a3 || (v15 = *a2, (unsigned int)sub_18005BB40(a1, &v15, (unsigned int)v8)) )
    {
      v15 = *a2;
      v12 = sub_1800229D0((__int64)a1, v8, &v15) != 0;
      v15 = *a2;
      v13 = sub_1800233B0(a1 + 209, v8);
      return (unsigned int)sub_180020D20((__int64)a1, v13, 2, v12, &v15, a3, 0, v8, a5, a6, a7);
    }
  }
  return v7;
}
