/*
 * XREFs of TpReleaseWait @ 0x18000C270
 * Callers:
 *     RtlDeregisterWaitEx @ 0x18000B5B0 (RtlDeregisterWaitEx.c)
 *     RtlpWnfRegisterTpNotification @ 0x18007D454 (RtlpWnfRegisterTpNotification.c)
 *     EtwpRegisterTpNotificationOnce @ 0x18007E3D0 (EtwpRegisterTpNotificationOnce.c)
 * Callees:
 *     TppCleanupGroupMemberRelease @ 0x18000F124 (TppCleanupGroupMemberRelease.c)
 *     TppCancelWait @ 0x180011E7C (TppCancelWait.c)
 *     TppWaitpValidateWait @ 0x180012038 (TppWaitpValidateWait.c)
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1800A1000 (_guard_dispatch_icall_nop.c)
 */

void __cdecl TpReleaseWait(PTP_WAIT Wait)
{
  __int64 v2; // rbx
  int v3; // ebp
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]
  int v5; // [rsp+30h] [rbp+8h] BYREF

  if ( (unsigned int)TppWaitpValidateWait(Wait, 1LL, 0LL) && (unsigned int)TppCleanupGroupMemberRelease(Wait, 1LL) )
  {
    v2 = *((_QWORD *)Wait + 18);
    *((_QWORD *)Wait + 23) = retaddr;
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)Wait + 30);
    TppCancelWait(Wait, v2 + 112, 2LL, &v5);
    ++*((_BYTE *)Wait + 355);
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)Wait + 30);
    v3 = 1 - v5;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)Wait, v5 - 1) == v3 )
      (**((void (__fastcall ***)(PTP_WAIT))Wait + 1))(Wait);
  }
}
