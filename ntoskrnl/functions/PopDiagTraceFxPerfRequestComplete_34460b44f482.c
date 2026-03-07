void __fastcall PopDiagTraceFxPerfRequestComplete(__int64 *a1, unsigned __int8 a2)
{
  int v3; // edi
  REGHANDLE v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rax
  int v7; // [rsp+30h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-38h] BYREF
  __int64 v9; // [rsp+48h] [rbp-28h]
  int v10; // [rsp+50h] [rbp-20h]
  int v11; // [rsp+54h] [rbp-1Ch]
  int *v12; // [rsp+58h] [rbp-18h]
  int v13; // [rsp+60h] [rbp-10h]
  int v14; // [rsp+64h] [rbp-Ch]

  v3 = a2;
  if ( PopDiagHandleRegistered )
  {
    v4 = PopDiagHandle;
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_COMPONENT_PERFORMANCE_STATE_COMPLETED) )
    {
      v5 = *a1;
      v6 = *(_QWORD *)(*a1 + 80);
      UserData.Reserved = 0;
      v11 = 0;
      v14 = 0;
      UserData.Ptr = v6 + 48;
      v9 = v5 + 16;
      v10 = 4;
      v12 = &v7;
      v13 = 4;
      UserData.Size = 8;
      v7 = v3;
      EtwWrite(v4, &POP_ETW_EVENT_COMPONENT_PERFORMANCE_STATE_COMPLETED, 0LL, 3u, &UserData);
    }
  }
}
