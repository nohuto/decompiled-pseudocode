/*
 * XREFs of PopEstimateChargeTime @ 0x140992B84
 * Callers:
 *     PopBatteryWorker @ 0x14086DD10 (PopBatteryWorker.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140243F90 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     DbgPrintEx @ 0x1402BDD70 (DbgPrintEx.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     PopBatteryEstimatesSpoiled @ 0x14086E98C (PopBatteryEstimatesSpoiled.c)
 */

unsigned __int64 PopEstimateChargeTime()
{
  unsigned __int64 v0; // r15
  __int64 v1; // r14
  unsigned __int64 v2; // r12
  unsigned __int64 v3; // rsi
  int v4; // edi
  char v5; // bl
  __int64 i; // rcx
  unsigned int v7; // eax
  unsigned int v8; // edx
  __int64 v9; // rax
  unsigned __int64 v10; // rcx
  char v12; // [rsp+48h] [rbp-79h] BYREF
  int v13; // [rsp+4Ch] [rbp-75h] BYREF
  __int64 v14; // [rsp+50h] [rbp-71h] BYREF
  unsigned __int64 v15; // [rsp+58h] [rbp-69h] BYREF
  __int64 v16; // [rsp+60h] [rbp-61h] BYREF
  unsigned __int64 v17; // [rsp+68h] [rbp-59h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+78h] [rbp-49h] BYREF
  __int64 *v19; // [rsp+98h] [rbp-29h]
  int v20; // [rsp+A0h] [rbp-21h]
  int v21; // [rsp+A4h] [rbp-1Dh]
  unsigned __int64 *v22; // [rsp+A8h] [rbp-19h]
  int v23; // [rsp+B0h] [rbp-11h]
  int v24; // [rsp+B4h] [rbp-Dh]
  __int64 *v25; // [rsp+B8h] [rbp-9h]
  int v26; // [rsp+C0h] [rbp-1h]
  int v27; // [rsp+C4h] [rbp+3h]
  char *v28; // [rsp+C8h] [rbp+7h]
  int v29; // [rsp+D0h] [rbp+Fh]
  int v30; // [rsp+D4h] [rbp+13h]
  unsigned __int64 *v31; // [rsp+D8h] [rbp+17h]
  int v32; // [rsp+E0h] [rbp+1Fh]
  int v33; // [rsp+E4h] [rbp+23h]
  int *v34; // [rsp+E8h] [rbp+27h]
  int v35; // [rsp+F0h] [rbp+2Fh]
  int v36; // [rsp+F4h] [rbp+33h]

  v0 = -1LL;
  v1 = 0LL;
  v2 = -1LL;
  v3 = 0LL;
  v4 = 0;
  if ( PopBatteryEstimatesSpoiled() )
  {
    v5 = 83;
  }
  else
  {
    for ( i = qword_140C3CB70; (__int64 *)i != &qword_140C3CB70; i = *(_QWORD *)i )
    {
      v7 = *(_DWORD *)(i + 64);
      if ( v7 != -1 )
      {
        v8 = *(_DWORD *)(i + 88);
        if ( v8 != -1 && v8 < v7 )
          v1 += v7 - v8;
      }
      v9 = *(int *)(i + 96);
      if ( (_DWORD)v9 != 0x80000000 && (int)v9 > 0 )
        v3 += v9;
      v4 |= *(_DWORD *)(i + 84);
    }
    v4 &= 7u;
    if ( v4 == 5 )
    {
      v10 = PopMaxChargeRate;
      if ( PopMaxChargeRate < v3 )
      {
        v10 = v3;
        PopMaxChargeRate = v3;
      }
      if ( v1 && v10 )
      {
        v2 = 4000 * v1 / v10;
        if ( v2 > 0x5460 )
        {
          v5 = 76;
        }
        else
        {
          v0 = 4000 * v1 / v10;
          v5 = 79;
        }
      }
      else
      {
        v5 = 90;
      }
    }
    else
    {
      v5 = 80;
    }
  }
  DbgPrintEx(0x92u, 3u, "Charge time: Rate=%lld CapToChg=%lld MaxRate=%lld Est=%lld\n", v3, v1, PopMaxChargeRate, v0);
  if ( (unsigned int)dword_140C03928 > 5 )
  {
    v21 = 0;
    v24 = 0;
    v27 = 0;
    v30 = 0;
    v33 = 0;
    v36 = 0;
    v19 = &v14;
    v22 = &v15;
    v16 = PopMaxChargeRate;
    v25 = &v16;
    v28 = &v12;
    v31 = &v17;
    v34 = &v13;
    v20 = 8;
    v23 = 8;
    v26 = 8;
    v32 = 8;
    v14 = v1;
    v15 = v2;
    v12 = v5;
    v29 = 1;
    v17 = v3;
    v13 = v4;
    v35 = 4;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140C03928,
      (unsigned __int8 *)&dword_140030B54,
      0LL,
      0LL,
      8u,
      &v18);
  }
  return v0;
}
