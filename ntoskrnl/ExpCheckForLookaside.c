/*
 * XREFs of ExpCheckForLookaside @ 0x140608FB8
 * Callers:
 *     ExFreeHeapPool @ 0x1402B61C0 (ExFreeHeapPool.c)
 *     ExpFreePoolChecks @ 0x140313BA0 (ExpFreePoolChecks.c)
 * Callees:
 *     ExpCheckForLookasideList @ 0x140609024 (ExpCheckForLookasideList.c)
 *     VfCheckForLookaside @ 0x140ADF178 (VfCheckForLookaside.c)
 */

__int64 __fastcall ExpCheckForLookaside(ULONG_PTR a1, ULONG_PTR a2)
{
  __int64 result; // rax

  if ( (MmVerifierData & 0x800) == 0 || (result = VfCheckForLookaside(a1, a2), !(_DWORD)result) )
  {
    ExpCheckForLookasideList(a1, a2, &ExNPagedLookasideListHead, &ExNPagedLookasideLock);
    return ExpCheckForLookasideList(a1, a2, &ExPagedLookasideListHead, &ExPagedLookasideLock);
  }
  return result;
}
