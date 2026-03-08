/*
 * XREFs of EmpRemoveBadS3PageWorker @ 0x140939D70
 * Callers:
 *     <none>
 * Callees:
 *     WheaPersistBadPageToBcd @ 0x14060F9E0 (WheaPersistBadPageToBcd.c)
 */

__int64 EmpRemoveBadS3PageWorker()
{
  return WheaPersistBadPageToBcd((unsigned int)EmpBadS3Page);
}
