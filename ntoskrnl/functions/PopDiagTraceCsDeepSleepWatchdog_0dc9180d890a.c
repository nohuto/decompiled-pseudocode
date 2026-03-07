char __fastcall PopDiagTraceCsDeepSleepWatchdog(
        int a1,
        int a2,
        int a3,
        unsigned __int8 a4,
        char a5,
        unsigned __int8 a6)
{
  _UNKNOWN **v6; // rax
  int v7; // edi
  REGHANDLE v8; // rbx
  int v10; // [rsp+48h] [rbp-49h] BYREF
  int v11; // [rsp+4Ch] [rbp-45h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-39h] BYREF
  int *v13; // [rsp+68h] [rbp-29h]
  int v14; // [rsp+70h] [rbp-21h]
  int v15; // [rsp+74h] [rbp-1Dh]
  int *v16; // [rsp+78h] [rbp-19h]
  int v17; // [rsp+80h] [rbp-11h]
  int v18; // [rsp+84h] [rbp-Dh]
  int *v19; // [rsp+88h] [rbp-9h]
  int v20; // [rsp+90h] [rbp-1h]
  int v21; // [rsp+94h] [rbp+3h]
  char *v22; // [rsp+98h] [rbp+7h]
  int v23; // [rsp+A0h] [rbp+Fh]
  int v24; // [rsp+A4h] [rbp+13h]
  int *v25; // [rsp+A8h] [rbp+17h]
  int v26; // [rsp+B0h] [rbp+1Fh]
  int v27; // [rsp+B4h] [rbp+23h]
  _UNKNOWN *retaddr; // [rsp+E0h] [rbp+4Fh] BYREF
  int v29; // [rsp+E8h] [rbp+57h] BYREF
  int v30; // [rsp+F0h] [rbp+5Fh] BYREF
  int v31; // [rsp+F8h] [rbp+67h] BYREF

  v6 = &retaddr;
  v31 = a3;
  v30 = a2;
  v29 = a1;
  v7 = a4;
  if ( PopDiagHandleRegistered )
  {
    v8 = PopDiagHandle;
    LOBYTE(v6) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_CS_DEEP_SLEEP_WATCHDOG);
    if ( (_BYTE)v6 )
    {
      UserData.Reserved = 0;
      v15 = 0;
      v18 = 0;
      v21 = 0;
      v24 = 0;
      v27 = 0;
      UserData.Ptr = (ULONGLONG)&v29;
      v13 = &v30;
      v16 = &v31;
      v19 = &v10;
      v22 = &a5;
      v11 = a6;
      v25 = &v11;
      UserData.Size = 4;
      v14 = 4;
      v17 = 4;
      v20 = 4;
      v23 = 4;
      v26 = 4;
      v10 = v7;
      LOBYTE(v6) = EtwWriteEx(v8, &POP_ETW_EVENT_CS_DEEP_SLEEP_WATCHDOG, 0LL, 0, 0LL, 0LL, 6u, &UserData);
    }
  }
  return (char)v6;
}
