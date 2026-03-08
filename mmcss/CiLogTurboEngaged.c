/*
 * XREFs of CiLogTurboEngaged @ 0x1C0004570
 * Callers:
 *     CiSchedulerProcessDeadlines @ 0x1C0001250 (CiSchedulerProcessDeadlines.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0003050 (__security_check_cookie.c)
 */

NTSTATUS CiLogTurboEngaged()
{
  int v1; // [rsp+30h] [rbp-28h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-20h] BYREF

  UserData.Ptr = (ULONGLONG)&v1;
  v1 = 1;
  *(_QWORD *)&UserData.Size = 4LL;
  return EtwWrite(RegHandle, &CiTurboEngagedEvent, 0LL, 1u, &UserData);
}
