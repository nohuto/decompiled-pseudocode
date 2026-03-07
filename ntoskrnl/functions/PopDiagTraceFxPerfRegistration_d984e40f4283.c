NTSTATUS __fastcall PopDiagTraceFxPerfRegistration(PCEVENT_DESCRIPTOR EventDescriptor, __int64 a2, int a3, int a4)
{
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+30h] [rbp-40h] BYREF
  int *v6; // [rsp+40h] [rbp-30h]
  __int64 v7; // [rsp+48h] [rbp-28h]
  int *v8; // [rsp+50h] [rbp-20h]
  __int64 v9; // [rsp+58h] [rbp-18h]
  __int64 v10; // [rsp+88h] [rbp+18h] BYREF
  int v11; // [rsp+90h] [rbp+20h] BYREF
  int v12; // [rsp+98h] [rbp+28h] BYREF

  v12 = a4;
  v11 = a3;
  v10 = a2;
  *(_QWORD *)&v5.Size = 8LL;
  v5.Ptr = (ULONGLONG)&v10;
  v6 = &v11;
  v7 = 4LL;
  v8 = &v12;
  v9 = 4LL;
  return EtwWrite(PopDiagHandle, EventDescriptor, 0LL, 3u, &v5);
}
