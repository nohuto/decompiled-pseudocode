/*
 * XREFs of CiLogSchedulerWakeup @ 0x1C0004010
 * Callers:
 *     CiSchedulerSleep @ 0x1C00014A0 (CiSchedulerSleep.c)
 *     CiSchedulerWait @ 0x1C0001680 (CiSchedulerWait.c)
 *     CiSchedulerThreadFunction @ 0x1C0002E60 (CiSchedulerThreadFunction.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0003050 (__security_check_cookie.c)
 */

NTSTATUS __fastcall CiLogSchedulerWakeup(int a1)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-28h] BYREF
  int v3; // [rsp+60h] [rbp+8h] BYREF

  v3 = a1;
  UserData.Ptr = (ULONGLONG)&v3;
  *(_QWORD *)&UserData.Size = 4LL;
  return EtwWrite(RegHandle, &CiSchedulerWakeupEvent, 0LL, 1u, &UserData);
}
