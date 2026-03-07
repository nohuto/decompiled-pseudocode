// write access to const memory has been detected, the output may be wrong!
struct tagDpiKMMetricsCacheNode *__fastcall EnsureKMDpiMetricsCacheNode(int a1)
{
  __int16 v1; // bx
  unsigned __int16 *i; // r8
  _DWORD *v3; // r9
  __int64 v4; // rax

  v1 = a1;
  i = (unsigned __int16 *)gpDpiKernelModeMetricsMRUNode;
  if ( gpDpiKernelModeMetricsMRUNode && (unsigned __int16)*gpDpiKernelModeMetricsMRUNode == a1 )
    goto LABEL_13;
  for ( i = (unsigned __int16 *)gpDpiKernelModeMetricsCache; i; i = (unsigned __int16 *)*((_QWORD *)i + 1) )
  {
    if ( *i == a1 )
      goto LABEL_13;
  }
  v3 = &DesktopScaleFactorsArray;
  while ( (96 * *v3 + 50) / 0x64u != a1 )
  {
    if ( (__int64)++v3 >= (__int64)L"SetupProgramNames" )
      return (struct tagDpiKMMetricsCacheNode *)i;
  }
  v4 = Win32AllocPoolZInit(88LL, 1768973397LL);
  i = (unsigned __int16 *)v4;
  if ( v4 )
  {
    *(_WORD *)v4 = v1;
    *(_WORD *)(v4 + 2) = 1;
    *(_QWORD *)(v4 + 8) = gpDpiKernelModeMetricsCache;
    gpDpiKernelModeMetricsCache = v4;
LABEL_13:
    gpDpiKernelModeMetricsMRUNode = i;
  }
  return (struct tagDpiKMMetricsCacheNode *)i;
}
