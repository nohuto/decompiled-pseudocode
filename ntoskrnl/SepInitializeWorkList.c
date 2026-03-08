/*
 * XREFs of SepInitializeWorkList @ 0x140B49464
 * Callers:
 *     SepInitializationPhase0 @ 0x140B48678 (SepInitializationPhase0.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x14030FAB0 (ExInitializeResourceLite.c)
 */

__int64 SepInitializeWorkList()
{
  __int64 result; // rax

  ExInitializeResourceLite(&stru_140C70C40);
  qword_140C70CA8 = 0LL;
  qword_140C70C28 = (__int64)&SepLsaAuditQueueInfo;
  SepLsaAuditQueueInfo = (__int64)&SepLsaAuditQueueInfo;
  qword_140C70CF8 = (__int64)ExFreePool;
  qword_140C70C38 = (__int64)&qword_140C70C30;
  qword_140C70C30 = (__int64)&qword_140C70C30;
  qword_140C70CF0 = (__int64)SepAdtDetermineInsertQueue;
  word_140C70D00 = 3;
  ExInitializeResourceLite(&stru_140C70B30);
  qword_140C70BE8 = (__int64)ExFreePool;
  qword_140C70B18 = (__int64)&SepLsaDeletedLogonQueueInfo;
  SepLsaDeletedLogonQueueInfo = (__int64)&SepLsaDeletedLogonQueueInfo;
  result = 1LL;
  word_140C70BF0 = 1;
  return result;
}
