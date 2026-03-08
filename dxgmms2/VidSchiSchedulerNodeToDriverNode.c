/*
 * XREFs of VidSchiSchedulerNodeToDriverNode @ 0x1C003C618
 * Callers:
 *     VidSchiCheckNodeTimeout @ 0x1C00A5B80 (VidSchiCheckNodeTimeout.c)
 *     VidSchiPrepareToResetEngine @ 0x1C010667C (VidSchiPrepareToResetEngine.c)
 *     VidSchReportAdapter @ 0x1C0107F20 (VidSchReportAdapter.c)
 *     VidSchReportDevice @ 0x1C0108500 (VidSchReportDevice.c)
 *     VidSchiSerializeSchedulingLog @ 0x1C010977C (VidSchiSerializeSchedulingLog.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiSchedulerNodeToDriverNode(__int64 a1, unsigned int a2)
{
  __int64 v2; // r8

  v2 = *(_QWORD *)(a1 + 632);
  if ( a2 < *(_DWORD *)(a1 + 704) )
    v2 += 8LL * a2;
  return *(unsigned __int16 *)(*(_QWORD *)v2 + 8LL);
}
