/*
 * XREFs of ExpCheckForLookaside @ 0x1405B6988
 * Callers:
 *     ExFreeHeapPool @ 0x1402C2150 (ExFreeHeapPool.c)
 *     ExpFreePoolChecks @ 0x1402EB05C (ExpFreePoolChecks.c)
 * Callees:
 *     ExpCheckForLookasideList @ 0x1405B69F4 (ExpCheckForLookasideList.c)
 *     VfCheckForLookaside @ 0x1409E1528 (VfCheckForLookaside.c)
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
