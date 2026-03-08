/*
 * XREFs of PpmEventTraceHeteroDistributeUtility @ 0x140599360
 * Callers:
 *     PpmHeteroDistributeUtility @ 0x140594ED0 (PpmHeteroDistributeUtility.c)
 * Callees:
 *     EtwWriteEx @ 0x140231630 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x140231870 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

char __fastcall PpmEventTraceHeteroDistributeUtility(__int64 a1, char a2, char a3)
{
  _UNKNOWN **v3; // rax
  REGHANDLE v5; // rbx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp+7h] BYREF
  __int64 v8; // [rsp+58h] [rbp+17h]
  int v9; // [rsp+60h] [rbp+1Fh]
  int v10; // [rsp+64h] [rbp+23h]
  char *v11; // [rsp+68h] [rbp+27h]
  int v12; // [rsp+70h] [rbp+2Fh]
  int v13; // [rsp+74h] [rbp+33h]
  char *v14; // [rsp+78h] [rbp+37h]
  int v15; // [rsp+80h] [rbp+3Fh]
  int v16; // [rsp+84h] [rbp+43h]
  _UNKNOWN *retaddr; // [rsp+A0h] [rbp+5Fh] BYREF
  char v18; // [rsp+B0h] [rbp+6Fh] BYREF
  char v19; // [rsp+B8h] [rbp+77h] BYREF

  v3 = &retaddr;
  v19 = a3;
  v18 = a2;
  if ( PpmEtwRegistered )
  {
    v5 = PpmEtwHandle;
    LOBYTE(v3) = EtwEventEnabled(PpmEtwHandle, &PPM_ETW_HETERO_DISTRIBUTE_UTILITY);
    if ( (_BYTE)v3 )
    {
      UserData.Reserved = 0;
      v10 = 0;
      v13 = 0;
      v16 = 0;
      UserData.Ptr = a1 + 4;
      v12 = 1;
      v8 = a1 + 16;
      v11 = &v18;
      v14 = &v19;
      v15 = 1;
      UserData.Size = 2;
      v9 = 8;
      LOBYTE(v3) = EtwWriteEx(v5, &PPM_ETW_HETERO_DISTRIBUTE_UTILITY, 0LL, 0, 0LL, 0LL, 4u, &UserData);
    }
  }
  return (char)v3;
}
