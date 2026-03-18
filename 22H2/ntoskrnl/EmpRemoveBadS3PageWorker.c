/*
 * XREFs of EmpRemoveBadS3PageWorker @ 0x14093CD90
 * Callers:
 *     <none>
 * Callees:
 *     WheaPersistBadPageToBcd @ 0x140611E00 (WheaPersistBadPageToBcd.c)
 */

__int64 EmpRemoveBadS3PageWorker()
{
  return WheaPersistBadPageToBcd((unsigned int)EmpBadS3Page);
}
