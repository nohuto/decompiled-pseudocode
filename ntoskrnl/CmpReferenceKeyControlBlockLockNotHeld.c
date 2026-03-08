/*
 * XREFs of CmpReferenceKeyControlBlockLockNotHeld @ 0x14074B840
 * Callers:
 *     CmpCreateKeyControlBlock @ 0x1407AFAA0 (CmpCreateKeyControlBlock.c)
 *     CmpWalkOneLevel @ 0x1407B1C90 (CmpWalkOneLevel.c)
 * Callees:
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     CmpReferenceKeyControlBlock @ 0x14074BF00 (CmpReferenceKeyControlBlock.c)
 *     CmpLockKcbShared @ 0x140AF20D0 (CmpLockKcbShared.c)
 *     CmpUnlockKcb @ 0x140AF2140 (CmpUnlockKcb.c)
 */

signed __int64 __fastcall CmpReferenceKeyControlBlockLockNotHeld(volatile signed __int64 *BugCheckParameter2)
{
  volatile signed __int64 result; // rax
  __int64 v3; // rtt

  result = *BugCheckParameter2;
  while ( result )
  {
    if ( result == -1 )
      KeBugCheckEx(0x51u, 0x24uLL, (ULONG_PTR)BugCheckParameter2, 0LL, 0LL);
    v3 = result;
    result = _InterlockedCompareExchange64(BugCheckParameter2, result + 1, result);
    if ( v3 == result )
      return result;
  }
  CmpLockKcbShared(BugCheckParameter2);
  CmpReferenceKeyControlBlock((ULONG_PTR)BugCheckParameter2);
  return CmpUnlockKcb(BugCheckParameter2);
}
