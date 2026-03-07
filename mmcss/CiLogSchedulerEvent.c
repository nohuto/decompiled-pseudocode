NTSTATUS __fastcall CiLogSchedulerEvent(__int64 a1, int a2)
{
  HANDLE ThreadProcessId; // rax
  struct _KTHREAD *v4; // rcx
  __int64 v5; // rax
  HANDLE v7; // [rsp+30h] [rbp-68h] BYREF
  HANDLE ThreadId; // [rsp+38h] [rbp-60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-58h] BYREF
  HANDLE *p_ThreadId; // [rsp+50h] [rbp-48h]
  __int64 v11; // [rsp+58h] [rbp-40h]
  int *v12; // [rsp+60h] [rbp-38h]
  __int64 v13; // [rsp+68h] [rbp-30h]
  __int64 v14; // [rsp+70h] [rbp-28h]
  __int64 v15; // [rsp+78h] [rbp-20h]
  int v16; // [rsp+A8h] [rbp+10h] BYREF

  v16 = a2;
  ThreadProcessId = PsGetThreadProcessId(*(PETHREAD *)(a1 + 96));
  v4 = *(struct _KTHREAD **)(a1 + 96);
  v7 = ThreadProcessId;
  ThreadId = PsGetThreadId(v4);
  *(_QWORD *)&UserData.Size = 4LL;
  UserData.Ptr = (ULONGLONG)&v7;
  v11 = 4LL;
  p_ThreadId = &ThreadId;
  v12 = &v16;
  v5 = *(_QWORD *)(a1 + 72);
  v13 = 1LL;
  v14 = v5 + 144;
  v15 = 4LL;
  return EtwWrite(RegHandle, &CiSchedulerPriorityEvent, 0LL, 4u, &UserData);
}
