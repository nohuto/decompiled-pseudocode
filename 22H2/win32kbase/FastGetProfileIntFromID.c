/*
 * XREFs of FastGetProfileIntFromID @ 0x1C0061E60
 * Callers:
 *     ?UserInitialize@@YAJXZ @ 0x1C00AE3AC (-UserInitialize@@YAJXZ.c)
 * Callees:
 *     FastGetProfileIntW @ 0x1C0033AC0 (FastGetProfileIntW.c)
 *     RtlLoadStringOrError @ 0x1C0061FA0 (RtlLoadStringOrError.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 */

__int64 __fastcall FastGetProfileIntFromID(
        __int64 a1,
        unsigned int a2,
        ULONG MessageId,
        ULONG a4,
        PULONG Value,
        int a6)
{
  int v10[40]; // [rsp+30h] [rbp-C8h] BYREF

  RtlLoadStringOrError(MessageId, v10);
  return FastGetProfileIntW(a1, a2, (__int64)v10, a4, Value, a6);
}
