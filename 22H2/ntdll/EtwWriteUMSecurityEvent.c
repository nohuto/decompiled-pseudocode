/*
 * XREFs of EtwWriteUMSecurityEvent @ 0x18007C8C0
 * Callers:
 *     EvtIntReportEventWorker @ 0x18004FE90 (EvtIntReportEventWorker.c)
 * Callees:
 *     RtlNtStatusToDosError @ 0x180051950 (RtlNtStatusToDosError.c)
 *     __security_check_cookie @ 0x18008C910 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009E090 (NtTraceEvent.c)
 */

__int64 __fastcall EtwWriteUMSecurityEvent(__int128 *a1, __int16 a2, int a3, __int64 a4)
{
  unsigned int v4; // ebx
  __int128 v5; // xmm0
  _GUID ActivityId; // xmm0
  NTSTATUS v7; // eax
  _BYTE v9[4]; // [rsp+20h] [rbp-88h] BYREF
  __int16 v10; // [rsp+24h] [rbp-84h]
  __int16 v11; // [rsp+26h] [rbp-82h]
  __int128 v12; // [rsp+48h] [rbp-60h]
  _GUID v13; // [rsp+60h] [rbp-48h]
  char v14; // [rsp+70h] [rbp-38h]
  __int16 v15; // [rsp+72h] [rbp-36h]
  int v16; // [rsp+74h] [rbp-34h]
  __int64 v17; // [rsp+78h] [rbp-30h]
  int v18; // [rsp+90h] [rbp-18h]

  v4 = 0;
  if ( !a1 )
    return 87LL;
  v5 = *a1;
  v11 = a2;
  v10 = 0;
  v12 = v5;
  v16 = a3;
  v17 = a4;
  ActivityId = NtCurrentTeb()->ActivityId;
  v14 = 0;
  v15 = 0;
  v13 = ActivityId;
  v18 = 0;
  v7 = NtTraceEvent(0LL, 1280LL, 120LL, v9);
  if ( v7 )
    return RtlNtStatusToDosError(v7);
  return v4;
}
