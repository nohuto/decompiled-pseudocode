/*
 * XREFs of sub_180140028 @ 0x180140028
 * Callers:
 *     sub_18013EE38 @ 0x18013EE38 (sub_18013EE38.c)
 *     sub_18013F094 @ 0x18013F094 (sub_18013F094.c)
 *     sub_18013F258 @ 0x18013F258 (sub_18013F258.c)
 *     sub_18013F38C @ 0x18013F38C (sub_18013F38C.c)
 *     sub_18013F570 @ 0x18013F570 (sub_18013F570.c)
 *     sub_18013F700 @ 0x18013F700 (sub_18013F700.c)
 *     sub_18013F7B0 @ 0x18013F7B0 (sub_18013F7B0.c)
 *     sub_18013F980 @ 0x18013F980 (sub_18013F980.c)
 *     sub_18013FAA0 @ 0x18013FAA0 (sub_18013FAA0.c)
 *     sub_18013FC70 @ 0x18013FC70 (sub_18013FC70.c)
 * Callees:
 *     sub_1800579A4 @ 0x1800579A4 (sub_1800579A4.c)
 *     sub_18013FE74 @ 0x18013FE74 (sub_18013FE74.c)
 */

char __fastcall sub_180140028(__int64 a1, unsigned int a2, _QWORD *a3)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  int v7; // [rsp+30h] [rbp-18h] BYREF
  __int64 v8; // [rsp+38h] [rbp-10h] BYREF
  unsigned int v9; // [rsp+68h] [rbp+20h] BYREF

  v4 = sub_18013FE74(a1, a2, &v7, &v9, &v8);
  if ( v4 )
  {
    v5 = *(_QWORD *)(v4 + 8);
    if ( *a3 != v5 )
      sub_1800579A4(a3, v5);
    LOBYTE(v4) = 1;
  }
  return v4;
}
