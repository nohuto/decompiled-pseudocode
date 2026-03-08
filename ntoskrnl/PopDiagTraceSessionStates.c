/*
 * XREFs of PopDiagTraceSessionStates @ 0x14079A284
 * Callers:
 *     PopSessionWinlogonNotification @ 0x14067F97C (PopSessionWinlogonNotification.c)
 *     PopSessionDisconnected @ 0x14067FF58 (PopSessionDisconnected.c)
 *     NtPowerInformation @ 0x14068AB90 (NtPowerInformation.c)
 *     PopSessionConnected @ 0x14079A204 (PopSessionConnected.c)
 * Callees:
 *     EtwEventEnabled @ 0x140231870 (EtwEventEnabled.c)
 *     EtwWrite @ 0x1402338C0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceSessionStates(PCEVENT_DESCRIPTOR EventDescriptor, int a2, int a3)
{
  REGHANDLE v4; // rdi
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-38h] BYREF
  int *v6; // [rsp+40h] [rbp-28h]
  int v7; // [rsp+48h] [rbp-20h]
  int v8; // [rsp+4Ch] [rbp-1Ch]
  int v9; // [rsp+78h] [rbp+10h] BYREF
  int v10; // [rsp+80h] [rbp+18h] BYREF

  v10 = a3;
  v9 = a2;
  if ( PopDiagHandleRegistered )
  {
    v4 = PopDiagHandle;
    if ( EtwEventEnabled(PopDiagHandle, EventDescriptor) )
    {
      UserData.Reserved = 0;
      v8 = 0;
      UserData.Ptr = (ULONGLONG)&v9;
      UserData.Size = 4;
      v6 = &v10;
      v7 = 4;
      EtwWrite(v4, EventDescriptor, 0LL, 2u, &UserData);
    }
  }
}
