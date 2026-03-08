/*
 * XREFs of ExUnblockOnAddressPushLockEx @ 0x1403CFBC0
 * Callers:
 *     <none>
 * Callees:
 *     ExpUnblockPushLock @ 0x1402BFD34 (ExpUnblockPushLock.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 */

void __fastcall ExUnblockOnAddressPushLockEx(volatile __int64 *BugCheckParameter2, ULONG_PTR BugCheckParameter1)
{
  signed __int32 v2[8]; // [rsp+0h] [rbp-38h] BYREF

  if ( (BugCheckParameter1 & 0xFFFFFFF8) != 0 )
    KeBugCheckEx(0x152u, (unsigned int)BugCheckParameter1, (ULONG_PTR)BugCheckParameter2, 0LL, 0LL);
  _InterlockedOr(v2, 0);
  if ( *BugCheckParameter2 )
    ExpUnblockPushLock(BugCheckParameter2, 0LL, 0);
}
