/*
 * XREFs of SepInitializeWorkList @ 0x140A489FC
 * Callers:
 *     SepInitializationPhase0 @ 0x140A47920 (SepInitializationPhase0.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x14021CC10 (ExInitializeResourceLite.c)
 */

__int64 SepInitializeWorkList()
{
  __int64 result; // rax

  ExInitializeResourceLite(&stru_140C54680);
  qword_140C546E8 = 0LL;
  qword_140C54668 = (__int64)&SepLsaAuditQueueInfo;
  SepLsaAuditQueueInfo = (__int64)&SepLsaAuditQueueInfo;
  qword_140C54738 = (__int64)ExFreePoolWithTag;
  qword_140C54678 = (__int64)&qword_140C54670;
  qword_140C54670 = (__int64)&qword_140C54670;
  qword_140C54730 = (__int64)SepAdtDetermineInsertQueue;
  word_140C54740 = 3;
  ExInitializeResourceLite(&stru_140C54540);
  qword_140C545F8 = (__int64)ExFreePoolWithTag;
  qword_140C54528 = (__int64)&SepLsaDeletedLogonQueueInfo;
  SepLsaDeletedLogonQueueInfo = (__int64)&SepLsaDeletedLogonQueueInfo;
  result = 1LL;
  word_140C54600 = 1;
  return result;
}
