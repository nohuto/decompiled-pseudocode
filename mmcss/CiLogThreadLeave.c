NTSTATUS __fastcall CiLogThreadLeave(__int64 a1)
{
  HANDLE ThreadId; // [rsp+30h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-30h] BYREF
  __int64 v5; // [rsp+48h] [rbp-20h]
  __int64 v6; // [rsp+50h] [rbp-18h]

  ThreadId = PsGetThreadId(*(PETHREAD *)(a1 + 96));
  *(_QWORD *)&UserData.Size = 4LL;
  UserData.Ptr = (ULONGLONG)&ThreadId;
  v6 = 1LL;
  v5 = a1 + 144;
  return EtwWrite(RegHandle, &CiThreadLeaveEvent, 0LL, 2u, &UserData);
}
