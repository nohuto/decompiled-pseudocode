/*
 * XREFs of SshpAlpcOpenGracePeriodTimerCallback @ 0x1403B0DA0
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x14033F3D0 (ExQueueWorkItem.c)
 */

void __fastcall SshpAlpcOpenGracePeriodTimerCallback(__int64 a1, int a2)
{
  ExQueueWorkItem((PWORK_QUEUE_ITEM)&unk_140C381E8 + 6 * a2, DelayedWorkQueue);
}
