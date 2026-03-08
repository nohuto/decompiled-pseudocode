/*
 * XREFs of VmpLogLargeSlatFill @ 0x1405F78B4
 * Callers:
 *     VmpFillSlat @ 0x1405F6C78 (VmpFillSlat.c)
 * Callees:
 *     _tlgWriteEx_EtwWriteEx @ 0x1402FC390 (_tlgWriteEx_EtwWriteEx.c)
 *     _tlgKeywordOn @ 0x14035F490 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

void __fastcall VmpLogLargeSlatFill(__int64 a1, __int64 a2)
{
  __int64 v3; // r8
  int v4; // r9d
  __int64 v5; // r10
  __int64 v6; // r11
  int v7; // [rsp+20h] [rbp-59h]
  int v8; // [rsp+28h] [rbp-51h]
  int Flink; // [rsp+40h] [rbp-39h] BYREF
  int v10; // [rsp+44h] [rbp-35h] BYREF
  __int64 v11; // [rsp+48h] [rbp-31h] BYREF
  __int64 v12; // [rsp+50h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+60h] [rbp-19h] BYREF
  int *p_Flink; // [rsp+80h] [rbp+7h]
  __int64 v15; // [rsp+88h] [rbp+Fh]
  __int64 *v16; // [rsp+90h] [rbp+17h]
  __int64 v17; // [rsp+98h] [rbp+1Fh]
  __int64 *v18; // [rsp+A0h] [rbp+27h]
  __int64 v19; // [rsp+A8h] [rbp+2Fh]
  int *v20; // [rsp+B0h] [rbp+37h]
  __int64 v21; // [rsp+B8h] [rbp+3Fh]

  if ( *(_DWORD *)VmpTraceLoggingProvider > 5u )
  {
    if ( tlgKeywordOn(VmpTraceLoggingProvider, 1LL) )
    {
      Flink = (int)KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink;
      p_Flink = &Flink;
      v16 = &v11;
      v18 = &v12;
      v20 = &v10;
      v10 = v4;
      v15 = 4LL;
      v11 = a2;
      v17 = 8LL;
      v12 = v6;
      v19 = 8LL;
      v21 = 4LL;
      tlgWriteEx_EtwWriteEx(v5, (unsigned __int8 *)&byte_140034535, v3, 0, v7, v8, 6u, &v13);
    }
  }
}
