/*
 * XREFs of PopDiagTraceIllegalProcessorThrottle @ 0x140591AC8
 * Callers:
 *     PpmPerfCheckForIllegalProcessorThrottle @ 0x140235DF8 (PpmPerfCheckForIllegalProcessorThrottle.c)
 * Callees:
 *     EtwWriteEx @ 0x140231630 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x140231870 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceIllegalProcessorThrottle(int a1, __int64 a2, _QWORD *a3)
{
  char v3; // si
  char v4; // bl
  char v6; // di
  __int64 v7; // rdx
  int v8; // [rsp+40h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-19h] BYREF
  __int64 *v10; // [rsp+60h] [rbp-9h]
  int v11; // [rsp+68h] [rbp-1h]
  int v12; // [rsp+6Ch] [rbp+3h]
  int *v13; // [rsp+70h] [rbp+7h]
  int v14; // [rsp+78h] [rbp+Fh]
  int v15; // [rsp+7Ch] [rbp+13h]
  int *v16; // [rsp+80h] [rbp+17h]
  int v17; // [rsp+88h] [rbp+1Fh]
  int v18; // [rsp+8Ch] [rbp+23h]
  int v19; // [rsp+D0h] [rbp+67h] BYREF
  __int64 v20; // [rsp+D8h] [rbp+6Fh] BYREF

  v20 = a2;
  v19 = a1;
  v3 = PopDiagHandleRegistered;
  v4 = 1;
  v6 = 1;
  if ( !PopDiagHandleRegistered || !EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_ILLEGAL_PROCESSOR_THROTTLE_DIAGNOSTIC) )
    v4 = 0;
  if ( !v3 || !EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_ILLEGAL_PROCESSOR_THROTTLE_OPERATIONAL) )
    v6 = 0;
  if ( v4 || v6 )
  {
    UserData.Reserved = 0;
    v12 = 0;
    UserData.Ptr = (ULONGLONG)&v19;
    UserData.Size = 4;
    v10 = &v20;
    v11 = 8;
    if ( *a3 )
      v7 = (unsigned int)KeMaximumIncrement * (MEMORY[0xFFFFF78000000320] - *a3) / 10000000LL;
    else
      LODWORD(v7) = 0;
    v15 = 0;
    v18 = 0;
    v13 = &v8;
    v16 = &PopProcessorThrottleLogInterval;
    v8 = v7;
    *a3 = MEMORY[0xFFFFF78000000320];
    v14 = 4;
    v17 = 4;
    if ( v4 )
      EtwWriteEx(PopDiagHandle, &POP_ETW_EVENT_ILLEGAL_PROCESSOR_THROTTLE_DIAGNOSTIC, 0LL, 0, 0LL, 0LL, 4u, &UserData);
    if ( v6 )
      EtwWriteEx(PopDiagHandle, &POP_ETW_EVENT_ILLEGAL_PROCESSOR_THROTTLE_OPERATIONAL, 0LL, 0, 0LL, 0LL, 4u, &UserData);
  }
}
