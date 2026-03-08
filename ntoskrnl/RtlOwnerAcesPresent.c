/*
 * XREFs of RtlOwnerAcesPresent @ 0x1402CBBA0
 * Callers:
 *     SepAccessCheckAndAuditAlarm @ 0x1406973E0 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     RtlpOwnerAcesPresent @ 0x1402CBBC0 (RtlpOwnerAcesPresent.c)
 */

__int64 __fastcall RtlOwnerAcesPresent(__int64 a1)
{
  return RtlpOwnerAcesPresent(0LL, a1);
}
