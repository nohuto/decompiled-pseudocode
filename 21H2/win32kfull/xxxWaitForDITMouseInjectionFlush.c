/*
 * XREFs of xxxWaitForDITMouseInjectionFlush @ 0x1C011CBA4
 * Callers:
 *     xxxSendInput @ 0x1C00C0268 (xxxSendInput.c)
 *     ?xxxProcessMousePromotionQueue@@YAXXZ @ 0x1C02193F0 (-xxxProcessMousePromotionQueue@@YAXXZ.c)
 * Callees:
 *     xxxReceiveMessage @ 0x1C0059000 (xxxReceiveMessage.c)
 *     xxxRemoveQueueCompletion @ 0x1C00DA26C (xxxRemoveQueueCompletion.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 xxxWaitForDITMouseInjectionFlush()
{
  BOOL v0; // ebx
  __int64 v1; // rax
  __int16 v2; // si
  __int64 i; // rcx
  NTSTATUS v4; // ebx
  __int64 result; // rax
  PVOID Object[2]; // [rsp+40h] [rbp-28h] BYREF

  while ( gbMouseInjectionBlockedOnDIT == 1 )
  {
    ++gcDITMouseInjectionWaiters;
    LeaveCrit();
    KeWaitForSingleObject(gpsemDITMouseInjectionWaiters, UserRequest, 0, 0, 0LL);
    EnterCrit(0LL, 1LL);
  }
  gbMouseInjectionBlockedOnDIT = 1;
  LeaveCrit();
  v0 = (unsigned __int8)InitiateWaitForInjectionCompletion(WakeInjectedFlushWaiter) != 0;
  EnterCrit(0LL, 1LL);
  if ( v0 )
  {
    v1 = *(_QWORD *)(gptiCurrent + 448LL);
    *(_DWORD *)(gptiCurrent + 1232LL) |= 0x400000u;
    v2 = *(_WORD *)(v1 + 10);
    Object[0] = gpkeDITMouseInjectionResponseEvent;
    Object[1] = *(PVOID *)(gptiCurrent + 1416LL);
    i = *(_QWORD *)(gptiCurrent + 448LL);
    while ( 1 )
    {
      *(_WORD *)(i + 10) = 64;
      UserSessionSwitchLeaveCrit(i);
      v4 = KeWaitForMultipleObjects(2u, Object, WaitAny, WrUserRequest, 1, 0, 0LL, 0LL);
      EnterCrit(0LL, 1LL);
      if ( v4 != 1 )
        break;
      xxxRemoveQueueCompletion();
      for ( i = *(_QWORD *)(gptiCurrent + 448LL); (*(_BYTE *)(i + 6) & 0x40) != 0; i = *(_QWORD *)(gptiCurrent + 448LL) )
        xxxReceiveMessage(gptiCurrent);
    }
    *(_WORD *)(*(_QWORD *)(gptiCurrent + 448LL) + 10LL) = v2;
    *(_DWORD *)(gptiCurrent + 1232LL) &= ~0x400000u;
  }
  gbMouseInjectionBlockedOnDIT = 0;
  result = gcDITMouseInjectionWaiters;
  if ( gcDITMouseInjectionWaiters )
  {
    KeReleaseSemaphore(gpsemDITMouseInjectionWaiters, 0, gcDITMouseInjectionWaiters, 0);
    result = gcDITMouseInjectionWaiters;
    gcDITMouseInjectionWaiters = 0;
  }
  return result;
}
