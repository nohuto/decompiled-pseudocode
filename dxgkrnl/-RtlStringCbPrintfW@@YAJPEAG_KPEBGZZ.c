/*
 * XREFs of ?RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C000AB7C
 * Callers:
 *     ?ScaleOverrideTestHookCore@DpiInternal@@YAXQEBGPEAK@Z @ 0x1C000AC78 (-ScaleOverrideTestHookCore@DpiInternal@@YAXQEBGPEAK@Z.c)
 *     ?LoadTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEAVCCD_TOPOLOGY@@@Z @ 0x1C01BFA3C (-LoadTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEAVCCD_TOPOLOGY@@@Z.c)
 *     DpiFdoInitializeAdapterUniqueString @ 0x1C01F8548 (DpiFdoInitializeAdapterUniqueString.c)
 *     DpiPdoHandleQueryId @ 0x1C0202B30 (DpiPdoHandleQueryId.c)
 *     DpiGdoSetupGdiParameters @ 0x1C0204950 (DpiGdoSetupGdiParameters.c)
 *     ?SaveTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEBVCCD_TOPOLOGY@@_N@Z @ 0x1C03BE870 (-SaveTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEBVCCD_TOPOLOGY@@_N@Z.c)
 *     ?_WritePath@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAAJPEAXIPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C03BED34 (-_WritePath@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAAJPEAXIPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z.c)
 *     ?_ReadOneBlockMonitorDescriptorFromRegistry@EdidMonitorDescriptor@DxgMonitor@@CAJPEAXIAEAV?$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U?$default_delete@UWmiMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@@Z @ 0x1C03CA8F0 (-_ReadOneBlockMonitorDescriptorFromRegistry@EdidMonitorDescriptor@DxgMonitor@@CAJPEAXIAEAV-$uniq.c)
 * Callees:
 *     <none>
 */

__int64 RtlStringCbPrintfW(unsigned __int16 *a1, unsigned __int64 a2, const unsigned __int16 *a3, ...)
{
  unsigned __int64 v3; // rdx
  unsigned __int64 v5; // rsi
  unsigned int v6; // edi
  int v7; // eax
  va_list Args; // [rsp+78h] [rbp+20h] BYREF

  va_start(Args, a3);
  v3 = a2 >> 1;
  if ( v3 - 1 > 0x7FFFFFFE )
  {
    v6 = -1073741811;
    if ( v3 )
      *a1 = 0;
  }
  else
  {
    v5 = v3 - 1;
    v6 = 0;
    v7 = _vsnwprintf(a1, v3 - 1, a3, Args);
    if ( v7 < 0 || v7 > v5 )
    {
      v6 = -2147483643;
      goto LABEL_5;
    }
    if ( v7 == v5 )
LABEL_5:
      a1[v5] = 0;
  }
  return v6;
}
