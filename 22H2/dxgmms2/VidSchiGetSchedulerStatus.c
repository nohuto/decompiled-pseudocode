/*
 * XREFs of VidSchiGetSchedulerStatus @ 0x1C0018968
 * Callers:
 *     VidSchiRequestSchedulerStatus @ 0x1C00B9D00 (VidSchiRequestSchedulerStatus.c)
 *     VidSchFlushAdapter @ 0x1C01070F0 (VidSchFlushAdapter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiGetSchedulerStatus(__int64 a1)
{
  return *(unsigned int *)(a1 + 312);
}
