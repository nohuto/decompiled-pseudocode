/*
 * XREFs of ?SetPowerComponentActiveCBInternal@DXGADAPTER@@QEAAXIEK@Z @ 0x1C000E594
 * Callers:
 *     ?SetPowerState@DMMVIDEOPRESENTTARGET@@QEAAXPEAVDXGADAPTER@@E@Z @ 0x1C0003074 (-SetPowerState@DMMVIDEOPRESENTTARGET@@QEAAXPEAVDXGADAPTER@@E@Z.c)
 *     DxgSetPowerComponentActiveNoWaitCB @ 0x1C00480A0 (DxgSetPowerComponentActiveNoWaitCB.c)
 *     DxgSetPowerComponentActiveCBInternal @ 0x1C01CBBE0 (DxgSetPowerComponentActiveCBInternal.c)
 *     ?CsExitInitiatedWnfCallbackInternal@DXGGLOBAL@@QEAAX_K_J@Z @ 0x1C01E43AC (-CsExitInitiatedWnfCallbackInternal@DXGGLOBAL@@QEAAX_K_J@Z.c)
 *     ?StartRuntimePowerManagement@DXGADAPTER@@QEAAXXZ @ 0x1C020F0E4 (-StartRuntimePowerManagement@DXGADAPTER@@QEAAXXZ.c)
 *     ?EnableStablePowerState@DXGADAPTER@@QEAAXXZ @ 0x1C02B285C (-EnableStablePowerState@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     ?SetPowerComponentActiveCBWorker@DXGADAPTER@@QEAAXIEK@Z @ 0x1C000E6B0 (-SetPowerComponentActiveCBWorker@DXGADAPTER@@QEAAXIEK@Z.c)
 */

void __fastcall DXGADAPTER::SetPowerComponentActiveCBInternal(
        DXGADAPTER *this,
        unsigned int a2,
        unsigned __int8 a3,
        unsigned int a4)
{
  if ( a2 >= *((_DWORD *)this + 792) )
    WdLogSingleEntry5(0LL, 275LL, 23LL, this, 0LL, 0LL);
  DXGADAPTER::SetPowerComponentActiveCBWorker(this, a2, a3, a4);
}
