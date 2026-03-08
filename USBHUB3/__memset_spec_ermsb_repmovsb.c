/*
 * XREFs of __memset_spec_ermsb_repmovsb @ 0x1C0045340
 * Callers:
 *     __memset_spec_ermsb @ 0x1C0045200 (__memset_spec_ermsb.c)
 * Callees:
 *     <none>
 */

void __fastcall _memset_spec_ermsb_repmovsb(_OWORD *a1, __int64 a2, __int64 a3)
{
  __int128 v3; // xmm0

  *a1 = v3;
  a1[1] = v3;
  a1[2] = v3;
  a1[3] = v3;
  memset(
    (void *)((unsigned __int64)(a1 + 4) & 0xFFFFFFFFFFFFFFC0uLL),
    v3,
    (unsigned __int64)a1 + a3 - ((unsigned __int64)(a1 + 4) & 0xFFFFFFFFFFFFFFC0uLL));
}
