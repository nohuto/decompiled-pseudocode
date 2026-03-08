/*
 * XREFs of ??$read@E@?$umptr_r@E@@QEBA_NPEAE_K_J@Z @ 0x1C02ACB60
 * Callers:
 *     ?GreCreateDIBitmapReal@@YAPEAUHBITMAP__@@PEAUHDC__@@KAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KIPEAXK3K_KPEAPEAX@Z @ 0x1C00906B0 (-GreCreateDIBitmapReal@@YAPEAUHBITMAP__@@PEAUHDC__@@KAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@KIPEAXK.c)
 *     ??$read_advance@E@?$umptr_r@E@@QEAA_NPEAE@Z @ 0x1C02ACD18 (--$read_advance@E@-$umptr_r@E@@QEAA_NPEAE@Z.c)
 *     umptr_r_unsigned_char_::read_advance_if_unsigned_char__lambda_cf751173cd1fdd6f06b2c64bdd4d7380___ @ 0x1C02ACD78 (umptr_r_unsigned_char_--read_advance_if_unsigned_char__lambda_cf751173cd1fdd6f06b2c64bdd4d7380__.c)
 *     umptr_r_unsigned_char_::read_advance_if_unsigned_char__lambda_dbbf8546bc340ff511f2cff186eaaf73___ @ 0x1C02ACDF4 (umptr_r_unsigned_char_--read_advance_if_unsigned_char__lambda_dbbf8546bc340ff511f2cff186eaaf73__.c)
 *     ?GrePolyDraw@@YAHPEAUHDC__@@AEAV?$umptr_r@UtagPOINT@@@@AEAV?$umptr_r@E@@K@Z @ 0x1C02AD894 (-GrePolyDraw@@YAHPEAUHDC__@@AEAV-$umptr_r@UtagPOINT@@@@AEAV-$umptr_r@E@@K@Z.c)
 * Callees:
 *     memmove @ 0x1C0130B80 (memmove.c)
 *     ULongLongMult @ 0x1C014D830 (ULongLongMult.c)
 *     ?ssizet_add_to_sizet@?$umptr@E@@SA_N_K_JPEA_K@Z @ 0x1C02ADE18 (-ssizet_add_to_sizet@-$umptr@E@@SA_N_K_JPEA_K@Z.c)
 */

char __fastcall umptr_r<unsigned char>::read<unsigned char>(__int64 a1, void *a2, ULONGLONG a3, __int64 a4)
{
  __int64 v6; // r11
  unsigned __int64 v7; // r10
  unsigned __int64 v10; // [rsp+40h] [rbp+18h] BYREF
  ULONGLONG pullResult; // [rsp+48h] [rbp+20h] BYREF

  v6 = a1;
  v7 = *(_QWORD *)(a1 + 16);
  if ( a4 )
  {
    v10 = 0LL;
    if ( !(unsigned __int8)umptr<unsigned char>::ssizet_add_to_sizet(v7, a4, &v10) || v10 > *(_QWORD *)(v6 + 8) )
      *(_BYTE *)(v6 + 24) = 1;
    v7 = v10;
  }
  pullResult = 0LL;
  if ( a3 > *(_QWORD *)(v6 + 8) - v7 || ULongLongMult(a3, 1uLL, &pullResult) < 0 )
    *(_BYTE *)(v6 + 24) = 1;
  if ( *(_BYTE *)(v6 + 25) || *(_BYTE *)(v6 + 24) )
    return 0;
  memmove(a2, (const void *)(v7 + *(_QWORD *)v6), pullResult);
  return 1;
}
