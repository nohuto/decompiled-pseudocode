/*
 * XREFs of ExFlushTb @ 0x1405B7158
 * Callers:
 *     KeFlushTb @ 0x14022FA90 (KeFlushTb.c)
 *     KeFlushMultipleRangeTb @ 0x1402BBCB0 (KeFlushMultipleRangeTb.c)
 *     KeFlushSingleTb @ 0x140334A18 (KeFlushSingleTb.c)
 *     KeFlushSingleCurrentTb @ 0x1403897D8 (KeFlushSingleCurrentTb.c)
 *     KeFlushEntireTb @ 0x1403B6A90 (KeFlushEntireTb.c)
 *     KeFlushMultipleRangeCurrentTb @ 0x1403C8E4C (KeFlushMultipleRangeCurrentTb.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
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
