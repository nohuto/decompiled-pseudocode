/*
 * XREFs of CiLogSchedulerSleep @ 0x1C0003F8C
 * Callers:
 *     CiSchedulerDeepSleep @ 0x1C00011C0 (CiSchedulerDeepSleep.c)
 *     CiSchedulerSleep @ 0x1C00014A0 (CiSchedulerSleep.c)
 *     CiSchedulerWait @ 0x1C0001680 (CiSchedulerWait.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0003050 (__security_check_cookie.c)
 */

NTSTATUS __fastcall CiLogSchedulerSleep(int a1, int a2)
{
  struct _EVENT_DATA_DESCRIPTOR v3; // [rsp+30h] [rbp-38h] BYREF
  int *v4; // [rsp+40h] [rbp-28h]
  __int64 v5; // [rsp+48h] [rbp-20h]
  int v6; // [rsp+70h] [rbp+8h] BYREF
  int v7; // [rsp+78h] [rbp+10h] BYREF

  v7 = a2;
  v6 = a1;
  v3.Ptr = (ULONGLONG)&v6;
  *(_QWORD *)&v3.Size = 4LL;
  v4 = &v7;
  v5 = 4LL;
  return EtwWrite(RegHandle, &CiSchedulerSleepEvent, 0LL, 2u, &v3);
}
