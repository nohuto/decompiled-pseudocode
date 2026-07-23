/*
 * XREFs of PopTraceSystemIdleTimeReset @ 0x14024EB34
 * Callers:
 *     PopResetIdleTime @ 0x14024EAF0 (PopResetIdleTime.c)
 * Callees:
 *     EtwWriteEx @ 0x14027F840 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1402C0830 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

void __fastcall PopTraceSystemIdleTimeReset(int a1)
{
  REGHANDLE v1; // rbx
  int v2; // [rsp+40h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-30h] BYREF
  int *v4; // [rsp+58h] [rbp-20h]
  int v5; // [rsp+60h] [rbp-18h]
  int v6; // [rsp+64h] [rbp-14h]
  int v7; // [rsp+80h] [rbp+8h] BYREF

  v7 = a1;
  if ( PopDiagHandleRegistered )
  {
    v1 = PopDiagHandle;
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_SYSTEM_IDLE_TIME_RESET) )
    {
      UserData.Reserved = 0;
      v2 = 0;
      v6 = 0;
      UserData.Ptr = (ULONGLONG)&v7;
      UserData.Size = 4;
      v4 = &v2;
      v5 = 4;
      EtwWriteEx(v1, &POP_ETW_EVENT_SYSTEM_IDLE_TIME_RESET, 0LL, 0, 0LL, 0LL, 2u, &UserData);
    }
  }
}
