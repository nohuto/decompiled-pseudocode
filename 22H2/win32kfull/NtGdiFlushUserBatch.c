/*
 * XREFs of NtGdiFlushUserBatch @ 0x1C008EF20
 * Callers:
 *     <none>
 * Callees:
 *     ?NtGdiFlushUserBatchInternal@@YAXPEAX@Z @ 0x1C008EF50 (-NtGdiFlushUserBatchInternal@@YAXPEAX@Z.c)
 */

void NtGdiFlushUserBatch()
{
  if ( (unsigned int)GreStackExpansionRequired(0x2000LL) )
    KeExpandKernelStackAndCalloutEx(NtGdiFlushUserBatchInternal, 0LL, 0x2000uLL, 1u, 0LL);
  else
    NtGdiFlushUserBatchInternal(0LL);
}
