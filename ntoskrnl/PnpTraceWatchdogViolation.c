/*
 * XREFs of PnpTraceWatchdogViolation @ 0x140562624
 * Callers:
 *     PnpWatchdogEtwWrite @ 0x14055E670 (PnpWatchdogEtwWrite.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140243F90 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14035F490 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

void __fastcall PnpTraceWatchdogViolation(int a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int16 *a5)
{
  unsigned __int16 *v6; // r9
  int v7; // r10d
  char v8; // r11
  char v9; // [rsp+30h] [rbp-81h] BYREF
  int v10; // [rsp+34h] [rbp-7Dh] BYREF
  int v11; // [rsp+38h] [rbp-79h] BYREF
  __int64 v12; // [rsp+40h] [rbp-71h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+50h] [rbp-61h] BYREF
  __int64 *v14; // [rsp+70h] [rbp-41h]
  __int64 v15; // [rsp+78h] [rbp-39h]
  int *v16; // [rsp+80h] [rbp-31h]
  __int64 v17; // [rsp+88h] [rbp-29h]
  int *v18; // [rsp+90h] [rbp-21h]
  __int64 v19; // [rsp+98h] [rbp-19h]
  _DWORD *v20; // [rsp+A0h] [rbp-11h]
  __int64 v21; // [rsp+A8h] [rbp-9h]
  __int64 v22; // [rsp+B0h] [rbp-1h]
  _DWORD v23[2]; // [rsp+B8h] [rbp+7h] BYREF
  _DWORD *v24; // [rsp+C0h] [rbp+Fh]
  __int64 v25; // [rsp+C8h] [rbp+17h]
  __int64 v26; // [rsp+D0h] [rbp+1Fh]
  _DWORD v27[2]; // [rsp+D8h] [rbp+27h] BYREF
  char *v28; // [rsp+E0h] [rbp+2Fh]
  __int64 v29; // [rsp+E8h] [rbp+37h]

  if ( (unsigned int)dword_140C038F0 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_140C038F0, 0x400000000000LL) )
    {
      v14 = &v12;
      v12 = 0x1000000LL;
      v16 = &v10;
      v18 = &v11;
      v20 = v23;
      v22 = *((_QWORD *)v6 + 1);
      v23[0] = *v6;
      v24 = v27;
      v26 = *((_QWORD *)a5 + 1);
      v27[0] = *a5;
      v28 = &v9;
      v15 = 8LL;
      v10 = a1;
      v17 = 4LL;
      v11 = v7;
      v19 = 4LL;
      v21 = 2LL;
      v23[1] = 0;
      v25 = 2LL;
      v27[1] = 0;
      v9 = v8;
      v29 = 1LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140C038F0,
        (unsigned __int8 *)byte_14002C69B,
        0LL,
        0LL,
        0xAu,
        &v13);
    }
  }
}
