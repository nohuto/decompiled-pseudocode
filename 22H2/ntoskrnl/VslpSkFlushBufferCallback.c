/*
 * XREFs of VslpSkFlushBufferCallback @ 0x1404FDD20
 * Callers:
 *     <none>
 * Callees:
 *     KiSetTimerEx @ 0x14025F5D0 (KiSetTimerEx.c)
 *     VslpFlushBufferArray @ 0x1404FD970 (VslpFlushBufferArray.c)
 */

void __fastcall VslpSkFlushBufferCallback(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  if ( VslpEventLog )
  {
    VslpFlushBufferArray();
    KiSetTimerEx(
      (__int64)&VslpFlushTimer,
      -10000000LL * (unsigned int)VslpFlushTimerInterval,
      0,
      0,
      (__int64)&VslpFlushDpc);
  }
}
