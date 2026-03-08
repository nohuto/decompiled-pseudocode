/*
 * XREFs of DestroyDpiMetricsCache @ 0x1C00B7F10
 * Callers:
 *     <none>
 * Callees:
 *     ?ClearDPISERVERINFO@@YAXPEAUtagDPISERVERINFO@@@Z @ 0x1C00B8018 (-ClearDPISERVERINFO@@YAXPEAUtagDPISERVERINFO@@@Z.c)
 *     InvalidateKMDpiMetricsCacheDPIMETRICS @ 0x1C010C82C (InvalidateKMDpiMetricsCacheDPIMETRICS.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 DestroyDpiMetricsCache()
{
  __int64 v0; // rbx
  __int64 v1; // rdi
  _QWORD *v2; // rbx
  __int64 result; // rax
  void *v4; // rcx

  InvalidateKMDpiMetricsCacheDPIMETRICS();
  v0 = 0LL;
  v1 = 18LL;
  do
  {
    ClearDPISERVERINFO((struct tagDPISERVERINFO *)(v0 + gpsi + 5096LL));
    v0 += 104LL;
    --v1;
  }
  while ( v1 );
  v2 = (_QWORD *)gpDpiKernelModeMetricsCache;
  while ( v2 )
  {
    v4 = v2;
    v2 = (_QWORD *)v2[1];
    Win32FreePool(v4);
  }
  gpDpiKernelModeMetricsMRUNode = 0LL;
  result = gpDpiKernelModeMetricsCache;
  gpDpiKernelModeMetricsCache = 0LL;
  return result;
}
