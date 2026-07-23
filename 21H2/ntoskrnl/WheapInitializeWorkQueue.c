/*
 * XREFs of WheapInitializeWorkQueue @ 0x1403BAC34
 * Callers:
 *     WheaInitialize @ 0x140A6405C (WheaInitialize.c)
 * Callees:
 *     memset @ 0x140414300 (memset.c)
 */

__int64 (__fastcall *WheapInitializeWorkQueue())()
{
  __int64 (__fastcall *result)(); // rax

  memset(&WheapWorkQueue, 0, 0x88uLL);
  qword_140C160A8 = (__int64)&WheapWorkQueue;
  WheapWorkQueue = (__int64)&WheapWorkQueue;
  qword_140C160D8 = (__int64)WheapWorkQueueDpcRoutine;
  qword_140C16110 = (__int64)WheapWorkQueueWorkerRoutine;
  result = WheapProcessWorkQueueItem;
  qword_140C16120 = (__int64)WheapProcessWorkQueueItem;
  qword_140C160B0 = 0LL;
  dword_140C160C0 = 275;
  qword_140C160E0 = (__int64)&WheapWorkQueue;
  qword_140C160F8 = 0LL;
  qword_140C160D0 = 0LL;
  qword_140C16118 = (__int64)&WheapWorkQueue;
  qword_140C16100 = 0LL;
  return result;
}
