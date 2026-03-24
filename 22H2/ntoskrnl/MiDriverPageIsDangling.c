/*
 * XREFs of MiDriverPageIsDangling @ 0x140535734
 * Callers:
 *     MiWalkEntireImage @ 0x140239E20 (MiWalkEntireImage.c)
 *     MiDeleteSystemPagableVm @ 0x140286100 (MiDeleteSystemPagableVm.c)
 *     MiDeleteValidSystemPage @ 0x1402A94B0 (MiDeleteValidSystemPage.c)
 * Callees:
 *     MI_PFN_IS_PROTO @ 0x1403F3F48 (MI_PFN_IS_PROTO.c)
 */

_BOOL8 __fastcall MiDriverPageIsDangling(__int64 a1)
{
  _BOOL8 result; // rax
  __int64 v2; // rdx

  result = MI_PFN_IS_PROTO(a1);
  if ( result )
    --*(_QWORD *)(v2 + 200);
  --*(_QWORD *)(v2 + 208);
  return result;
}
