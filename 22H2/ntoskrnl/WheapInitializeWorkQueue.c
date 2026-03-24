/*
 * XREFs of WheapInitializeWorkQueue @ 0x1403BA464
 * Callers:
 *     WheaInitialize @ 0x140A6305C (WheaInitialize.c)
 * Callees:
 *     memset @ 0x140413800 (memset.c)
 */

__int64 (__fastcall *WheapInitializeWorkQueue())()
{
  __int64 (__fastcall *result)(); // rax

  memset(&WheapWorkQueue, 0, 0x88uLL);
  qword_140C160C8 = (__int64)&WheapWorkQueue;
  WheapWorkQueue = (__int64)&WheapWorkQueue;
  qword_140C160F8 = (__int64)WheapWorkQueueDpcRoutine;
  qword_140C16130 = (__int64)WheapWorkQueueWorkerRoutine;
  result = WheapProcessWorkQueueItem;
  qword_140C16140 = (__int64)WheapProcessWorkQueueItem;
  qword_140C160D0 = 0LL;
  dword_140C160E0 = 275;
  qword_140C16100 = (__int64)&WheapWorkQueue;
  qword_140C16118 = 0LL;
  qword_140C160F0 = 0LL;
  qword_140C16138 = (__int64)&WheapWorkQueue;
  qword_140C16120 = 0LL;
  return result;
}
