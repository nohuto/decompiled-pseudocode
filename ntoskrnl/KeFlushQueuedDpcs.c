/*
 * XREFs of KeFlushQueuedDpcs @ 0x1402AF200
 * Callers:
 *     KeCleanupThreadState @ 0x1402D35E4 (KeCleanupThreadState.c)
 *     MmPageEntireDriver @ 0x140729DE0 (MmPageEntireDriver.c)
 *     IopDeleteDriver @ 0x14085AE30 (IopDeleteDriver.c)
 *     ExpTimeZoneCleanupSiloState @ 0x1409F5234 (ExpTimeZoneCleanupSiloState.c)
 *     ExpPartitionDestroy @ 0x1409FDA98 (ExpPartitionDestroy.c)
 * Callees:
 *     KeEnumerateNextProcessor @ 0x140234A60 (KeEnumerateNextProcessor.c)
 *     KeAddProcessorAffinityEx @ 0x140234B50 (KeAddProcessorAffinityEx.c)
 *     KeGenericProcessorCallback @ 0x1402A9E48 (KeGenericProcessorCallback.c)
 *     KiGetDeepIdleProcessors @ 0x1402AF0A0 (KiGetDeepIdleProcessors.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

void KeFlushQueuedDpcs(void)
{
  __int64 v0; // [rsp+28h] [rbp-E0h] BYREF
  unsigned __int16 *v1[3]; // [rsp+30h] [rbp-D8h] BYREF
  _QWORD v2[34]; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v3[34]; // [rsp+158h] [rbp+50h] BYREF

  LODWORD(v0) = 0;
  LODWORD(v2[0]) = 2097153;
  memset((char *)v2 + 4, 0, 0x104uLL);
  LODWORD(v3[0]) = 2097153;
  memset((char *)v3 + 4, 0, 0x104uLL);
  KiGetDeepIdleProcessors((unsigned __int16 *)v2, (__int64)v3);
  v1[1] = (unsigned __int16 *)v2[1];
  v1[0] = (unsigned __int16 *)v2;
  memset(&v1[2], 0, sizeof(unsigned __int16 *));
  while ( !(unsigned int)KeEnumerateNextProcessor(&v0, v1) )
  {
    if ( *(_DWORD *)(KiProcessorBlock[(unsigned int)v0] + 13244) )
      KeAddProcessorAffinityEx((unsigned __int16 *)v3, v0);
  }
  KeGenericProcessorCallback(v3, (void (__fastcall *)(struct _KPRCB *, __int64))KiFlushQueuedDpcsWorker, 0LL, 2);
}
