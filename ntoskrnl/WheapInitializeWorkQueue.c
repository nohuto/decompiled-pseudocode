/*
 * XREFs of WheapInitializeWorkQueue @ 0x1403AFA9C
 * Callers:
 *     WheaInitialize @ 0x140B3E1A0 (WheaInitialize.c)
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 (__fastcall *WheapInitializeWorkQueue())()
{
  __int64 (__fastcall *result)(); // rax

  memset(&WheapWorkQueue, 0, 0x88uLL);
  qword_140C2C708 = (__int64)&WheapWorkQueue;
  WheapWorkQueue = (__int64)&WheapWorkQueue;
  qword_140C2C738 = (__int64)WheapWorkQueueDpcRoutine;
  qword_140C2C770 = (__int64)WheapWorkQueueWorkerRoutine;
  result = WheapProcessWorkQueueItem;
  qword_140C2C780 = (__int64)WheapProcessWorkQueueItem;
  qword_140C2C710 = 0LL;
  dword_140C2C720 = 275;
  qword_140C2C740 = (__int64)&WheapWorkQueue;
  qword_140C2C758 = 0LL;
  qword_140C2C730 = 0LL;
  qword_140C2C778 = (__int64)&WheapWorkQueue;
  qword_140C2C760 = 0LL;
  return result;
}
