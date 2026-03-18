/*
 * XREFs of CiLogTaskIndexYield @ 0x1C0004254
 * Callers:
 *     CiSchedulerTaskIndexYield @ 0x1C0002300 (CiSchedulerTaskIndexYield.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0003050 (__security_check_cookie.c)
 */

NTSTATUS __fastcall CiLogTaskIndexYield(__int64 a1, int a2, int a3)
{
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-48h] BYREF
  int *v5; // [rsp+40h] [rbp-38h]
  __int64 v6; // [rsp+48h] [rbp-30h]
  int *v7; // [rsp+50h] [rbp-28h]
  __int64 v8; // [rsp+58h] [rbp-20h]
  int v9; // [rsp+88h] [rbp+10h] BYREF
  int v10; // [rsp+90h] [rbp+18h] BYREF

  v10 = a3;
  v9 = a2;
  *(_QWORD *)&v4.Size = 4LL;
  v4.Ptr = a1 + 144;
  v6 = 4LL;
  v5 = &v9;
  v8 = 4LL;
  v7 = &v10;
  return EtwWrite(RegHandle, &CiTaskIndexYieldEvent, 0LL, 3u, &v4);
}
