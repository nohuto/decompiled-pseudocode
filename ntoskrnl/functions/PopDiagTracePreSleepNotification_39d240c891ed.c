__int64 __fastcall PopDiagTracePreSleepNotification(int a1, int a2, int a3, int a4, char a5, __int64 a6)
{
  __int64 v6; // rbx
  int v9; // [rsp+30h] [rbp-49h] BYREF
  int v10; // [rsp+38h] [rbp-41h] BYREF
  int v11; // [rsp+40h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-29h] BYREF
  int *v13; // [rsp+60h] [rbp-19h]
  __int64 v14; // [rsp+68h] [rbp-11h]
  int *v15; // [rsp+70h] [rbp-9h]
  __int64 v16; // [rsp+78h] [rbp-1h]
  int *v17; // [rsp+80h] [rbp+7h]
  __int64 v18; // [rsp+88h] [rbp+Fh]
  char *v19; // [rsp+90h] [rbp+17h]
  __int64 v20; // [rsp+98h] [rbp+1Fh]
  int v21; // [rsp+E8h] [rbp+6Fh] BYREF

  v21 = a4;
  v6 = a6;
  v10 = a1;
  v11 = a2;
  v9 = 0;
  if ( PopDiagHandleRegistered )
  {
    UserData.Ptr = (ULONGLONG)&v10;
    v9 = a3;
    v13 = &v11;
    *(_QWORD *)&UserData.Size = 4LL;
    v15 = &v9;
    v17 = &v21;
    v19 = &a5;
    v14 = 4LL;
    v16 = 4LL;
    v18 = 4LL;
    v20 = 4LL;
    EtwWrite(PopDiagHandle, &POP_ETW_EVENT_PRESLEEP_NOTIFICATION3, 0LL, 5u, &UserData);
    a1 = v10;
    a2 = v11;
  }
  return SshSessionManagerTracePreSleepNotification(a1, a2, a3, *(_DWORD *)(v6 + 12), *(_DWORD *)(v6 + 8));
}
