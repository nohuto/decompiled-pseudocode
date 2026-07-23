/*
 * XREFs of VerifierExDeleteLookasideListEx @ 0x1409E2110
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     ViLookasideDelete @ 0x1409E26DC (ViLookasideDelete.c)
 */

__int64 __fastcall VerifierExDeleteLookasideListEx(ULONG_PTR a1)
{
  ViLookasideDelete(a1);
  return ((__int64 (__fastcall *)(ULONG_PTR))pXdvExDeleteLookasideListEx)(a1);
}
