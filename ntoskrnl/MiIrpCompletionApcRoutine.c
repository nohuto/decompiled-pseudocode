/*
 * XREFs of MiIrpCompletionApcRoutine @ 0x1406388F0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 */

void __fastcall MiIrpCompletionApcRoutine(struct _KEVENT *ApcContext, PIO_STATUS_BLOCK IoStatusBlock, ULONG Reserved)
{
  KeSetEvent(ApcContext, 0, 0);
}
