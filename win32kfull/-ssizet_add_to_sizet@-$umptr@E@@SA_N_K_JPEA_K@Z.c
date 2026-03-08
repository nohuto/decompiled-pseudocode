/*
 * XREFs of ?ssizet_add_to_sizet@?$umptr@E@@SA_N_K_JPEA_K@Z @ 0x1C02ADE18
 * Callers:
 *     ??$read@E@?$umptr_r@E@@QEBA_NPEAE_K_J@Z @ 0x1C02ACB60 (--$read@E@-$umptr_r@E@@QEBA_NPEAE_K_J@Z.c)
 *     ??$read@U_POINTL@@@?$umptr_r@UtagPOINT@@@@QEBA_NPEAU_POINTL@@_K_J@Z @ 0x1C02ACC40 (--$read@U_POINTL@@@-$umptr_r@UtagPOINT@@@@QEBA_NPEAU_POINTL@@_K_J@Z.c)
 *     ??$read_advance@E@?$umptr_r@E@@QEAA_NPEAE@Z @ 0x1C02ACD18 (--$read_advance@E@-$umptr_r@E@@QEAA_NPEAE@Z.c)
 *     umptr_r_unsigned_char_::read_advance_if_unsigned_char__lambda_cf751173cd1fdd6f06b2c64bdd4d7380___ @ 0x1C02ACD78 (umptr_r_unsigned_char_--read_advance_if_unsigned_char__lambda_cf751173cd1fdd6f06b2c64bdd4d7380__.c)
 *     umptr_r_unsigned_char_::read_advance_if_unsigned_char__lambda_dbbf8546bc340ff511f2cff186eaaf73___ @ 0x1C02ACDF4 (umptr_r_unsigned_char_--read_advance_if_unsigned_char__lambda_dbbf8546bc340ff511f2cff186eaaf73__.c)
 *     ?GrePolyDraw@@YAHPEAUHDC__@@AEAV?$umptr_r@UtagPOINT@@@@AEAV?$umptr_r@E@@K@Z @ 0x1C02AD894 (-GrePolyDraw@@YAHPEAUHDC__@@AEAV-$umptr_r@UtagPOINT@@@@AEAV-$umptr_r@E@@K@Z.c)
 * Callees:
 *     LongLongAdd @ 0x1C02AF930 (LongLongAdd.c)
 */

char __fastcall umptr<unsigned char>::ssizet_add_to_sizet(unsigned __int64 a1, __int64 a2)
{
  __int64 *v2; // r10
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0LL;
  if ( a1 > 0x7FFFFFFFFFFFFFFFLL || (int)LongLongAdd(a1, a2, &v4) < 0 || v4 < 0 )
    return 0;
  *v2 = v4;
  return 1;
}
