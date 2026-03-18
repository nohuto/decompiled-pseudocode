/*
 * XREFs of ExFlushTb @ 0x14060D088
 * Callers:
 *     KeFlushTb @ 0x140279850 (KeFlushTb.c)
 *     KeFlushSingleTb @ 0x1402EB0C4 (KeFlushSingleTb.c)
 *     KeFlushMultipleRangeCurrentTb @ 0x14038A24C (KeFlushMultipleRangeCurrentTb.c)
 *     KeFlushSingleCurrentTb @ 0x14038A710 (KeFlushSingleCurrentTb.c)
 *     KeFlushMultipleRangeTb @ 0x14038E834 (KeFlushMultipleRangeTb.c)
 *     KeFlushEntireTb @ 0x1403B23B0 (KeFlushEntireTb.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 */

struct _KTHREAD *__fastcall ExFlushTb(unsigned int a1, __int64 a2, int a3)
{
  struct _KTHREAD *result; // rax
  struct _LIST_ENTRY *Flink; // rcx

  result = KeGetCurrentThread();
  if ( a3 != 1 )
    return (struct _KTHREAD *)(*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(HalIommuDispatch + 80))(
                                ExpSvmIommuSystemContext,
                                a1,
                                a2);
  Flink = result->ApcState.Process[2].ProfileListHead.Flink;
  if ( Flink )
    return (struct _KTHREAD *)(*(__int64 (__fastcall **)(struct _LIST_ENTRY *, _QWORD, __int64))(HalIommuDispatch + 72))(
                                Flink,
                                a1,
                                a2);
  return result;
}
