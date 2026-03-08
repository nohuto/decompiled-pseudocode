/*
 * XREFs of ?SetPowerComponentIdleCBInternal@DXGADAPTER@@QEAAXIK@Z @ 0x1C001B4DC
 * Callers:
 *     ?SetPowerState@DMMVIDEOPRESENTTARGET@@QEAAXPEAVDXGADAPTER@@E@Z @ 0x1C0003074 (-SetPowerState@DMMVIDEOPRESENTTARGET@@QEAAXPEAVDXGADAPTER@@E@Z.c)
 *     DxgSetPowerComponentIdleCBInternal @ 0x1C00480D0 (DxgSetPowerComponentIdleCBInternal.c)
 *     ?ReleaseComponentReferencesHelper@DXGGLOBAL@@QEAAXXZ @ 0x1C01E4658 (-ReleaseComponentReferencesHelper@DXGGLOBAL@@QEAAXXZ.c)
 *     ?DisableStablePowerState@DXGADAPTER@@QEAAXXZ @ 0x1C02B1E5C (-DisableStablePowerState@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     ?SetPowerComponentIdleCBWorker@DXGADAPTER@@QEAAXIK@Z @ 0x1C000F9C0 (-SetPowerComponentIdleCBWorker@DXGADAPTER@@QEAAXIK@Z.c)
 */

void __fastcall DXGADAPTER::SetPowerComponentIdleCBInternal(DXGADAPTER *this, unsigned int a2, unsigned int a3)
{
  if ( a2 >= *((_DWORD *)this + 792) )
    WdLogSingleEntry5(0LL, 275LL, 23LL, this, 0LL, 0LL);
  DXGADAPTER::SetPowerComponentIdleCBWorker(this, a2, a3);
}
