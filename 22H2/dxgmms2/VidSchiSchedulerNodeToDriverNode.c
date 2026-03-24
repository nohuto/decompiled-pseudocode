/*
 * XREFs of VidSchiSchedulerNodeToDriverNode @ 0x1C0031794
 * Callers:
 *     VidSchiCheckNodeTimeout @ 0x1C007F1B0 (VidSchiCheckNodeTimeout.c)
 *     VidSchiPrepareToResetEngine @ 0x1C00CEBBC (VidSchiPrepareToResetEngine.c)
 *     VidSchReportAdapter @ 0x1C00D08E0 (VidSchReportAdapter.c)
 *     VidSchReportDevice @ 0x1C00D0E80 (VidSchReportDevice.c)
 *     VidSchiSerializeSchedulingLog @ 0x1C00D23C0 (VidSchiSerializeSchedulingLog.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiSchedulerNodeToDriverNode(__int64 a1, unsigned int a2)
{
  __int64 v2; // r8

  v2 = *(_QWORD *)(a1 + 624);
  if ( a2 < *(_DWORD *)(a1 + 696) )
    v2 += 8LL * a2;
  return *(unsigned __int16 *)(*(_QWORD *)v2 + 8LL);
}
