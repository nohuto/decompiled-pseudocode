/*
 * XREFs of FsRtlPostStackOverflow @ 0x14053CFB0
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlpPostStackOverflow @ 0x14053D044 (FsRtlpPostStackOverflow.c)
 */

void __stdcall FsRtlPostStackOverflow(PVOID Context, PKEVENT Event, PFSRTL_STACK_OVERFLOW_ROUTINE StackOverflowRoutine)
{
  FsRtlpPostStackOverflow(Context, Event, StackOverflowRoutine, 0LL);
}
