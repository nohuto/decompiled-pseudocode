/*
 * XREFs of PopDiagTraceCsDripsDivergence @ 0x14058F750
 * Callers:
 *     PopDripsWatchdogDiagnosticWorker @ 0x140999490 (PopDripsWatchdogDiagnosticWorker.c)
 * Callees:
 *     EtwWriteEx @ 0x140231630 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x140231870 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

BOOLEAN __fastcall PopDiagTraceCsDripsDivergence(int a1, __int64 a2, __int64 a3)
{
  BOOLEAN result; // al
  REGHANDLE v4; // rbx
  int v5; // [rsp+48h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp+7h] BYREF
  __int64 *v7; // [rsp+68h] [rbp+17h]
  int v8; // [rsp+70h] [rbp+1Fh]
  int v9; // [rsp+74h] [rbp+23h]
  __int64 *v10; // [rsp+78h] [rbp+27h]
  int v11; // [rsp+80h] [rbp+2Fh]
  int v12; // [rsp+84h] [rbp+33h]
  int *v13; // [rsp+88h] [rbp+37h]
  int v14; // [rsp+90h] [rbp+3Fh]
  int v15; // [rsp+94h] [rbp+43h]
  int v16; // [rsp+B8h] [rbp+67h] BYREF
  __int64 v17; // [rsp+C0h] [rbp+6Fh] BYREF
  __int64 v18; // [rsp+C8h] [rbp+77h] BYREF

  v18 = a3;
  v17 = a2;
  v16 = a1;
  result = PopDripsSwHwDivergenceThreshold;
  v5 = PopDripsSwHwDivergenceThreshold;
  if ( PopDiagHandleRegistered )
  {
    v4 = PopDiagHandle;
    result = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_CS_DRIPS_DIVERGENCE);
    if ( result )
    {
      UserData.Reserved = 0;
      v9 = 0;
      v12 = 0;
      v15 = 0;
      UserData.Ptr = (ULONGLONG)&v16;
      v7 = &v17;
      v10 = &v18;
      UserData.Size = 4;
      v13 = &v5;
      v8 = 8;
      v11 = 8;
      v14 = 4;
      return EtwWriteEx(v4, &POP_ETW_EVENT_CS_DRIPS_DIVERGENCE, 0LL, 0, 0LL, 0LL, 4u, &UserData);
    }
  }
  return result;
}
