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
  if ( (unsigned int)dword_140C03928 > 5 )
  {
    v10 = 0;
    v8 = &v6;
    v6 = v1;
    v9 = 1;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C03928, (unsigned __int8 *)byte_14002E699, 0LL, 0LL, 3u, &v7);
  }
  PopQueueWorkItem((__int64)&PopExternalMonitorUpdatedWorkItem, DelayedWorkQueue);
  return PopReleasePolicyLock(v3, v2, v4);
}
