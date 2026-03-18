/*
 * XREFs of RtlOwnerAcesPresent @ 0x14022A360
 * Callers:
 *     SepAccessCheckAndAuditAlarm @ 0x140722B40 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     RtlpOwnerAcesPresent @ 0x14022A380 (RtlpOwnerAcesPresent.c)
 */

__int64 __fastcall RtlOwnerAcesPresent(__int64 a1)
{
  return RtlpOwnerAcesPresent(0LL, a1);
}
