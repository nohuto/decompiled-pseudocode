/*
 * XREFs of PpmEventHgsActiveWorkloadClass @ 0x140597D08
 * Callers:
 *     PpmPerfRecordMostActiveWorkloadClass @ 0x1402D3B88 (PpmPerfRecordMostActiveWorkloadClass.c)
 * Callees:
 *     EtwWriteEx @ 0x140231630 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x140231870 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

char __fastcall PpmEventHgsActiveWorkloadClass(__int64 a1, __int64 a2, __int64 a3)
{
  _UNKNOWN **v3; // rax
  int v5; // ebx
  REGHANDLE v8; // rsi
  int v10; // [rsp+48h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-39h] BYREF
  __int64 v12; // [rsp+68h] [rbp-29h]
  int v13; // [rsp+70h] [rbp-21h]
  int v14; // [rsp+74h] [rbp-1Dh]
  __int64 v15; // [rsp+78h] [rbp-19h]
  int v16; // [rsp+80h] [rbp-11h]
  int v17; // [rsp+84h] [rbp-Dh]
  __int64 v18; // [rsp+88h] [rbp-9h]
  int v19; // [rsp+90h] [rbp-1h]
  int v20; // [rsp+94h] [rbp+3h]
  int *v21; // [rsp+98h] [rbp+7h]
  int v22; // [rsp+A0h] [rbp+Fh]
  int v23; // [rsp+A4h] [rbp+13h]
  __int64 v24; // [rsp+A8h] [rbp+17h]
  int v25; // [rsp+B0h] [rbp+1Fh]
  int v26; // [rsp+B4h] [rbp+23h]
  __int64 v27; // [rsp+B8h] [rbp+27h]
  int v28; // [rsp+C0h] [rbp+2Fh]
  int v29; // [rsp+C4h] [rbp+33h]
  _UNKNOWN *retaddr; // [rsp+F0h] [rbp+5Fh] BYREF

  v3 = &retaddr;
  v5 = PpmHeteroWorkloadClasses;
  v10 = PpmHeteroWorkloadClasses;
  if ( PpmEtwRegistered )
  {
    v8 = PpmEtwHandle;
    LOBYTE(v3) = EtwEventEnabled(PpmEtwHandle, &PPM_ETW_HGS_HETERO_ACTIVE_WORKLOAD_CLASS);
    if ( (_BYTE)v3 )
    {
      UserData.Reserved = 0;
      v14 = 0;
      v17 = 0;
      v20 = 0;
      v23 = 0;
      v26 = 0;
      v29 = 0;
      UserData.Ptr = a1 + 4;
      v12 = a1 + 16;
      v15 = a1 + 163;
      v18 = a1 + 164;
      v21 = &v10;
      v25 = 8 * v5;
      v28 = 8 * v5;
      v16 = 1;
      v19 = 1;
      UserData.Size = 2;
      v13 = 8;
      v22 = 4;
      v24 = a2;
      v27 = a3;
      LOBYTE(v3) = EtwWriteEx(v8, &PPM_ETW_HGS_HETERO_ACTIVE_WORKLOAD_CLASS, 0LL, 0, 0LL, 0LL, 7u, &UserData);
    }
  }
  return (char)v3;
}
