/*
 * XREFs of PopDiagTraceShutdownAction @ 0x1405925FC
 * Callers:
 *     PopExecutePowerAction @ 0x1409867F4 (PopExecutePowerAction.c)
 * Callees:
 *     EtwWriteEx @ 0x140231630 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x140231870 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     SshSessionManagerTraceShutdownAction @ 0x14099EBAC (SshSessionManagerTraceShutdownAction.c)
 */

__int64 __fastcall PopDiagTraceShutdownAction(unsigned int a1, unsigned int a2, unsigned int a3)
{
  unsigned int v4; // ebx
  REGHANDLE v6; // r14
  unsigned int v8; // [rsp+40h] [rbp-29h] BYREF
  unsigned int v9; // [rsp+44h] [rbp-25h] BYREF
  unsigned int v10; // [rsp+50h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-9h] BYREF
  unsigned int *v12; // [rsp+70h] [rbp+7h]
  int v13; // [rsp+78h] [rbp+Fh]
  int v14; // [rsp+7Ch] [rbp+13h]
  int *v15; // [rsp+80h] [rbp+17h]
  int v16; // [rsp+88h] [rbp+1Fh]
  int v17; // [rsp+8Ch] [rbp+23h]

  v8 = 0;
  v9 = 0;
  v4 = a2;
  v10 = a2;
  if ( PopDiagHandleRegistered )
  {
    v6 = PopDiagHandle;
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_SHUTDOWN_ACTION) )
    {
      UserData.Reserved = 0;
      v14 = 0;
      v17 = 0;
      UserData.Ptr = (ULONGLONG)&v8;
      UserData.Size = 4;
      v12 = &v10;
      v13 = 4;
      v15 = (int *)&v9;
      v16 = 4;
      v8 = a1;
      v9 = a3;
      EtwWriteEx(v6, &POP_ETW_EVENT_SHUTDOWN_ACTION, 0LL, 0, 0LL, 0LL, 3u, &UserData);
      v4 = v10;
    }
  }
  return SshSessionManagerTraceShutdownAction(a1, v4, a3);
}
