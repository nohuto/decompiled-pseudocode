/*
 * XREFs of VmpLogColdHint @ 0x1405F77C0
 * Callers:
 *     VmColdPagesHint @ 0x1405F6510 (VmColdPagesHint.c)
 * Callees:
 *     _tlgWriteEx_EtwWriteEx @ 0x1402FC390 (_tlgWriteEx_EtwWriteEx.c)
 *     _tlgKeywordOn @ 0x14035F490 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

void __fastcall VmpLogColdHint(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // r10
  __int64 v7; // r11
  int v8; // [rsp+20h] [rbp-59h]
  int v9; // [rsp+28h] [rbp-51h]
  int Flink; // [rsp+40h] [rbp-39h] BYREF
  __int64 v11; // [rsp+48h] [rbp-31h] BYREF
  __int64 v12; // [rsp+50h] [rbp-29h] BYREF
  __int64 v13; // [rsp+58h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+60h] [rbp-19h] BYREF
  int *p_Flink; // [rsp+80h] [rbp+7h]
  __int64 v16; // [rsp+88h] [rbp+Fh]
  __int64 *v17; // [rsp+90h] [rbp+17h]
  __int64 v18; // [rsp+98h] [rbp+1Fh]
  __int64 *v19; // [rsp+A0h] [rbp+27h]
  __int64 v20; // [rsp+A8h] [rbp+2Fh]
  __int64 *v21; // [rsp+B0h] [rbp+37h]
  __int64 v22; // [rsp+B8h] [rbp+3Fh]

  if ( *(_DWORD *)VmpTraceLoggingProvider > 5u )
  {
    if ( tlgKeywordOn(VmpTraceLoggingProvider, 4LL) )
    {
      Flink = (int)KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink;
      p_Flink = &Flink;
      v17 = &v11;
      v19 = &v12;
      v21 = &v13;
      v16 = v3;
      v13 = v5;
      v11 = a2;
      v18 = 8LL;
      v12 = v7;
      v20 = 8LL;
      v22 = 8LL;
      tlgWriteEx_EtwWriteEx(v6, (unsigned __int8 *)&dword_140034454, v4, 0, v8, v9, 6u, &v14);
    }
  }
}
