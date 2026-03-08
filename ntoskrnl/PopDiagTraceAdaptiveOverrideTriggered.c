/*
 * XREFs of PopDiagTraceAdaptiveOverrideTriggered @ 0x14098966C
 * Callers:
 *     PopSessionConnected @ 0x14079A204 (PopSessionConnected.c)
 *     PopAdaptiveWnfCallback @ 0x140998A20 (PopAdaptiveWnfCallback.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140243F90 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14035F490 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceAdaptiveOverrideTriggered(__int64 a1)
{
  int v2; // r9d
  int v3; // r10d
  int v4; // r11d
  int v5; // [rsp+30h] [rbp-69h] BYREF
  int v6; // [rsp+34h] [rbp-65h] BYREF
  int v7; // [rsp+38h] [rbp-61h] BYREF
  __int64 v8; // [rsp+40h] [rbp-59h] BYREF
  __int64 v9; // [rsp+48h] [rbp-51h] BYREF
  __int64 v10; // [rsp+50h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+60h] [rbp-39h] BYREF
  __int64 *v12; // [rsp+80h] [rbp-19h]
  int v13; // [rsp+88h] [rbp-11h]
  int v14; // [rsp+8Ch] [rbp-Dh]
  __int64 *v15; // [rsp+90h] [rbp-9h]
  int v16; // [rsp+98h] [rbp-1h]
  int v17; // [rsp+9Ch] [rbp+3h]
  int *v18; // [rsp+A0h] [rbp+7h]
  int v19; // [rsp+A8h] [rbp+Fh]
  int v20; // [rsp+ACh] [rbp+13h]
  int *v21; // [rsp+B0h] [rbp+17h]
  int v22; // [rsp+B8h] [rbp+1Fh]
  int v23; // [rsp+BCh] [rbp+23h]
  int *v24; // [rsp+C0h] [rbp+27h]
  int v25; // [rsp+C8h] [rbp+2Fh]
  int v26; // [rsp+CCh] [rbp+33h]
  __int64 *v27; // [rsp+D0h] [rbp+37h]
  int v28; // [rsp+D8h] [rbp+3Fh]
  int v29; // [rsp+DCh] [rbp+43h]

  if ( (unsigned int)dword_140C03928 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_140C03928, 0x400000000000LL) )
    {
      v14 = 0;
      v12 = &v8;
      v13 = 8;
      v8 = a1;
      v17 = 0;
      v20 = 0;
      v23 = 0;
      v26 = 0;
      v29 = 0;
      v16 = 8;
      v15 = &v9;
      v9 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
          * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
      v18 = &v5;
      v19 = 4;
      v21 = &v6;
      v24 = &v7;
      v27 = &v10;
      v22 = 4;
      v7 = v2;
      v25 = 4;
      v28 = 8;
      v5 = v4;
      v6 = v3;
      v10 = 0x1000000LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140C03928,
        (unsigned __int8 *)&byte_14002F687,
        0LL,
        0LL,
        8u,
        &v11);
    }
  }
}
