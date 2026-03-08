/*
 * XREFs of __report_rangecheckfailure @ 0x1C0024370
 * Callers:
 *     ?DxgkpQueryRegistry@@YAJPEAVDXGADAPTER@@PEAXI@Z @ 0x1C01661E4 (-DxgkpQueryRegistry@@YAJPEAVDXGADAPTER@@PEAXI@Z.c)
 *     ?_PrepareMonitorCCDName@DXGMONITOR@@AEAAJXZ @ 0x1C01F9AA4 (-_PrepareMonitorCCDName@DXGMONITOR@@AEAAJXZ.c)
 *     ?EnumSingleRegistry@CDriverStoreCopy@@IEAAJPEAU_UNICODE_STRING@@PEAGW4DXGKP_HARDLINKTYPE@@W4DXGKP_HARDLINKOVERWRITETYPE@@@Z @ 0x1C0307784 (-EnumSingleRegistry@CDriverStoreCopy@@IEAAJPEAU_UNICODE_STRING@@PEAGW4DXGKP_HARDLINKTYPE@@W4DXGK.c)
 * Callees:
 *     <none>
 */

void __noreturn _report_rangecheckfailure()
{
  __fastfail(8u);
}
