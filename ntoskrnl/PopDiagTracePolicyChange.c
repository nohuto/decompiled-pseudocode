/*
 * XREFs of PopDiagTracePolicyChange @ 0x140829464
 * Callers:
 *     PopAdaptivePowerSettingCallback @ 0x140829230 (PopAdaptivePowerSettingCallback.c)
 * Callees:
 *     EtwEventEnabled @ 0x140231870 (EtwEventEnabled.c)
 *     EtwWrite @ 0x1402338C0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

BOOLEAN PopDiagTracePolicyChange()
{
  BOOLEAN result; // al
  REGHANDLE v1; // rbx
  int v2; // [rsp+30h] [rbp-59h] BYREF
  int v3; // [rsp+38h] [rbp-51h] BYREF
  int v4; // [rsp+40h] [rbp-49h] BYREF
  int v5; // [rsp+48h] [rbp-41h] BYREF
  int v6; // [rsp+50h] [rbp-39h] BYREF
  int v7; // [rsp+58h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-29h] BYREF
  int *v9; // [rsp+70h] [rbp-19h]
  int v10; // [rsp+78h] [rbp-11h]
  int v11; // [rsp+7Ch] [rbp-Dh]
  int *v12; // [rsp+80h] [rbp-9h]
  int v13; // [rsp+88h] [rbp-1h]
  int v14; // [rsp+8Ch] [rbp+3h]
  int *v15; // [rsp+90h] [rbp+7h]
  int v16; // [rsp+98h] [rbp+Fh]
  int v17; // [rsp+9Ch] [rbp+13h]
  int *v18; // [rsp+A0h] [rbp+17h]
  int v19; // [rsp+A8h] [rbp+1Fh]
  int v20; // [rsp+ACh] [rbp+23h]
  int *v21; // [rsp+B0h] [rbp+27h]
  int v22; // [rsp+B8h] [rbp+2Fh]
  int v23; // [rsp+BCh] [rbp+33h]

  v7 = 0;
  v6 = PopAdaptiveLockConsoleTimeout;
  v5 = PopInputTimeout;
  v4 = PopInputTimeout;
  result = PopDisplayTimeout;
  v3 = PopDisplayTimeout;
  v2 = PopDisplayTimeout;
  if ( PopDiagHandleRegistered )
  {
    v1 = PopDiagHandle;
    result = EtwEventEnabled(PopDiagHandle, &POP_ETW_ADPM_POLICY_CHANGE);
    if ( result )
    {
      UserData.Reserved = 0;
      v11 = 0;
      v14 = 0;
      v17 = 0;
      v20 = 0;
      v23 = 0;
      UserData.Ptr = (ULONGLONG)&v2;
      UserData.Size = 4;
      v9 = &v3;
      v12 = &v4;
      v15 = &v5;
      v18 = &v6;
      v21 = &v7;
      v10 = 4;
      v13 = 4;
      v16 = 4;
      v19 = 4;
      v22 = 4;
      return EtwWrite(v1, &POP_ETW_ADPM_POLICY_CHANGE, 0LL, 6u, &UserData);
    }
  }
  return result;
}
