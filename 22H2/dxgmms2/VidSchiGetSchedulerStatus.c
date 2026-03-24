/*
 * XREFs of VidSchiGetSchedulerStatus @ 0x1C001617C
 * Callers:
 *     VidSchiRequestSchedulerStatus @ 0x1C0090308 (VidSchiRequestSchedulerStatus.c)
 *     VidSchFlushAdapter @ 0x1C00CFF30 (VidSchFlushAdapter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiGetSchedulerStatus(__int64 a1)
{
  return *(unsigned int *)(a1 + 304);
}
