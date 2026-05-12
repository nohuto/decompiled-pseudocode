/*
 * XREFs of RaUnitCreateIrp @ 0x1C00116CC
 * Callers:
 *     RaDriverCreateIrp @ 0x1C0072B00 (RaDriverCreateIrp.c)
 *     RaDriverCloseIrp @ 0x1C0072BB0 (RaDriverCloseIrp.c)
 * Callees:
 *     RaidHandleCreateCloseIrp @ 0x1C00116E4 (RaidHandleCreateCloseIrp.c)
 */

__int64 __fastcall RaUnitCreateIrp(__int64 a1)
{
  return RaidHandleCreateCloseIrp(*(unsigned int *)(a1 + 48));
}
