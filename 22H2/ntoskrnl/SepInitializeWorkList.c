/*
 * XREFs of SepInitializeWorkList @ 0x140B57DA8
 * Callers:
 *     SepInitializationPhase0 @ 0x140B57104 (SepInitializationPhase0.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x140207480 (ExInitializeResourceLite.c)
 */

__int64 SepInitializeWorkList()
{
  __int64 result; // rax

  ExInitializeResourceLite(&stru_140C71080);
  qword_140C710E8 = 0LL;
  qword_140C71068 = (__int64)&SepLsaAuditQueueInfo;
  SepLsaAuditQueueInfo = (__int64)&SepLsaAuditQueueInfo;
  qword_140C71138 = (__int64)ExFreePool;
  qword_140C71078 = (__int64)&qword_140C71070;
  qword_140C71070 = (__int64)&qword_140C71070;
  qword_140C71130 = (__int64)SepAdtDetermineInsertQueue;
  word_140C71140 = 3;
  ExInitializeResourceLite(&stru_140C70F50);
  qword_140C71008 = (__int64)ExFreePool;
  qword_140C70F38 = (__int64)&SepLsaDeletedLogonQueueInfo;
  SepLsaDeletedLogonQueueInfo = (__int64)&SepLsaDeletedLogonQueueInfo;
  result = 1LL;
  word_140C71010 = 1;
  return result;
}
