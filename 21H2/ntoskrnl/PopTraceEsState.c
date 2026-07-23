/*
 * XREFs of PopTraceEsState @ 0x14038CA64
 * Callers:
 *     PopEsSnapTelemetry @ 0x1407793F0 (PopEsSnapTelemetry.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14027E1A4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall PopTraceEsState(__int64 a1, __int64 a2, int a3)
{
  NTSTATUS result; // eax
  int v4; // [rsp+30h] [rbp-D0h] BYREF
  int v5; // [rsp+34h] [rbp-CCh] BYREF
  int v6; // [rsp+38h] [rbp-C8h] BYREF
  int v7; // [rsp+3Ch] [rbp-C4h] BYREF
  int v8; // [rsp+40h] [rbp-C0h] BYREF
  int v9; // [rsp+44h] [rbp-BCh] BYREF
  __int64 v10; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v11; // [rsp+50h] [rbp-B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v12; // [rsp+60h] [rbp-A0h] BYREF
  int *v13; // [rsp+80h] [rbp-80h]
  __int64 v14; // [rsp+88h] [rbp-78h]
  __int64 *v15; // [rsp+90h] [rbp-70h]
  __int64 v16; // [rsp+98h] [rbp-68h]
  int *v17; // [rsp+A0h] [rbp-60h]
  __int64 v18; // [rsp+A8h] [rbp-58h]
  int *v19; // [rsp+B0h] [rbp-50h]
  __int64 v20; // [rsp+B8h] [rbp-48h]
  int *v21; // [rsp+C0h] [rbp-40h]
  __int64 v22; // [rsp+C8h] [rbp-38h]
  int *v23; // [rsp+D0h] [rbp-30h]
  __int64 v24; // [rsp+D8h] [rbp-28h]
  int *v25; // [rsp+E0h] [rbp-20h]
  __int64 v26; // [rsp+E8h] [rbp-18h]
  __int64 *v27; // [rsp+F0h] [rbp-10h]
  __int64 v28; // [rsp+F8h] [rbp-8h]

  if ( (unsigned int)dword_140C02228 > 5 )
  {
    v4 = PopEsReason;
    v10 = a2;
    v13 = &v4;
    v5 = a3;
    v15 = &v10;
    v14 = 4LL;
    v17 = &v5;
    v6 = (unsigned __int8)PopEsAcOnline;
    v19 = &v6;
    v7 = PopEsMode;
    v21 = &v7;
    v8 = PopEsLastBatteryThreshold;
    v23 = &v8;
    v9 = (unsigned __int8)PopEsLastUserAwaySetting;
    v25 = &v9;
    v27 = &v11;
    v16 = 8LL;
    v18 = 4LL;
    v20 = 4LL;
    v22 = 4LL;
    v24 = 4LL;
    v26 = 4LL;
    v11 = 0x1000000LL;
    v28 = 8LL;
    return tlgWriteTransfer_EtwWriteTransfer(
             (__int64)&dword_140C02228,
             (unsigned __int8 *)&dword_14002859C + 1,
             0LL,
             0LL,
             0xAu,
             &v12);
  }
  return result;
}
