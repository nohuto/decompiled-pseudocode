/*
 * XREFs of ?ClearDPISERVERINFO@@YAXPEAUtagDPISERVERINFO@@@Z @ 0x1C00C74E8
 * Callers:
 *     DestroyDpiMetricsCache @ 0x1C00C73E0 (DestroyDpiMetricsCache.c)
 *     UpdateDpiMetricsCacheDPISERVERINFO @ 0x1C00C7450 (UpdateDpiMetricsCacheDPISERVERINFO.c)
 * Callees:
 *     DeleteMetricsFont @ 0x1C00C7520 (DeleteMetricsFont.c)
 *     memset @ 0x1C0160540 (memset.c)
 */

void __fastcall ClearDPISERVERINFO(struct tagDPISERVERINFO *a1)
{
  DeleteMetricsFont(*((_QWORD *)a1 + 1));
  DeleteMetricsFont(*((_QWORD *)a1 + 3));
  memset(a1, 0, 0x68uLL);
}
