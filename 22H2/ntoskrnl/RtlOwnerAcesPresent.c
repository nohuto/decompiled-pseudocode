/*
 * XREFs of RtlOwnerAcesPresent @ 0x140337460
 * Callers:
 *     SepAccessCheckAndAuditAlarm @ 0x1406C10C0 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     RtlpOwnerAcesPresent @ 0x140337480 (RtlpOwnerAcesPresent.c)
 */

__int64 __fastcall RtlOwnerAcesPresent(__int64 a1)
{
  return RtlpOwnerAcesPresent(0LL, a1);
}
