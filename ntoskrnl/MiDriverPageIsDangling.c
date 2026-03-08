/*
 * XREFs of MiDriverPageIsDangling @ 0x14062A198
 * Callers:
 *     MiWalkEntireImage @ 0x1402862C0 (MiWalkEntireImage.c)
 *     MiDeleteSystemPagableVm @ 0x1402B04B0 (MiDeleteSystemPagableVm.c)
 *     MiDeleteValidSystemPage @ 0x14032AEA0 (MiDeleteValidSystemPage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiDriverPageIsDangling(__int64 a1)
{
  __int64 result; // rax

  result = qword_140C655B0;
  if ( *(__int64 *)(a1 + 40) < 0 )
    --*(_QWORD *)(qword_140C655B0 + 200);
  --*(_QWORD *)(result + 208);
  return result;
}
