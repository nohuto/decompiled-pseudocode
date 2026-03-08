/*
 * XREFs of ExFlushTb @ 0x14060AC48
 * Callers:
 *     KeFlushSingleTb @ 0x140211E60 (KeFlushSingleTb.c)
 *     KeFlushTb @ 0x140323CB0 (KeFlushTb.c)
 *     KeFlushMultipleRangeCurrentTb @ 0x140387610 (KeFlushMultipleRangeCurrentTb.c)
 *     KeFlushSingleCurrentTb @ 0x140387AD4 (KeFlushSingleCurrentTb.c)
 *     KeFlushMultipleRangeTb @ 0x14038C374 (KeFlushMultipleRangeTb.c)
 *     KeFlushEntireTb @ 0x1403AD590 (KeFlushEntireTb.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
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
