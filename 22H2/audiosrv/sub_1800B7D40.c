/*
 * XREFs of sub_1800B7D40 @ 0x1800B7D40
 * Callers:
 *     ?dtor$0@?0??VirtualProcessorActiveNotification@UMSThreadScheduler@details@Concurrency@@MEAAX_NJ@Z@4HA @ 0x180077090 (-dtor$0@-0--VirtualProcessorActiveNotification@UMSThreadScheduler@details@Concurrency@@MEAAX_NJ@.c)
 *     sub_1800B9FD4 @ 0x1800B9FD4 (sub_1800B9FD4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800B7D40(_QWORD *a1)
{
  *a1 = off_1801467A0;
  return sub_180006A30((volatile signed __int32 *)(a1[1] - 24LL));
}
