/*
 * XREFs of PopBatteryTraceSystemBatteryStatus @ 0x1403BE46C
 * Callers:
 *     PopBatteryApplyCompositeState @ 0x14086E430 (PopBatteryApplyCompositeState.c)
 *     PopBatteryEtwCallback @ 0x1409922D0 (PopBatteryEtwCallback.c)
 * Callees:
 *     EtwWriteEx @ 0x140231630 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x140231870 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

char __fastcall PopBatteryTraceSystemBatteryStatus(char a1)
{
  const EVENT_DESCRIPTOR *v1; // rax
  const EVENT_DESCRIPTOR *v2; // rbx
  REGHANDLE v3; // rdi
  int v4; // eax
  __int64 v6; // [rsp+40h] [rbp+7h] BYREF
  int v7; // [rsp+48h] [rbp+Fh] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp+17h] BYREF
  __int64 *v9; // [rsp+60h] [rbp+27h]
  int v10; // [rsp+68h] [rbp+2Fh]
  int v11; // [rsp+6Ch] [rbp+33h]
  char *v12; // [rsp+70h] [rbp+37h]
  int v13; // [rsp+78h] [rbp+3Fh]
  int v14; // [rsp+7Ch] [rbp+43h]

  v1 = &BATTERY_EVT_SYSTEM_BATTERY_STATUS_RUNDOWN;
  v2 = (const EVENT_DESCRIPTOR *)BATTERY_EVT_SYSTEM_BATTERY_STATUS_CHANGE;
  if ( a1 )
    v2 = &BATTERY_EVT_SYSTEM_BATTERY_STATUS_RUNDOWN;
  if ( PopBatteryEtwRegistered )
  {
    v3 = PopBatteryEtwHandle;
    LOBYTE(v1) = EtwEventEnabled(PopBatteryEtwHandle, v2);
    if ( (_BYTE)v1 )
    {
      if ( BYTE1(xmmword_140C3CD28) )
      {
        v6 = xmmword_140C3CB80;
        v4 = 1;
      }
      else
      {
        v6 = 0LL;
        v4 = 0;
      }
      UserData.Reserved = 0;
      v11 = 0;
      v14 = 0;
      v7 = v4;
      UserData.Size = 4;
      UserData.Ptr = (ULONGLONG)&v7;
      v9 = &v6;
      v12 = (char *)&v6 + 4;
      v10 = 4;
      v13 = 4;
      LOBYTE(v1) = EtwWriteEx(v3, v2, 0LL, 0, 0LL, 0LL, 3u, &UserData);
    }
  }
  return (char)v1;
}
