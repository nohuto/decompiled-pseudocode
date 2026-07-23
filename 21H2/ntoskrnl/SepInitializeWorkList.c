/*
 * XREFs of SepInitializeWorkList @ 0x140A499FC
 * Callers:
 *     SepInitializationPhase0 @ 0x140A48920 (SepInitializationPhase0.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x1402C1550 (ExInitializeResourceLite.c)
 */

__int64 SepInitializeWorkList()
{
  __int64 result; // rax

  ExInitializeResourceLite(&stru_140C546C0);
  qword_140C54728 = 0LL;
  qword_140C546A8 = (__int64)&SepLsaAuditQueueInfo;
  SepLsaAuditQueueInfo = (__int64)&SepLsaAuditQueueInfo;
  qword_140C54778 = (__int64)ExFreePoolWithTag;
  qword_140C546B8 = (__int64)&qword_140C546B0;
  qword_140C546B0 = (__int64)&qword_140C546B0;
  qword_140C54770 = (__int64)SepAdtDetermineInsertQueue;
  word_140C54780 = 3;
  ExInitializeResourceLite(&stru_140C54550);
  qword_140C54608 = (__int64)ExFreePoolWithTag;
  qword_140C54538 = (__int64)&SepLsaDeletedLogonQueueInfo;
  SepLsaDeletedLogonQueueInfo = (__int64)&SepLsaDeletedLogonQueueInfo;
  result = 1LL;
  word_140C54610 = 1;
  return result;
}
