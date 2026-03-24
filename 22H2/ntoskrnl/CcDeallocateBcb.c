/*
 * XREFs of CcDeallocateBcb @ 0x1402756E0
 * Callers:
 *     CcDeleteMbcb @ 0x140272FBC (CcDeleteMbcb.c)
 *     CcUnpinFileDataEx @ 0x140274CB0 (CcUnpinFileDataEx.c)
 *     CcDeleteBcbs @ 0x14032B8C0 (CcDeleteBcbs.c)
 * Callees:
 *     ExDeleteResourceLite @ 0x140275720 (ExDeleteResourceLite.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

void __fastcall CcDeallocateBcb(char *P)
{
  if ( *(_WORD *)P == 765 )
    ExDeleteResourceLite((PERESOURCE)(P + 72));
  ExFreePoolWithTag(P, 0);
}
