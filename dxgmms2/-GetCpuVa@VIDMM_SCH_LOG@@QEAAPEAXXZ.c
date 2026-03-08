/*
 * XREFs of ?GetCpuVa@VIDMM_SCH_LOG@@QEAAPEAXXZ @ 0x1C004D518
 * Callers:
 *     VidSchiSerializeSchedulingLog @ 0x1C010977C (VidSchiSerializeSchedulingLog.c)
 * Callees:
 *     <none>
 */

void *__fastcall VIDMM_SCH_LOG::GetCpuVa(VIDMM_SCH_LOG *this)
{
  return (void *)*((_QWORD *)this + 6);
}
