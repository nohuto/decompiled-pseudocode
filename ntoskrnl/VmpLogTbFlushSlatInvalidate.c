/*
 * XREFs of VmpLogTbFlushSlatInvalidate @ 0x1405F7AAC
 * Callers:
 *     VmpProcessInvalidateSlat @ 0x1405F8654 (VmpProcessInvalidateSlat.c)
 * Callees:
 *     _tlgWriteEx_EtwWriteEx @ 0x1402FC390 (_tlgWriteEx_EtwWriteEx.c)
 *     _tlgKeywordOn @ 0x14035F490 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

void __fastcall VmpLogTbFlushSlatInvalidate(__int64 a1, __int64 a2)
{
  __int64 v3; // r9
  __int64 v4; // r10
  __int64 v5; // r11
  int Flink; // [rsp+40h] [rbp-39h] BYREF
  __int64 v7; // [rsp+48h] [rbp-31h] BYREF
  __int64 v8; // [rsp+50h] [rbp-29h] BYREF
  __int64 v9; // [rsp+58h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+60h] [rbp-19h] BYREF
  int *p_Flink; // [rsp+80h] [rbp+7h]
  __int64 v12; // [rsp+88h] [rbp+Fh]
  __int64 *v13; // [rsp+90h] [rbp+17h]
  __int64 v14; // [rsp+98h] [rbp+1Fh]
  __int64 *v15; // [rsp+A0h] [rbp+27h]
  __int64 v16; // [rsp+A8h] [rbp+2Fh]
  __int64 *v17; // [rsp+B0h] [rbp+37h]
  __int64 v18; // [rsp+B8h] [rbp+3Fh]

  if ( *(_DWORD *)VmpTraceLoggingProvider > 5u )
  {
    if ( tlgKeywordOn(VmpTraceLoggingProvider, 2LL) )
    {
      Flink = (int)KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink;
      p_Flink = &Flink;
      v13 = &v7;
      v15 = &v8;
      v17 = &v9;
      v9 = v3;
      v12 = 4LL;
      v7 = a2;
      v14 = 8LL;
      v8 = v5;
      v16 = 8LL;
      v18 = 8LL;
      tlgWriteEx_EtwWriteEx(v4, (unsigned __int8 *)&byte_14003457F, 0LL, 0, 0, 0, 6u, &v10);
    }
  }
}
