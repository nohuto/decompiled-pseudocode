/*
 * XREFs of ?GetCpuVa@VIDMM_SCH_LOG@@QEAAPEAXXZ @ 0x1C004D3B8
 * Callers:
 *     VidSchiSerializeSchedulingLog @ 0x1C01093EC (VidSchiSerializeSchedulingLog.c)
 * Callees:
 *     <none>
 */

void *__fastcall VIDMM_SCH_LOG::GetCpuVa(VIDMM_SCH_LOG *this)
{
  return (void *)*((_QWORD *)this + 6);
}
