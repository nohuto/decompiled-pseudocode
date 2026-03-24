/*
 * XREFs of WheapInitializeWorkQueue @ 0x1403BAAC4
 * Callers:
 *     WheaInitialize @ 0x140A6305C (WheaInitialize.c)
 * Callees:
 *     memset @ 0x140414200 (memset.c)
 */

__int64 (__fastcall *WheapInitializeWorkQueue())()
{
  __int64 (__fastcall *result)(); // rax

  memset(&WheapWorkQueue, 0, 0x88uLL);
  qword_140C16088 = (__int64)&WheapWorkQueue;
  WheapWorkQueue = (__int64)&WheapWorkQueue;
  qword_140C160B8 = (__int64)WheapWorkQueueDpcRoutine;
  qword_140C160F0 = (__int64)WheapWorkQueueWorkerRoutine;
  result = WheapProcessWorkQueueItem;
  qword_140C16100 = (__int64)WheapProcessWorkQueueItem;
  qword_140C16090 = 0LL;
  dword_140C160A0 = 275;
  qword_140C160C0 = (__int64)&WheapWorkQueue;
  qword_140C160D8 = 0LL;
  qword_140C160B0 = 0LL;
  qword_140C160F8 = (__int64)&WheapWorkQueue;
  qword_140C160E0 = 0LL;
  return result;
}
