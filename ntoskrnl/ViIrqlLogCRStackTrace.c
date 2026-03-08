/*
 * XREFs of ViIrqlLogCRStackTrace @ 0x140AE5594
 * Callers:
 *     ViIrqlKeEnterCriticalRegion_Exit @ 0x140AE5530 (ViIrqlKeEnterCriticalRegion_Exit.c)
 *     ViIrqlKeLeaveCriticalRegion_Entry @ 0x140AE5550 (ViIrqlKeLeaveCriticalRegion_Entry.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x140205C20 (RtlCaptureStackBackTrace.c)
 */

void ViIrqlLogCRStackTrace()
{
  PVOID *v0; // rbx
  USHORT v1; // ax

  if ( VfKeCriticalRegionTraces )
  {
    v0 = (PVOID *)((char *)VfKeCriticalRegionTraces
                 + 64
                 * (unsigned __int64)(_InterlockedIncrement(&VfKeCriticalRegionTracesIndex) & (unsigned int)(VfKeCriticalRegionTracesLength - 1)));
    *v0 = KeGetCurrentThread();
    v1 = RtlCaptureStackBackTrace(0, 7u, v0 + 1, 0LL);
    if ( v1 < 7u )
      v0[v1 + 1] = 0LL;
  }
}
