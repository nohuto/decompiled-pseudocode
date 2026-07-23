/*
 * XREFs of TppETWPoolClose @ 0x18011272C
 * Callers:
 *     TpReleasePool @ 0x18004F2A0 (TpReleasePool.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008C910 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009E090 (NtTraceEvent.c)
 */

NTSTATUS __fastcall TppETWPoolClose(__int64 a1)
{
  __int64 v1; // rcx
  _BYTE Fields[6]; // [rsp+20h] [rbp-38h] BYREF
  __int16 v4; // [rsp+26h] [rbp-32h]
  __int64 v5; // [rsp+40h] [rbp-18h]

  v5 = a1;
  v4 = 7206;
  if ( RtlGetCurrentServiceSessionId() )
    v1 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v1 = 2147353478LL;
  return NtTraceEvent((HANDLE)*(unsigned __int8 *)v1, 0x402u, 8u, Fields);
}
