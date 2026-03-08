/*
 * XREFs of IpmiLibpHandleSendInterrupt @ 0x140676360
 * Callers:
 *     IpmiLibpKcsSendRequestToBMC @ 0x140675EF8 (IpmiLibpKcsSendRequestToBMC.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall IpmiLibpHandleSendInterrupt(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // [rsp+50h] [rbp+8h] BYREF

  v3 = a1;
  LOBYTE(v3) = 0;
  if ( !qword_140C2C7D0 )
    return 3221225485LL;
  result = qword_140C2C7D0(qword_140C2C7D8, &WheaIpmiContext, a2, &v3, 0LL, 0);
  if ( (int)result >= 0 )
  {
    result = 3221225534LL;
    if ( (_BYTE)v3 != 0xFF )
      return 0LL;
  }
  return result;
}
