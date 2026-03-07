void __fastcall IopLogAuditIoRegisterNotificationEvent(PCEVENT_DESCRIPTOR EventDescriptor, __int64 a2)
{
  REGHANDLE v2; // r10
  __int64 v4; // rax
  unsigned int v5; // r9d
  ULONGLONG v6; // rcx
  __int64 v7; // rax
  unsigned int v8; // r9d
  __int64 v9; // rax
  __int16 v10; // [rsp+30h] [rbp-58h] BYREF
  int v11; // [rsp+38h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData[3]; // [rsp+40h] [rbp-48h] BYREF

  v2 = EtwApiCallsProvRegHandle;
  v11 = 0;
  if ( EtwApiCallsProvRegHandle )
  {
    v4 = *(_QWORD *)(a2 + 8);
    v5 = 0;
    v10 = 0;
    if ( v4 )
    {
      v6 = *(_QWORD *)(v4 + 64);
      if ( v6 )
      {
        v5 = 1;
        UserData[0].Size = *(unsigned __int16 *)(v4 + 56);
        UserData[0].Ptr = v6;
        UserData[0].Reserved = 0;
      }
    }
    v7 = v5;
    v8 = v5 + 1;
    UserData[v7].Ptr = (ULONGLONG)&v10;
    *(_QWORD *)&UserData[v7].Size = 2LL;
    v9 = v8;
    UserData[v9].Ptr = (ULONGLONG)&v11;
    *(_QWORD *)&UserData[v9].Size = 4LL;
    EtwWrite(v2, EventDescriptor, 0LL, v8 + 1, UserData);
  }
}
