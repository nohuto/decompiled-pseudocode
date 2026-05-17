/*
 * XREFs of NtQueryPerformanceCounter @ 0x18009DB00
 * Callers:
 *     LdrpGenSecurityCookie @ 0x18001404C (LdrpGenSecurityCookie.c)
 *     RtlQueryPerformanceCounter @ 0x180040160 (RtlQueryPerformanceCounter.c)
 *     RtlHeapTrkInitialize @ 0x1800FD9C0 (RtlHeapTrkInitialize.c)
 *     RtlpHeapTrkGenerateHashRandoms @ 0x1800FE26C (RtlpHeapTrkGenerateHashRandoms.c)
 *     RtlpHeapTrkInterceptor @ 0x1800FE390 (RtlpHeapTrkInterceptor.c)
 * Callees:
 *     <none>
 */

__int64 NtQueryPerformanceCounter()
{
  __int64 result; // rax

  result = 49LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
