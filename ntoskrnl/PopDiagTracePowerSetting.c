/*
 * XREFs of PopDiagTracePowerSetting @ 0x14078F8A0
 * Callers:
 *     PopTracePowerSettingChange @ 0x14078F880 (PopTracePowerSettingChange.c)
 *     PopDiagTraceControlCallback @ 0x14085EC40 (PopDiagTraceControlCallback.c)
 * Callees:
 *     EtwEventEnabled @ 0x140231870 (EtwEventEnabled.c)
 *     EtwWrite @ 0x1402338C0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

char __fastcall PopDiagTracePowerSetting(char a1, ULONGLONG a2, int a3, __int64 a4)
{
  const EVENT_DESCRIPTOR *v4; // rax
  const EVENT_DESCRIPTOR *v5; // rbx
  REGHANDLE v9; // rdi
  int v11; // [rsp+38h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-9h] BYREF
  int *v13; // [rsp+58h] [rbp+7h]
  int v14; // [rsp+60h] [rbp+Fh]
  int v15; // [rsp+64h] [rbp+13h]
  __int64 v16; // [rsp+68h] [rbp+17h]
  int v17; // [rsp+70h] [rbp+1Fh]
  int v18; // [rsp+74h] [rbp+23h]
  int *v19; // [rsp+78h] [rbp+27h]
  int v20; // [rsp+80h] [rbp+2Fh]
  int v21; // [rsp+84h] [rbp+33h]
  int v22; // [rsp+C8h] [rbp+77h] BYREF

  v22 = a3;
  v4 = &POP_ETW_EVENT_POWER_SETTING_CHANGE;
  v5 = (const EVENT_DESCRIPTOR *)POP_ETW_EVENT_POWER_SETTING_RUNDOWN;
  if ( !a1 )
    v5 = &POP_ETW_EVENT_POWER_SETTING_CHANGE;
  if ( PopDiagHandleRegistered )
  {
    v9 = PopDiagHandle;
    LOBYTE(v4) = EtwEventEnabled(PopDiagHandle, v5);
    if ( (_BYTE)v4 )
    {
      v11 = 0;
      UserData.Reserved = 0;
      v15 = 0;
      v18 = 0;
      v21 = 0;
      v13 = &v22;
      v19 = &v11;
      UserData.Ptr = a2;
      UserData.Size = 16;
      v14 = 4;
      v16 = a4;
      v17 = a3;
      v20 = 4;
      LOBYTE(v4) = EtwWrite(v9, v5, 0LL, 4u, &UserData);
    }
  }
  return (char)v4;
}
