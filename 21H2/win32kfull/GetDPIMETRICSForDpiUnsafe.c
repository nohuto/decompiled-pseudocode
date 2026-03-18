/*
 * XREFs of GetDPIMETRICSForDpiUnsafe @ 0x1C00BF124
 * Callers:
 *     GetScaledLogFontForDpi @ 0x1C0063C80 (GetScaledLogFontForDpi.c)
 *     GetDPIMETRICSForDpi @ 0x1C00BF104 (GetDPIMETRICSForDpi.c)
 * Callees:
 *     ?EnsureKMDpiMetricsCacheNode@@YAPEAUtagDpiKMMetricsCacheNode@@H@Z @ 0x1C01E47CC (-EnsureKMDpiMetricsCacheNode@@YAPEAUtagDpiKMMetricsCacheNode@@H@Z.c)
 *     ?RefreshDpiKMMetricsCacheNode@@YAXPEAUtagDpiKMMetricsCacheNode@@@Z @ 0x1C01E49C8 (-RefreshDpiKMMetricsCacheNode@@YAXPEAUtagDpiKMMetricsCacheNode@@@Z.c)
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
