/*
 * XREFs of VslpSkFlushBufferCallback @ 0x1404FE020
 * Callers:
 *     <none>
 * Callees:
 *     KiSetTimerEx @ 0x1402814E0 (KiSetTimerEx.c)
 *     VslpFlushBufferArray @ 0x1404FDC70 (VslpFlushBufferArray.c)
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
