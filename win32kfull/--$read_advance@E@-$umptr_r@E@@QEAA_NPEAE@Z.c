/*
 * XREFs of ??$read_advance@E@?$umptr_r@E@@QEAA_NPEAE@Z @ 0x1C02ACD18
 * Callers:
 *     ?GrePolyDraw@@YAHPEAUHDC__@@AEAV?$umptr_r@UtagPOINT@@@@AEAV?$umptr_r@E@@K@Z @ 0x1C02AD894 (-GrePolyDraw@@YAHPEAUHDC__@@AEAV-$umptr_r@UtagPOINT@@@@AEAV-$umptr_r@E@@K@Z.c)
 * Callees:
 *     ??$read@E@?$umptr_r@E@@QEBA_NPEAE_K_J@Z @ 0x1C02ACB60 (--$read@E@-$umptr_r@E@@QEBA_NPEAE_K_J@Z.c)
 *     ?ssizet_add_to_sizet@?$umptr@E@@SA_N_K_JPEA_K@Z @ 0x1C02ADE18 (-ssizet_add_to_sizet@-$umptr@E@@SA_N_K_JPEA_K@Z.c)
 */

char __fastcall umptr_r<unsigned char>::read_advance<unsigned char>(__int64 a1, void *a2)
{
  char v3; // r11
  __int64 v4; // rcx
  unsigned __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  v3 = umptr_r<unsigned char>::read<unsigned char>(a1, a2, 1uLL, 0LL);
  if ( v3 )
  {
    v4 = *(_QWORD *)(a1 + 16);
    v6 = 0LL;
    if ( (unsigned __int8)umptr<unsigned char>::ssizet_add_to_sizet(v4, 1LL, &v6) && v6 <= *(_QWORD *)(a1 + 8) )
      *(_QWORD *)(a1 + 16) = v6;
    else
      *(_BYTE *)(a1 + 24) = 1;
  }
  return v3;
}
