/*
 * XREFs of VidSchiGetSchedulerStatus @ 0x1C00189A8
 * Callers:
 *     VidSchiRequestSchedulerStatus @ 0x1C00B7E60 (VidSchiRequestSchedulerStatus.c)
 *     VidSchFlushAdapter @ 0x1C0107550 (VidSchFlushAdapter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiGetSchedulerStatus(__int64 a1)
{
  return *(unsigned int *)(a1 + 312);
}
