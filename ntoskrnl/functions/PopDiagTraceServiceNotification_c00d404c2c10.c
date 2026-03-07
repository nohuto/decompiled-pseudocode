void __fastcall PopDiagTraceServiceNotification(_DWORD *a1)
{
  const EVENT_DESCRIPTOR *v2; // rbx
  _DWORD *v3; // rdi
  __int64 v4; // rax
  __int16 v5; // [rsp+30h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-30h] BYREF
  _DWORD *v7; // [rsp+48h] [rbp-20h]
  int v8; // [rsp+50h] [rbp-18h]
  int v9; // [rsp+54h] [rbp-14h]

  v2 = (const EVENT_DESCRIPTOR *)POP_ETW_EVENT_SUSPENDSERVICE;
  if ( *a1 )
    v2 = &POP_ETW_EVENT_SUSPENDSERVICE_END;
  if ( PopDiagHandleRegistered && EtwEventEnabled(PopDiagHandle, v2) )
  {
    v3 = a1 + 1;
    v4 = -1LL;
    do
      ++v4;
    while ( *((_WORD *)v3 + v4) );
    v5 = v4;
    UserData.Ptr = (ULONGLONG)&v5;
    v8 = 2 * (unsigned __int16)v4;
    *(_QWORD *)&UserData.Size = 2LL;
    v7 = v3;
    v9 = 0;
    EtwWrite(PopDiagHandle, v2, 0LL, 2u, &UserData);
  }
}
