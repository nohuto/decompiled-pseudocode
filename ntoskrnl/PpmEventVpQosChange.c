/*
 * XREFs of PpmEventVpQosChange @ 0x140599FC8
 * Callers:
 *     PpmHvSetVirtualProcessorQos @ 0x14059DC24 (PpmHvSetVirtualProcessorQos.c)
 * Callees:
 *     EtwWriteEx @ 0x140231630 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x140231870 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

BOOLEAN __fastcall PpmEventVpQosChange(__int64 a1)
{
  BOOLEAN result; // al
  int v3; // [rsp+40h] [rbp-C0h] BYREF
  int v4; // [rsp+44h] [rbp-BCh] BYREF
  __int16 v5; // [rsp+48h] [rbp-B8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v7; // [rsp+60h] [rbp-A0h]
  __int64 v8; // [rsp+68h] [rbp-98h]
  __int16 *v9; // [rsp+70h] [rbp-90h]
  __int64 v10; // [rsp+78h] [rbp-88h]
  __int64 v11; // [rsp+80h] [rbp-80h]
  __int64 v12; // [rsp+88h] [rbp-78h]
  int *v13; // [rsp+90h] [rbp-70h]
  __int64 v14; // [rsp+98h] [rbp-68h]
  int *v15; // [rsp+A0h] [rbp-60h]
  __int64 v16; // [rsp+A8h] [rbp-58h]
  int *v17; // [rsp+B0h] [rbp-50h]
  __int64 v18; // [rsp+B8h] [rbp-48h]
  int *v19; // [rsp+C0h] [rbp-40h]
  __int64 v20; // [rsp+C8h] [rbp-38h]
  int *v21; // [rsp+D0h] [rbp-30h]
  __int64 v22; // [rsp+D8h] [rbp-28h]
  int *v23; // [rsp+E0h] [rbp-20h]
  __int64 v24; // [rsp+E8h] [rbp-18h]
  int *v25; // [rsp+F0h] [rbp-10h]
  __int64 v26; // [rsp+F8h] [rbp-8h]
  int *v27; // [rsp+100h] [rbp+0h]
  __int64 v28; // [rsp+108h] [rbp+8h]
  __int64 v29; // [rsp+110h] [rbp+10h]
  __int64 v30; // [rsp+118h] [rbp+18h]

  v4 = 100;
  v3 = 0;
  if ( PpmEtwRegistered || (result = EtwEventEnabled(PpmEtwHandle, &PPM_ETW_PROCESSOR_PERF_STATE_CHANGE)) != 0 )
  {
    v5 = *(unsigned __int8 *)(a1 + 208);
    *(_QWORD *)&UserData.Size = 4LL;
    UserData.Ptr = (ULONGLONG)&v3;
    v7 = a1 + 68;
    v9 = &v5;
    v11 = a1 + 209;
    v13 = &v4;
    v15 = &v4;
    v17 = &v4;
    v19 = &v4;
    v21 = &v3;
    v23 = &v3;
    v25 = &v3;
    v27 = &v3;
    v29 = a1 + 34116;
    v8 = 4LL;
    v10 = 2LL;
    v12 = 1LL;
    v14 = 4LL;
    v16 = 4LL;
    v18 = 4LL;
    v20 = 4LL;
    v22 = 4LL;
    v24 = 4LL;
    v26 = 4LL;
    v28 = 4LL;
    v30 = 4LL;
    return EtwWriteEx(PpmEtwHandle, &PPM_ETW_PROCESSOR_PERF_STATE_CHANGE, 0LL, 0, 0LL, 0LL, 0xDu, &UserData);
  }
  return result;
}
