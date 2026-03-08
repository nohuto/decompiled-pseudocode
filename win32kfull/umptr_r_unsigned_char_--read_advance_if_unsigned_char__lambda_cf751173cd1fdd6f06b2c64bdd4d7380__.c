/*
 * XREFs of umptr_r_unsigned_char_::read_advance_if_unsigned_char__lambda_cf751173cd1fdd6f06b2c64bdd4d7380___ @ 0x1C02ACD78
 * Callers:
 *     ?GrePolyDraw@@YAHPEAUHDC__@@AEAV?$umptr_r@UtagPOINT@@@@AEAV?$umptr_r@E@@K@Z @ 0x1C02AD894 (-GrePolyDraw@@YAHPEAUHDC__@@AEAV-$umptr_r@UtagPOINT@@@@AEAV-$umptr_r@E@@K@Z.c)
 * Callees:
 *     ??$read@E@?$umptr_r@E@@QEBA_NPEAE_K_J@Z @ 0x1C02ACB60 (--$read@E@-$umptr_r@E@@QEBA_NPEAE_K_J@Z.c)
 *     ?ssizet_add_to_sizet@?$umptr@E@@SA_N_K_JPEA_K@Z @ 0x1C02ADE18 (-ssizet_add_to_sizet@-$umptr@E@@SA_N_K_JPEA_K@Z.c)
 */

char __fastcall umptr_r_unsigned_char_::read_advance_if_unsigned_char__lambda_cf751173cd1fdd6f06b2c64bdd4d7380___(
        __int64 a1,
        _BYTE *a2)
{
  __int64 v4; // rcx
  unsigned __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  if ( *(_QWORD *)(a1 + 8) == *(_QWORD *)(a1 + 16)
    || !umptr_r<unsigned char>::read<unsigned char>(a1, a2, 1uLL, 0LL)
    || (*a2 & 0xFE) != 2 )
  {
    return 0;
  }
  v4 = *(_QWORD *)(a1 + 16);
  v6 = 0LL;
  if ( (unsigned __int8)umptr<unsigned char>::ssizet_add_to_sizet(v4, 1LL, &v6) && v6 <= *(_QWORD *)(a1 + 8) )
    *(_QWORD *)(a1 + 16) = v6;
  else
    *(_BYTE *)(a1 + 24) = 1;
  return 1;
}
