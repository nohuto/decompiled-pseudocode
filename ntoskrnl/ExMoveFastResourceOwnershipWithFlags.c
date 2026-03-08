/*
 * XREFs of ExMoveFastResourceOwnershipWithFlags @ 0x14040D2D0
 * Callers:
 *     <none>
 * Callees:
 *     ExDisownFastResource2 @ 0x14040E06C (ExDisownFastResource2.c)
 *     ExpMoveSharedFastResourceOwnershipWithFlags @ 0x14041059C (ExpMoveSharedFastResourceOwnershipWithFlags.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 */

__int64 __fastcall ExMoveFastResourceOwnershipWithFlags(__int64 *a1, ULONG_PTR a2, ULONG_PTR a3, char a4)
{
  __int64 result; // rax

  if ( !FeatureFastResource2 )
    KeBugCheckEx(0x1C6u, 0x18uLL, 0LL, 0LL, 0LL);
  result = *a1;
  if ( (*a1 & 1) == 0 )
    return ExpMoveSharedFastResourceOwnershipWithFlags((ULONG_PTR)a1, a2, a3);
  if ( (a4 & 1) != 0 )
    return ExDisownFastResource2((ULONG_PTR)a1, 0LL);
  return result;
}
