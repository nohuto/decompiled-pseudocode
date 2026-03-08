/*
 * XREFs of ?ClearDPISERVERINFO@@YAXPEAUtagDPISERVERINFO@@@Z @ 0x1C00B8018
 * Callers:
 *     DestroyDpiMetricsCache @ 0x1C00B7F10 (DestroyDpiMetricsCache.c)
 *     UpdateDpiMetricsCacheDPISERVERINFO @ 0x1C00B7F80 (UpdateDpiMetricsCacheDPISERVERINFO.c)
 * Callees:
 *     DeleteMetricsFont @ 0x1C00B8050 (DeleteMetricsFont.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 */

void __fastcall ClearDPISERVERINFO(struct tagDPISERVERINFO *a1)
{
  DeleteMetricsFont(*((_QWORD *)a1 + 1));
  DeleteMetricsFont(*((_QWORD *)a1 + 3));
  memset_0(a1, 0, 0x68uLL);
}
