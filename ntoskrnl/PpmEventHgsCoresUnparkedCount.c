/*
 * XREFs of PpmEventHgsCoresUnparkedCount @ 0x14045AD2E
 * Callers:
 *     PpmParkCalculateUnparkCount @ 0x1402EBC70 (PpmParkCalculateUnparkCount.c)
 * Callees:
 *     EtwWriteEx @ 0x140231630 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x140231870 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

void __fastcall PpmEventHgsCoresUnparkedCount(__int64 a1)
{
  REGHANDLE v2; // rdi
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-9h] BYREF
  __int64 v4; // [rsp+50h] [rbp+7h]
  int v5; // [rsp+58h] [rbp+Fh]
  int v6; // [rsp+5Ch] [rbp+13h]
  __int64 v7; // [rsp+60h] [rbp+17h]
  int v8; // [rsp+68h] [rbp+1Fh]
  int v9; // [rsp+6Ch] [rbp+23h]
  __int64 v10; // [rsp+70h] [rbp+27h]
  int v11; // [rsp+78h] [rbp+2Fh]
  int v12; // [rsp+7Ch] [rbp+33h]
  __int64 v13; // [rsp+80h] [rbp+37h]
  int v14; // [rsp+88h] [rbp+3Fh]
  int v15; // [rsp+8Ch] [rbp+43h]

  if ( PpmEtwRegistered )
  {
    v2 = PpmEtwHandle;
    if ( EtwEventEnabled(PpmEtwHandle, &PPM_ETW_HETERO_PARKING_SELECTION_COUNT) )
    {
      UserData.Reserved = 0;
      v6 = 0;
      v9 = 0;
      v12 = 0;
      v15 = 0;
      UserData.Ptr = a1 + 4;
      v4 = a1 + 16;
      v7 = a1 + 162;
      v10 = a1 + 160;
      v13 = a1 + 161;
      v8 = 1;
      v11 = 1;
      v14 = 1;
      UserData.Size = 2;
      v5 = 8;
      EtwWriteEx(v2, &PPM_ETW_HETERO_PARKING_SELECTION_COUNT, 0LL, 0, 0LL, 0LL, 5u, &UserData);
    }
  }
}
