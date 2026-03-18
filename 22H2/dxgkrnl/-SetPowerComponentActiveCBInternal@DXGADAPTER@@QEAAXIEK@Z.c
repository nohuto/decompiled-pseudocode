/*
 * XREFs of ?SetPowerComponentActiveCBInternal@DXGADAPTER@@QEAAXIEK@Z @ 0x1C000B4CC
 * Callers:
 *     ?SetPowerState@DMMVIDEOPRESENTTARGET@@QEAAXPEAVDXGADAPTER@@E@Z @ 0x1C00025BC (-SetPowerState@DMMVIDEOPRESENTTARGET@@QEAAXPEAVDXGADAPTER@@E@Z.c)
 *     DxgSetPowerComponentActiveNoWaitCB @ 0x1C0049100 (DxgSetPowerComponentActiveNoWaitCB.c)
 *     DxgSetPowerComponentActiveCBInternal @ 0x1C01D1A10 (DxgSetPowerComponentActiveCBInternal.c)
 *     ?CsExitInitiatedWnfCallbackInternal@DXGGLOBAL@@QEAAX_K_J@Z @ 0x1C01F2CCC (-CsExitInitiatedWnfCallbackInternal@DXGGLOBAL@@QEAAX_K_J@Z.c)
 *     ?StartRuntimePowerManagement@DXGADAPTER@@QEAAXXZ @ 0x1C021D6C4 (-StartRuntimePowerManagement@DXGADAPTER@@QEAAXXZ.c)
 *     ?EnableStablePowerState@DXGADAPTER@@QEAAXXZ @ 0x1C02B771C (-EnableStablePowerState@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     ?SetPowerComponentActiveCBWorker@DXGADAPTER@@QEAAXIEK@Z @ 0x1C000B5F0 (-SetPowerComponentActiveCBWorker@DXGADAPTER@@QEAAXIEK@Z.c)
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
