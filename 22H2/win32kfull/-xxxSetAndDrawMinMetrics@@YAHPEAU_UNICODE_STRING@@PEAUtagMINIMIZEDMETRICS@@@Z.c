/*
 * XREFs of ?xxxSetAndDrawMinMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagMINIMIZEDMETRICS@@@Z @ 0x1C00B8F40
 * Callers:
 *     ?xxxSPISetMinMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagMINIMIZEDMETRICS@@H@Z @ 0x1C00B8E9C (-xxxSPISetMinMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagMINIMIZEDMETRICS@@H@Z.c)
 * Callees:
 *     xxxInternalInvalidate @ 0x1C0032FD0 (xxxInternalInvalidate.c)
 *     SetMinMetrics @ 0x1C00763E0 (SetMinMetrics.c)
 *     xxxMetricsRecalc @ 0x1C01C88FC (xxxMetricsRecalc.c)
 */

__int64 __fastcall xxxSetAndDrawMinMetrics(struct _UNICODE_STRING *a1, struct tagMINIMIZEDMETRICS *a2)
{
  int v2; // ebx
  int v3; // edi
  int v4; // edx
  struct tagWND *v5; // rbx
  int v6; // r8d
  __int64 v7; // rax

  v2 = *(_DWORD *)(gpsi + 2124LL);
  v3 = *(_DWORD *)(gpsi + 2128LL);
  SetMinMetrics(a1, (__int128 *)a2);
  v4 = *(_DWORD *)(gpsi + 2124LL) - v2;
  v5 = 0LL;
  v6 = *(_DWORD *)(gpsi + 2128LL) - v3;
  if ( v4 || v6 )
    xxxMetricsRecalc(4, v4, v6, 0, 0, 0, 0);
  v7 = *(_QWORD *)(gptiCurrent + 456LL);
  if ( v7 )
    v5 = *(struct tagWND **)(*(_QWORD *)(v7 + 8) + 24LL);
  xxxInternalInvalidate(v5, (HRGN)1, 0x10485u);
  return 1LL;
}
