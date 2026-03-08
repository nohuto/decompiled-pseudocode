/*
 * XREFs of FsRtlPostPagingFileStackOverflow @ 0x14053CF90
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlpPostStackOverflow @ 0x14053D044 (FsRtlpPostStackOverflow.c)
 */

void __stdcall FsRtlPostPagingFileStackOverflow(
        PVOID Context,
        PKEVENT Event,
        PFSRTL_STACK_OVERFLOW_ROUTINE StackOverflowRoutine)
{
  char v3; // r9

  v3 = 1;
  FsRtlpPostStackOverflow(Context, Event, StackOverflowRoutine, v3);
}
