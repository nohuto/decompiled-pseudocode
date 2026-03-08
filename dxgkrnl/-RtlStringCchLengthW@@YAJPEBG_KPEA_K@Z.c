/*
 * XREFs of ?RtlStringCchLengthW@@YAJPEBG_KPEA_K@Z @ 0x1C000296C
 * Callers:
 *     ?_QueryMonitorIdStr@CCD_TOPOLOGY@@CAJAEBU_LUID@@IPEAGG1@Z @ 0x1C017151C (-_QueryMonitorIdStr@CCD_TOPOLOGY@@CAJAEBU_LUID@@IPEAGG1@Z.c)
 *     ?DmmAppendCcdConnectedSetForAdapter@@YAJQEAXPEAU_UNICODE_STRING@@@Z @ 0x1C0171724 (-DmmAppendCcdConnectedSetForAdapter@@YAJQEAXPEAU_UNICODE_STRING@@@Z.c)
 *     ?AppendMonitorId@DpiPersistence@@YAJIAEBU_LUID@@PEAVVIDPN_MGR@@GPEAG2@Z @ 0x1C01C1CF0 (-AppendMonitorId@DpiPersistence@@YAJIAEBU_LUID@@PEAVVIDPN_MGR@@GPEAG2@Z.c)
 *     ?_PrepareMonitorCCDName@DXGMONITOR@@AEAAJXZ @ 0x1C01F9AA4 (-_PrepareMonitorCCDName@DXGMONITOR@@AEAAJXZ.c)
 *     DxgkNetDispQueryMiracastDisplayDeviceStatus @ 0x1C02CE9A0 (DxgkNetDispQueryMiracastDisplayDeviceStatus.c)
 *     DxgkNetDispStopMiracastDisplayDevice @ 0x1C02CEF20 (DxgkNetDispStopMiracastDisplayDevice.c)
 *     ?AddHostRouter@USB4_HOSTROUTER_MGR@@AEAAJPEBU_UNICODE_STRING@@@Z @ 0x1C03C5960 (-AddHostRouter@USB4_HOSTROUTER_MGR@@AEAAJPEBU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlStringCchLengthW(const unsigned __int16 *a1, unsigned __int64 a2, unsigned __int64 *a3)
{
  unsigned __int64 i; // r9
  __int64 result; // rax

  if ( !a1 || a2 > 0x7FFFFFFF )
  {
    result = 3221225485LL;
LABEL_13:
    if ( a3 )
      *a3 = 0LL;
    return result;
  }
  for ( i = a2; i; --i )
  {
    if ( !*a1 )
      break;
    ++a1;
  }
  result = i == 0 ? 0xC000000D : 0;
  if ( a3 )
  {
    if ( i )
      *a3 = a2 - i;
    else
      *a3 = 0LL;
  }
  if ( !i )
    goto LABEL_13;
  return result;
}
