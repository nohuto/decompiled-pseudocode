/*
 * XREFs of sub_18011B9E8 @ 0x18011B9E8
 * Callers:
 *     sub_18012B6B8 @ 0x18012B6B8 (sub_18012B6B8.c)
 * Callees:
 *     sub_180084C98 @ 0x180084C98 (sub_180084C98.c)
 *     sub_18011BAA8 @ 0x18011BAA8 (sub_18011BAA8.c)
 */

void __fastcall sub_18011B9E8(_QWORD *a1)
{
  unsigned __int64 v2; // rdx
  unsigned __int64 *v3; // rcx
  unsigned __int64 v4[3]; // [rsp+20h] [rbp-18h] BYREF

  sub_18011BAA8(a1 + 1);
  v2 = a1[4];
  v3 = (unsigned __int64 *)a1[3];
  v4[0] = a1[1];
  sub_180084C98(v3, v2, v4);
}
