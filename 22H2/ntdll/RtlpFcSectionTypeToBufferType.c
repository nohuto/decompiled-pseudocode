/*
 * XREFs of RtlpFcSectionTypeToBufferType @ 0x18011B15C
 * Callers:
 *     RtlpFcUpdateLocalConfiguration @ 0x18005DD2C (RtlpFcUpdateLocalConfiguration.c)
 *     RtlpFcMapBuffers @ 0x18005DF00 (RtlpFcMapBuffers.c)
 * Callees:
 *     __security_check_cookie @ 0x18008C910 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpFcSectionTypeToBufferType(int a1)
{
  _DWORD v2[4]; // [rsp+0h] [rbp-28h]

  v2[0] = 0;
  v2[1] = 1;
  v2[2] = 2;
  return (unsigned int)v2[a1];
}
