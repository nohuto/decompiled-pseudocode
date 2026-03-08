/*
 * XREFs of CcDeallocateBcb @ 0x14029CCF0
 * Callers:
 *     CcDeleteMbcb @ 0x14029CBA4 (CcDeleteMbcb.c)
 *     CcDeleteBcbs @ 0x1403C0748 (CcDeleteBcbs.c)
 * Callees:
 *     ExDeleteResourceLite @ 0x140336580 (ExDeleteResourceLite.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall CcDeallocateBcb(char *P)
{
  if ( *(_WORD *)P == 765 )
    ExDeleteResourceLite((PERESOURCE)(P + 72));
  ExFreePoolWithTag(P, 0);
}
