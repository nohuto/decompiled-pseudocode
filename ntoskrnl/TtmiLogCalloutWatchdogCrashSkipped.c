/*
 * XREFs of TtmiLogCalloutWatchdogCrashSkipped @ 0x1409A3F8C
 * Callers:
 *     TtmpCalloutWatchdogCallback @ 0x1409A03F0 (TtmpCalloutWatchdogCallback.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140243F90 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     PsGetProcessSessionIdEx @ 0x1402BDFA0 (PsGetProcessSessionIdEx.c)
 *     _tlgKeywordOn @ 0x14035F490 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

char __fastcall TtmiLogCalloutWatchdogCrashSkipped(int a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _UNKNOWN **v6; // rax
  int ProcessSessionId; // eax
  int v13; // [rsp+38h] [rbp-89h] BYREF
  int v14; // [rsp+3Ch] [rbp-85h] BYREF
  int v15; // [rsp+40h] [rbp-81h] BYREF
  __int64 v16; // [rsp+48h] [rbp-79h] BYREF
  __int64 v17; // [rsp+50h] [rbp-71h] BYREF
  __int64 v18; // [rsp+58h] [rbp-69h] BYREF
  __int64 v19; // [rsp+60h] [rbp-61h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v20; // [rsp+68h] [rbp-59h] BYREF
  int *v21; // [rsp+88h] [rbp-39h]
  int v22; // [rsp+90h] [rbp-31h]
  int v23; // [rsp+94h] [rbp-2Dh]
  int *v24; // [rsp+98h] [rbp-29h]
  int v25; // [rsp+A0h] [rbp-21h]
  int v26; // [rsp+A4h] [rbp-1Dh]
  int *v27; // [rsp+A8h] [rbp-19h]
  int v28; // [rsp+B0h] [rbp-11h]
  int v29; // [rsp+B4h] [rbp-Dh]
  __int64 *v30; // [rsp+B8h] [rbp-9h]
  int v31; // [rsp+C0h] [rbp-1h]
  int v32; // [rsp+C4h] [rbp+3h]
  __int64 *v33; // [rsp+C8h] [rbp+7h]
  int v34; // [rsp+D0h] [rbp+Fh]
  int v35; // [rsp+D4h] [rbp+13h]
  __int64 *v36; // [rsp+D8h] [rbp+17h]
  int v37; // [rsp+E0h] [rbp+1Fh]
  int v38; // [rsp+E4h] [rbp+23h]
  __int64 *v39; // [rsp+E8h] [rbp+27h]
  int v40; // [rsp+F0h] [rbp+2Fh]
  int v41; // [rsp+F4h] [rbp+33h]
  _UNKNOWN *retaddr; // [rsp+110h] [rbp+4Fh] BYREF

  v6 = &retaddr;
  if ( (unsigned int)dword_140D53910 > 5 )
  {
    LOBYTE(v6) = tlgKeywordOn((__int64)&dword_140D53910, 0x400000000001LL);
    if ( (_BYTE)v6 )
    {
      ProcessSessionId = PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
      v23 = 0;
      v26 = 0;
      v29 = 0;
      v32 = 0;
      v35 = 0;
      v38 = 0;
      v41 = 0;
      v13 = ProcessSessionId;
      v21 = &v13;
      v24 = &v14;
      v27 = &v15;
      v30 = &v16;
      v33 = &v17;
      v18 = a5;
      v36 = &v18;
      v19 = a6;
      v39 = &v19;
      v22 = 4;
      v25 = 4;
      v28 = 4;
      v31 = 8;
      v34 = 8;
      v37 = 8;
      v40 = 8;
      v14 = a1;
      v15 = a2;
      v16 = a3;
      v17 = a4;
      LOBYTE(v6) = tlgWriteTransfer_EtwWriteTransfer(
                     (__int64)&dword_140D53910,
                     (unsigned __int8 *)&word_14003295E,
                     0LL,
                     0LL,
                     9u,
                     &v20);
    }
  }
  return (char)v6;
}
