/*
 * XREFs of ExpPartitionCreateSystemThread @ 0x1407DE1A0
 * Callers:
 *     ExpCreateWorkerThread @ 0x1407DE0C4 (ExpCreateWorkerThread.c)
 *     ExpWorkQueueManagerStart @ 0x140848060 (ExpWorkQueueManagerStart.c)
 * Callees:
 *     ExpNodeCreateSystemThread @ 0x1407DE204 (ExpNodeCreateSystemThread.c)
 */

__int64 __fastcall ExpPartitionCreateSystemThread(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  return ExpNodeCreateSystemThread(a2, 0x1FFFFF, 0, *(_QWORD *)(*(_QWORD *)a1 + 120LL), 0LL, a6, a7, a8, a9);
}
