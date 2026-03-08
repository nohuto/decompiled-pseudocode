/*
 * XREFs of ?UMPD_ldevFillTable@@YAHPEAU_LDEV@@PEBH@Z @ 0x1C02C2C24
 * Callers:
 *     ?UMPD_ldevLoadDriver@@YAPEAU_LDEV@@PEAGW4_LDEVTYPE@@@Z @ 0x1C02C2CB8 (-UMPD_ldevLoadDriver@@YAPEAU_LDEV@@PEAGW4_LDEVTYPE@@@Z.c)
 * Callees:
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 */

__int64 __fastcall UMPD_ldevFillTable(struct _LDEV *a1, const int *a2)
{
  __int64 (*const near **v2)(void); // rbx
  __int64 (*const near **v4)(void); // rcx
  __int64 v5; // rdx
  __int64 v6; // rdx

  v2 = (__int64 (*const near **)(void))((char *)a1 + 64);
  memset_0((char *)a1 + 64, 0, 0x340uLL);
  v4 = v2;
  v5 = 104LL;
  do
  {
    if ( *a2 )
      *v4 = *(__int64 (*const near **)(void))((char *)v4 + (char *)&gpUMDriverFunc - (char *)v2);
    ++a2;
    ++v4;
    --v5;
  }
  while ( v5 );
  LODWORD(v6) = 3;
  while ( 1 )
  {
    v6 = (unsigned int)(v6 - 1);
    if ( !v2[dword_1C032AB48[v6]] )
      break;
    if ( !(_DWORD)v6 )
    {
      v2[42] = (__int64 (*const near *)(void))UMPDDrvFree;
      return 1LL;
    }
  }
  return 0LL;
}
