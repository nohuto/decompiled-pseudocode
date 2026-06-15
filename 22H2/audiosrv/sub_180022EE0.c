/*
 * XREFs of sub_180022EE0 @ 0x180022EE0
 * Callers:
 *     sub_18001E300 @ 0x18001E300 (sub_18001E300.c)
 *     sub_180020B94 @ 0x180020B94 (sub_180020B94.c)
 *     sub_180020F10 @ 0x180020F10 (sub_180020F10.c)
 *     sub_180021FB0 @ 0x180021FB0 (sub_180021FB0.c)
 *     sub_180022C90 @ 0x180022C90 (sub_180022C90.c)
 *     sub_180022D60 @ 0x180022D60 (sub_180022D60.c)
 *     sub_180022DE0 @ 0x180022DE0 (sub_180022DE0.c)
 *     sub_180023540 @ 0x180023540 (sub_180023540.c)
 *     sub_1800271DC @ 0x1800271DC (sub_1800271DC.c)
 *     sub_18002732C @ 0x18002732C (sub_18002732C.c)
 *     sub_180054760 @ 0x180054760 (sub_180054760.c)
 *     sub_1800592F4 @ 0x1800592F4 (sub_1800592F4.c)
 *     sub_180059458 @ 0x180059458 (sub_180059458.c)
 *     sub_180059A8C @ 0x180059A8C (sub_180059A8C.c)
 *     sub_18005A334 @ 0x18005A334 (sub_18005A334.c)
 *     sub_18005AC34 @ 0x18005AC34 (sub_18005AC34.c)
 *     sub_18005B7B4 @ 0x18005B7B4 (sub_18005B7B4.c)
 *     sub_18005B9E8 @ 0x18005B9E8 (sub_18005B9E8.c)
 *     sub_18005BBBC @ 0x18005BBBC (sub_18005BBBC.c)
 *     sub_180119090 @ 0x180119090 (sub_180119090.c)
 *     sub_1801191A4 @ 0x1801191A4 (sub_1801191A4.c)
 *     sub_1801195CC @ 0x1801195CC (sub_1801195CC.c)
 *     sub_180119954 @ 0x180119954 (sub_180119954.c)
 *     sub_18011D9D4 @ 0x18011D9D4 (sub_18011D9D4.c)
 *     sub_18011E9F8 @ 0x18011E9F8 (sub_18011E9F8.c)
 *     sub_180123190 @ 0x180123190 (sub_180123190.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180022EE0(__int64 *a1, _QWORD *a2)
{
  int v2; // eax
  unsigned int v3; // r8d
  __int64 v4; // r9
  __int64 v5; // rcx

  v2 = *((_DWORD *)a1 + 2);
  v3 = 0;
  if ( v2 <= 0 )
    return 0xFFFFFFFFLL;
  v4 = *a1;
  while ( 1 )
  {
    v5 = *(_QWORD *)(v4 + 16LL * (int)v3) - *a2;
    if ( !v5 )
      v5 = *(_QWORD *)(v4 + 16LL * (int)v3 + 8) - a2[1];
    if ( !v5 )
      break;
    if ( (int)++v3 >= v2 )
      return 0xFFFFFFFFLL;
  }
  return v3;
}
