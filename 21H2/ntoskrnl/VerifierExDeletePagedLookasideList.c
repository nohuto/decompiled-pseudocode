/*
 * XREFs of VerifierExDeletePagedLookasideList @ 0x1409E1170
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     ViLookasideDelete @ 0x1409E16DC (ViLookasideDelete.c)
 */

__int64 __fastcall VerifierExDeletePagedLookasideList(ULONG_PTR a1)
{
  ViLookasideDelete(a1);
  return ((__int64 (__fastcall *)(ULONG_PTR))pXdvExDeletePagedLookasideList)(a1);
}
