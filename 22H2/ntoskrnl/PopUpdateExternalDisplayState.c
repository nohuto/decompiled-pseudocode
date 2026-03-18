/*
 * XREFs of PopUpdateExternalDisplayState @ 0x1407EAD2C
 * Callers:
 *     PopPowerInformationInternal @ 0x1407ED5EC (PopPowerInformationInternal.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402F6B24 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     PopQueueWorkItem @ 0x14032CB04 (PopQueueWorkItem.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     PopReleasePolicyLock @ 0x140A87BA4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A87BE4 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopUpdateExternalDisplayState(int a1)
{
  char v1; // bl
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  char v6; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+38h] [rbp-40h] BYREF
  char *v8; // [rsp+58h] [rbp-20h]
  int v9; // [rsp+60h] [rbp-18h]
  int v10; // [rsp+64h] [rbp-14h]

  v1 = a1;
  PopAcquirePolicyLock(a1);
  PopConsoleExternalDisplayConnected = v1;
  if ( (unsigned int)dword_140C03950 > 5 )
  {
    v10 = 0;
    v8 = &v6;
    v6 = v1;
    v9 = 1;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C03950, (unsigned __int8 *)byte_14002E999, 0LL, 0LL, 3u, &v7);
  }
  PopQueueWorkItem((__int64)&PopExternalMonitorUpdatedWorkItem, DelayedWorkQueue);
  return PopReleasePolicyLock(v3, v2, v4);
}
