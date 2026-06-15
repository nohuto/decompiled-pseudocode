/*
 * XREFs of sub_18004C564 @ 0x18004C564
 * Callers:
 *     sub_18004C264 @ 0x18004C264 (sub_18004C264.c)
 *     sub_180058660 @ 0x180058660 (sub_180058660.c)
 * Callees:
 *     sub_1800271DC @ 0x1800271DC (sub_1800271DC.c)
 *     sub_18004C628 @ 0x18004C628 (sub_18004C628.c)
 *     sub_180125838 @ 0x180125838 (sub_180125838.c)
 */

__int64 __fastcall sub_18004C564(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int128 v7; // [rsp+38h] [rbp-19h] BYREF
  _BYTE v8[24]; // [rsp+48h] [rbp-9h]
  __int64 v9; // [rsp+60h] [rbp+Fh] BYREF
  __int128 v10; // [rsp+68h] [rbp+17h]
  __int64 v11; // [rsp+78h] [rbp+27h]
  __int64 *v12; // [rsp+98h] [rbp+47h]

  if ( *(_DWORD *)(a1 + 188) || !a4 || a3 )
    return sub_180125838(a1 + 1768, *(_QWORD *)(a1 + 24));
  sub_1800271DC((unsigned __int64 *)a1, &v7);
  v9 = (__int64)off_180154D28;
  *(_OWORD *)&v8[8] = v7;
  *(_QWORD *)v8 = a1;
  v12 = &v9;
  v10 = *(_OWORD *)v8;
  v11 = *(_OWORD *)&_mm_unpackhi_pd(*(__m128d *)&v8[8], *(__m128d *)&v8[8]);
  return sub_18004C628((LPCRITICAL_SECTION)(a1 + 1768), a4, (__int64)&v9);
}
