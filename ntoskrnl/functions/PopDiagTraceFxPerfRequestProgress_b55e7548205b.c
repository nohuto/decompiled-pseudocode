void __fastcall PopDiagTraceFxPerfRequestProgress(__int64 *a1, int a2)
{
  REGHANDLE v3; // rbx
  __int64 v4; // r8
  __int64 v5; // rax
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-40h] BYREF
  __int64 v7; // [rsp+40h] [rbp-30h]
  int v8; // [rsp+48h] [rbp-28h]
  int v9; // [rsp+4Ch] [rbp-24h]
  int *v10; // [rsp+50h] [rbp-20h]
  int v11; // [rsp+58h] [rbp-18h]
  int v12; // [rsp+5Ch] [rbp-14h]
  int v13; // [rsp+88h] [rbp+18h] BYREF

  v13 = a2;
  if ( PopDiagHandleRegistered )
  {
    v3 = PopDiagHandle;
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_COMPONENT_PERFORMANCE_STATE_PROCESSING) )
    {
      v4 = *a1;
      v5 = *(_QWORD *)(*a1 + 80);
      UserData.Reserved = 0;
      v9 = 0;
      v12 = 0;
      UserData.Ptr = v5 + 48;
      v7 = v4 + 16;
      v8 = 4;
      v10 = &v13;
      v11 = 4;
      UserData.Size = 8;
      EtwWrite(v3, &POP_ETW_EVENT_COMPONENT_PERFORMANCE_STATE_PROCESSING, 0LL, 3u, &UserData);
    }
  }
}
