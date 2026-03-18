/*
 * XREFs of ?DxgkReferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z @ 0x1C01B4018
 * Callers:
 *     ?CreateAllocationObjects@DXGDEVICE@@QEAAJIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@0@Z @ 0x1C01B3840 (-CreateAllocationObjects@DXGDEVICE@@QEAAJIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@0@Z.c)
 *     ?PopDirectFlipAllocationFromList@DXGDEVICE@@AEAAPEAVDXGALLOCATION@@IPEAIPEAE@Z @ 0x1C02EC370 (-PopDirectFlipAllocationFromList@DXGDEVICE@@AEAAPEAVDXGALLOCATION@@IPEAIPEAE@Z.c)
 *     ?UnpinDirectFlipAllocation@DXGDEVICE@@QEAAJIIPEAPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C02EDA48 (-UnpinDirectFlipAllocation@DXGDEVICE@@QEAAJIIPEAPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?CheckPrimaryContent@VIDPNSOURCEINFO@@QEAAJXZ @ 0x1C02F6DB8 (-CheckPrimaryContent@VIDPNSOURCEINFO@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall DxgkReferenceDxgAllocation(struct _EX_RUNDOWN_REF *a1)
{
  if ( !ExAcquireRundownProtection(a1 + 11) )
    WdLogSingleEntry5(0LL, 275LL, 38LL, a1, 0LL, 0LL);
}
