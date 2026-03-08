/*
 * XREFs of PpmEventTraceMultiClassHeteroResponseUpdate @ 0x140599908
 * Callers:
 *     PpmCheckComputeMultiClassHeteroResponse @ 0x140594418 (PpmCheckComputeMultiClassHeteroResponse.c)
 *     PpmHeteroComputeMultiClassUnparkCount @ 0x140594A00 (PpmHeteroComputeMultiClassUnparkCount.c)
 * Callees:
 *     EtwWriteEx @ 0x140231630 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x140231870 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

char __fastcall PpmEventTraceMultiClassHeteroResponseUpdate(char a1, __int64 a2, __int64 a3)
{
  _UNKNOWN **v3; // rax
  REGHANDLE v5; // rbx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-9h] BYREF
  __int64 v8; // [rsp+58h] [rbp+7h]
  int v9; // [rsp+60h] [rbp+Fh]
  int v10; // [rsp+64h] [rbp+13h]
  __int64 v11; // [rsp+68h] [rbp+17h]
  int v12; // [rsp+70h] [rbp+1Fh]
  int v13; // [rsp+74h] [rbp+23h]
  __int64 v14; // [rsp+78h] [rbp+27h]
  int v15; // [rsp+80h] [rbp+2Fh]
  int v16; // [rsp+84h] [rbp+33h]
  __int64 *v17; // [rsp+88h] [rbp+37h]
  int v18; // [rsp+90h] [rbp+3Fh]
  int v19; // [rsp+94h] [rbp+43h]
  _UNKNOWN *retaddr; // [rsp+B0h] [rbp+5Fh] BYREF
  char v21; // [rsp+B8h] [rbp+67h] BYREF
  __int64 v22; // [rsp+C8h] [rbp+77h] BYREF

  v3 = &retaddr;
  v22 = a3;
  v21 = a1;
  if ( PpmEtwRegistered )
  {
    v5 = PpmEtwHandle;
    LOBYTE(v3) = EtwEventEnabled(PpmEtwHandle, &PPM_ETW_MULTI_CLASS_HETERO_RESPONSE_UPDATE);
    if ( (_BYTE)v3 )
    {
      UserData.Reserved = 0;
      v10 = 0;
      v13 = 0;
      v16 = 0;
      v19 = 0;
      UserData.Ptr = (ULONGLONG)&v21;
      v11 = a2 + 3;
      v14 = a2 + 8;
      UserData.Size = 1;
      v9 = 1;
      v12 = 1;
      v17 = &v22;
      v15 = 8;
      v18 = 8;
      v8 = a2;
      LOBYTE(v3) = EtwWriteEx(v5, &PPM_ETW_MULTI_CLASS_HETERO_RESPONSE_UPDATE, 0LL, 0, 0LL, 0LL, 5u, &UserData);
    }
  }
  return (char)v3;
}
