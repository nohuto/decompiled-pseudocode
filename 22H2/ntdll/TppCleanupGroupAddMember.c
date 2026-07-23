/*
 * XREFs of TppCleanupGroupAddMember @ 0x18000C490
 * Callers:
 *     TpAllocWork @ 0x18000F2E0 (TpAllocWork.c)
 *     TppInitializeTimer @ 0x180010960 (TppInitializeTimer.c)
 *     TpSimpleTryPost @ 0x180010BE0 (TpSimpleTryPost.c)
 *     TpAllocIoCompletion @ 0x180076CA0 (TpAllocIoCompletion.c)
 *     TppAllocAlpcCompletion @ 0x18007A7D4 (TppAllocAlpcCompletion.c)
 *     TpAllocJobNotification @ 0x18007FE00 (TpAllocJobNotification.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 */

void __fastcall TppCleanupGroupAddMember(__int64 a1)
{
  _RTL_SRWLOCK *v2; // rbx
  _RTL_SRWLOCK *v3; // rax
  _RTL_SRWLOCK **Value; // rdx

  v2 = *(_RTL_SRWLOCK **)(a1 + 16);
  RtlAcquireSRWLockExclusive(v2 + 1);
  v3 = (_RTL_SRWLOCK *)(a1 + 40);
  Value = (_RTL_SRWLOCK **)v2[3].Value;
  if ( *Value != &v2[2] )
    __fastfail(3u);
  v3->Value = (unsigned __int64)&v2[2];
  *(_QWORD *)(a1 + 48) = Value;
  *Value = v3;
  v2[3].Value = (unsigned __int64)v3;
  RtlReleaseSRWLockExclusive(v2 + 1);
}
