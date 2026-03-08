/*
 * XREFs of MiIsPfnSystemCharged @ 0x1403A0E6C
 * Callers:
 *     MiWalkEntireImage @ 0x1402862C0 (MiWalkEntireImage.c)
 *     MiDeleteSystemPagableVm @ 0x1402B04B0 (MiDeleteSystemPagableVm.c)
 *     MiDeleteValidSystemPage @ 0x14032AEA0 (MiDeleteValidSystemPage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiIsPfnSystemCharged(__int64 a1)
{
  unsigned __int64 v1; // rdx

  v1 = *(_QWORD *)(a1 + 8) | 0x8000000000000000uLL;
  if ( v1 > 0xFFFFF6BFFFFFFF78uLL || v1 < 0xFFFFF68000000000uLL )
    return (*(unsigned __int8 *)(a1 + 35) >> 5) & 1;
  else
    return 0LL;
}
