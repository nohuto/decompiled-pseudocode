char __fastcall PopDiagTraceFxComponentLogicalCondition(__int64 a1, int a2, unsigned __int8 a3)
{
  _UNKNOWN **v3; // rax
  int v4; // edi
  REGHANDLE v5; // rbx
  int v7; // [rsp+40h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-38h] BYREF
  int *v9; // [rsp+58h] [rbp-28h]
  int v10; // [rsp+60h] [rbp-20h]
  int v11; // [rsp+64h] [rbp-1Ch]
  int *v12; // [rsp+68h] [rbp-18h]
  int v13; // [rsp+70h] [rbp-10h]
  int v14; // [rsp+74h] [rbp-Ch]
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+8h] BYREF
  __int64 v16; // [rsp+90h] [rbp+10h] BYREF
  int v17; // [rsp+98h] [rbp+18h] BYREF

  v3 = &retaddr;
  v17 = a2;
  v16 = a1;
  v4 = a3;
  if ( PopDiagHandleRegistered )
  {
    v5 = PopDiagHandle;
    LOBYTE(v3) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_COMPONENT_CONDITION);
    if ( (_BYTE)v3 )
    {
      UserData.Reserved = 0;
      v11 = 0;
      v14 = 0;
      UserData.Ptr = (ULONGLONG)&v16;
      v10 = 4;
      v9 = &v17;
      v12 = &v7;
      v13 = 4;
      v7 = v4;
      UserData.Size = 8;
      LOBYTE(v3) = EtwWriteEx(v5, &POP_ETW_EVENT_COMPONENT_CONDITION, 0LL, 1u, 0LL, 0LL, 3u, &UserData);
    }
  }
  return (char)v3;
}
