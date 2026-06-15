/*
 * XREFs of sub_18005BB40 @ 0x18005BB40
 * Callers:
 *     sub_180021ED0 @ 0x180021ED0 (sub_180021ED0.c)
 *     sub_180037744 @ 0x180037744 (sub_180037744.c)
 *     sub_18005AAD0 @ 0x18005AAD0 (sub_18005AAD0.c)
 *     sub_18005B7B4 @ 0x18005B7B4 (sub_18005B7B4.c)
 *     sub_18006E5E0 @ 0x18006E5E0 (sub_18006E5E0.c)
 * Callees:
 *     sub_180022C90 @ 0x180022C90 (sub_180022C90.c)
 *     sub_1800233B0 @ 0x1800233B0 (sub_1800233B0.c)
 *     sub_1800234D0 @ 0x1800234D0 (sub_1800234D0.c)
 */

_BOOL8 __fastcall sub_18005BB40(__int64 a1, __int128 *a2, int a3)
{
  unsigned __int64 v3; // rsi
  BOOL v6; // edi
  __int64 v7; // rax
  __int128 v9; // [rsp+20h] [rbp-18h] BYREF

  v3 = a3;
  v6 = sub_1800234D0(a1) || (_DWORD)v3 == 3;
  v9 = *a2;
  v7 = sub_1800233B0((unsigned __int64 *)(a1 + 1672), v3);
  return sub_180022C90(v7, &v9, v6);
}
