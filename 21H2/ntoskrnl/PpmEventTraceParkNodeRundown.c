/*
 * XREFs of PpmEventTraceParkNodeRundown @ 0x1408F32D4
 * Callers:
 *     PpmEventTraceControlCallback @ 0x1407D5560 (PpmEventTraceControlCallback.c)
 * Callees:
 *     EtwWrite @ 0x14027F7C0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1402C0830 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

void __fastcall PpmEventTraceParkNodeRundown(__int64 a1)
{
  _QWORD *v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // [rsp+30h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-29h] BYREF
  __int64 v7; // [rsp+50h] [rbp-19h]
  int v8; // [rsp+58h] [rbp-11h]
  int v9; // [rsp+5Ch] [rbp-Dh]
  __int64 v10; // [rsp+60h] [rbp-9h]
  int v11; // [rsp+68h] [rbp-1h]
  int v12; // [rsp+6Ch] [rbp+3h]
  __int64 v13; // [rsp+70h] [rbp+7h]
  int v14; // [rsp+78h] [rbp+Fh]
  int v15; // [rsp+7Ch] [rbp+13h]
  __int64 v16; // [rsp+80h] [rbp+17h]
  int v17; // [rsp+88h] [rbp+1Fh]
  int v18; // [rsp+8Ch] [rbp+23h]
  __int64 *v19; // [rsp+90h] [rbp+27h]
  int v20; // [rsp+98h] [rbp+2Fh]
  int v21; // [rsp+9Ch] [rbp+33h]
  __int64 v22; // [rsp+A0h] [rbp+37h]
  int v23; // [rsp+A8h] [rbp+3Fh]
  int v24; // [rsp+ACh] [rbp+43h]

  if ( PpmEtwRegistered && EtwEventEnabled(PpmEtwHandle, &PPM_ETW_PARK_NODE_RUNDOWN) )
  {
    UserData.Reserved = 0;
    v9 = 0;
    v2 = (_QWORD *)(a1 + 56);
    v12 = 0;
    v3 = 2LL;
    v15 = 0;
    v18 = 0;
    UserData.Ptr = a1 + 4;
    v7 = a1 + 8;
    UserData.Size = 2;
    v10 = a1 + 32;
    v13 = a1 + 134;
    v16 = a1 + 136;
    v4 = 0LL;
    v8 = 8;
    v11 = 8;
    v14 = 1;
    v17 = 1;
    do
    {
      v4 |= *v2++;
      --v3;
    }
    while ( v3 );
    v21 = 0;
    v24 = 0;
    v5 = v4;
    v19 = &v5;
    v22 = a1 + 48;
    v20 = 8;
    v23 = 8;
    EtwWrite(PpmEtwHandle, &PPM_ETW_PARK_NODE_RUNDOWN, 0LL, 7u, &UserData);
  }
}
