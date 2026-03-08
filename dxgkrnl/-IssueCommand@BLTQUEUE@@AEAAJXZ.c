/*
 * XREFs of ?IssueCommand@BLTQUEUE@@AEAAJXZ @ 0x1C01C7320
 * Callers:
 *     ?AcquireVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@PEBW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@PEBIIU_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@@Z @ 0x1C0177E48 (-AcquireVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@PEBW4_D3DKMT_VIDPNSOURCEOWNER_TYPE.c)
 *     ?UpdateDisplayModeInfo@BLTQUEUE@@QEAAXU_D3DDDI_RATIONAL@@I@Z @ 0x1C01C71B8 (-UpdateDisplayModeInfo@BLTQUEUE@@QEAAXU_D3DDDI_RATIONAL@@I@Z.c)
 *     ?Flush@BLTQUEUE@@QEAAXXZ @ 0x1C01C7244 (-Flush@BLTQUEUE@@QEAAXXZ.c)
 *     ?NotifyGlobalVmBusStatusChange@DXGDODPRESENT@@QEAAXE@Z @ 0x1C03CD588 (-NotifyGlobalVmBusStatusChange@DXGDODPRESENT@@QEAAXE@Z.c)
 *     ?NotifyHostMonitorPowerState@DXGDODPRESENT@@QEAAXIE@Z @ 0x1C03CD5E0 (-NotifyHostMonitorPowerState@DXGDODPRESENT@@QEAAXIE@Z.c)
 *     ?Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C03CE0B0 (-Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVIC.c)
 *     ?Reset@BLTQUEUE@@QEAAXE@Z @ 0x1C03CEFC0 (-Reset@BLTQUEUE@@QEAAXE@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BLTQUEUE::IssueCommand(BLTQUEUE *this)
{
  *((_QWORD *)this + 78) = KeGetCurrentThread();
  *((LARGE_INTEGER *)this + 97) = KeQueryPerformanceCounter(0LL);
  KeSetEvent((PRKEVENT)((char *)this + 520), 0, 0);
  KeWaitForSingleObject((char *)this + 544, Executive, 0, 0, 0LL);
  *((_QWORD *)this + 78) = 0LL;
  return *((unsigned int *)this + 150);
}
