/*
 * XREFs of CcDeallocateBcb @ 0x1402F3F50
 * Callers:
 *     CcDeleteMbcb @ 0x1402F3E04 (CcDeleteMbcb.c)
 *     CcDeleteBcbs @ 0x1403C6008 (CcDeleteBcbs.c)
 * Callees:
 *     ExDeleteResourceLite @ 0x1402A8CA0 (ExDeleteResourceLite.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

void __fastcall CcDeallocateBcb(char *P)
{
  if ( *(_WORD *)P == 765 )
    ExDeleteResourceLite((PERESOURCE)(P + 72));
  ExFreePoolWithTag(P, 0);
}
