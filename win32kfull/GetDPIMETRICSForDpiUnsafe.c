/*
 * XREFs of GetDPIMETRICSForDpiUnsafe @ 0x1C00A47B4
 * Callers:
 *     GetDPIMETRICSForDpi @ 0x1C00A11BC (GetDPIMETRICSForDpi.c)
 *     GetWindowNCMetricsForDpi @ 0x1C00A43A0 (GetWindowNCMetricsForDpi.c)
 *     GetScaledLogFontForDpi @ 0x1C00A4620 (GetScaledLogFontForDpi.c)
 * Callees:
 *     ?EnsureKMDpiMetricsCacheNode@@YAPEAUtagDpiKMMetricsCacheNode@@H@Z @ 0x1C01C021C (-EnsureKMDpiMetricsCacheNode@@YAPEAUtagDpiKMMetricsCacheNode@@H@Z.c)
 *     ?RefreshDpiKMMetricsCacheNode@@YAXPEAUtagDpiKMMetricsCacheNode@@@Z @ 0x1C01C0418 (-RefreshDpiKMMetricsCacheNode@@YAXPEAUtagDpiKMMetricsCacheNode@@@Z.c)
 */

struct tagDpiKMMetricsCacheNode *__fastcall GetDPIMETRICSForDpiUnsafe(int a1)
{
  struct tagDpiKMMetricsCacheNode *result; // rax
  struct tagDpiKMMetricsCacheNode *v2; // rbx

  if ( a1 == *(unsigned __int16 *)(gpsi + 6998LL) )
    return (struct tagDpiKMMetricsCacheNode *)GetSessionDpiMetrics();
  if ( a1 == 96 )
    return (struct tagDpiKMMetricsCacheNode *)Get96DpiMetrics();
  result = EnsureKMDpiMetricsCacheNode(a1);
  v2 = result;
  if ( result )
  {
    RefreshDpiKMMetricsCacheNode(result);
    return (struct tagDpiKMMetricsCacheNode *)((char *)v2 + 16);
  }
  return result;
}
