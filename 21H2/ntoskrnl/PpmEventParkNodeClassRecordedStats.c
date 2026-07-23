/*
 * XREFs of PpmEventParkNodeClassRecordedStats @ 0x140579F0C
 * Callers:
 *     PpmParkRecordNodeStatistics @ 0x140206840 (PpmParkRecordNodeStatistics.c)
 * Callees:
 *     EtwWriteEx @ 0x14027F840 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1402C0830 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

char __fastcall PpmEventParkNodeClassRecordedStats(__int16 a1, __int64 a2, char a3, __int64 a4, char a5)
{
  _UNKNOWN **v5; // rax
  REGHANDLE v7; // rbx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-31h] BYREF
  __int64 *v10; // [rsp+58h] [rbp-21h]
  int v11; // [rsp+60h] [rbp-19h]
  int v12; // [rsp+64h] [rbp-15h]
  char *v13; // [rsp+68h] [rbp-11h]
  int v14; // [rsp+70h] [rbp-9h]
  int v15; // [rsp+74h] [rbp-5h]
  char *v16; // [rsp+78h] [rbp-1h]
  int v17; // [rsp+80h] [rbp+7h]
  int v18; // [rsp+84h] [rbp+Bh]
  __int64 v19; // [rsp+88h] [rbp+Fh]
  int v20; // [rsp+90h] [rbp+17h]
  int v21; // [rsp+94h] [rbp+1Bh]
  __int64 v22; // [rsp+98h] [rbp+1Fh]
  int v23; // [rsp+A0h] [rbp+27h]
  int v24; // [rsp+A4h] [rbp+2Bh]
  _UNKNOWN *retaddr; // [rsp+D0h] [rbp+57h] BYREF
  __int16 v26; // [rsp+D8h] [rbp+5Fh] BYREF
  __int64 v27; // [rsp+E0h] [rbp+67h] BYREF
  char v28; // [rsp+E8h] [rbp+6Fh] BYREF

  v5 = &retaddr;
  v28 = a3;
  v27 = a2;
  v26 = a1;
  if ( PpmEtwRegistered )
  {
    v7 = PpmEtwHandle;
    LOBYTE(v5) = EtwEventEnabled(PpmEtwHandle, &PPM_ETW_PARK_NODE_CLASS_STATS);
    if ( (_BYTE)v5 )
    {
      UserData.Reserved = 0;
      v12 = 0;
      v15 = 0;
      v18 = 0;
      v21 = 0;
      v24 = 0;
      UserData.Ptr = (ULONGLONG)&v26;
      v10 = &v27;
      v13 = &v28;
      v16 = &a5;
      v22 = *(_QWORD *)(a4 + 8);
      v23 = 8 * *(_DWORD *)(a4 + 40);
      v14 = 1;
      v17 = 1;
      v19 = a4 + 40;
      UserData.Size = 2;
      v11 = 8;
      v20 = 4;
      LOBYTE(v5) = EtwWriteEx(v7, &PPM_ETW_PARK_NODE_CLASS_STATS, 0LL, 0, 0LL, 0LL, 6u, &UserData);
    }
  }
  return (char)v5;
}
