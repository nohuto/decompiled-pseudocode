/*
 * XREFs of CiSchedulerQueryCurrentTime @ 0x1C0001630
 * Callers:
 *     CiSchedulerProcessDeadlines @ 0x1C0001250 (CiSchedulerProcessDeadlines.c)
 *     CiSchedulerSleep @ 0x1C00014A0 (CiSchedulerSleep.c)
 * Callees:
 *     <none>
 */

__int64 CiSchedulerQueryCurrentTime()
{
  __int64 v1; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0LL;
  if ( CiSchedulerWaitStatus == 257 )
    return KeQueryInterruptTimePrecise(&v1);
  else
    return MEMORY[0xFFFFF78000000008];
}
