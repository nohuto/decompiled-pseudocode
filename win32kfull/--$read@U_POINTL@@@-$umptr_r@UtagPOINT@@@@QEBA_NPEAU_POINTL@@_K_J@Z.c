/*
 * XREFs of ??$read@U_POINTL@@@?$umptr_r@UtagPOINT@@@@QEBA_NPEAU_POINTL@@_K_J@Z @ 0x1C02ACC40
 * Callers:
 *     ?GrePolyDraw@@YAHPEAUHDC__@@AEAV?$umptr_r@UtagPOINT@@@@AEAV?$umptr_r@E@@K@Z @ 0x1C02AD894 (-GrePolyDraw@@YAHPEAUHDC__@@AEAV-$umptr_r@UtagPOINT@@@@AEAV-$umptr_r@E@@K@Z.c)
 * Callees:
 *     memmove @ 0x1C0130B80 (memmove.c)
 *     ULongLongMult @ 0x1C014D830 (ULongLongMult.c)
 *     ?ssizet_add_to_sizet@?$umptr@E@@SA_N_K_JPEA_K@Z @ 0x1C02ADE18 (-ssizet_add_to_sizet@-$umptr@E@@SA_N_K_JPEA_K@Z.c)
 */

char __fastcall umptr_r<tagPOINT>::read<_POINTL>(__int64 a1, void *a2, ULONGLONG a3)
{
  char v5; // al
  unsigned __int64 v6; // r10
  ULONGLONG pullResult; // [rsp+40h] [rbp+18h] BYREF
  unsigned __int64 v10; // [rsp+48h] [rbp+20h] BYREF

  pullResult = a3;
  v10 = 0LL;
  v5 = umptr<unsigned char>::ssizet_add_to_sizet(*(_QWORD *)(a1 + 16), -1LL, &v10);
  v6 = v10;
  if ( !v5 || v10 > *(_QWORD *)(a1 + 8) )
    *(_BYTE *)(a1 + 24) = 1;
  pullResult = 0LL;
  if ( *(_QWORD *)(a1 + 8) == v6 || ULongLongMult(1uLL, 8uLL, &pullResult) < 0 )
    *(_BYTE *)(a1 + 24) = 1;
  if ( *(_BYTE *)(a1 + 25) || *(_BYTE *)(a1 + 24) )
    return 0;
  memmove(a2, (const void *)(*(_QWORD *)a1 + 8 * v6), pullResult);
  return 1;
}
