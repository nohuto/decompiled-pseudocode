/*
 * XREFs of RtlpWnfETWEventPublish @ 0x1800DE938
 * Callers:
 *     RtlPublishWnfStateData @ 0x18007D520 (RtlPublishWnfStateData.c)
 *     RtlTestAndPublishWnfStateData @ 0x1800850A0 (RtlTestAndPublishWnfStateData.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008C910 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009E090 (NtTraceEvent.c)
 */

NTSTATUS __fastcall RtlpWnfETWEventPublish(__int64 a1, int a2)
{
  __int64 v2; // rcx
  _BYTE Fields[6]; // [rsp+28h] [rbp-40h] BYREF
  __int16 v5; // [rsp+2Eh] [rbp-3Ah]
  __int64 v6; // [rsp+48h] [rbp-20h]
  int v7; // [rsp+50h] [rbp-18h]

  v5 = 3363;
  v6 = a1;
  v7 = a2;
  if ( RtlGetCurrentServiceSessionId() )
    v2 = (__int64)NtCurrentPeb()->SharedData + 564;
  else
    v2 = 2147353486LL;
  return NtTraceEvent((HANDLE)*(unsigned __int8 *)v2, 0x20402u, 0xCu, Fields);
}
