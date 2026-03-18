/*
 * XREFs of ?StopVSync@BLTQUEUE_REMOTE_VSYNC_SOURCE@@UEAAXXZ @ 0x1C03D5560
 * Callers:
 *     ??1BLTQUEUE_REMOTE_VSYNC_SOURCE@@UEAA@XZ @ 0x1C03D51B4 (--1BLTQUEUE_REMOTE_VSYNC_SOURCE@@UEAA@XZ.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ @ 0x1C0014FAC (-GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ.c)
 *     ?VmBusSendVsyncControl@DXG_GUEST_GLOBAL_VMBUS@@QEAAJU_LUID@@IPEAX_N@Z @ 0x1C0390A98 (-VmBusSendVsyncControl@DXG_GUEST_GLOBAL_VMBUS@@QEAAJU_LUID@@IPEAX_N@Z.c)
 */

void __fastcall BLTQUEUE_REMOTE_VSYNC_SOURCE::StopVSync(BLTQUEUE_REMOTE_VSYNC_SOURCE *this)
{
  struct DXGGLOBAL *Global; // rax
  struct DXGADAPTER *Adapter; // rax
  __int64 v4; // rdx

  if ( *((_BYTE *)this + 104) )
  {
    *((_BYTE *)this + 104) = 0;
    KeCancelTimer((PKTIMER)((char *)this + 8));
    KeFlushQueuedDpcs();
    Global = DXGGLOBAL::GetGlobal();
    if ( (int)DXG_GUEST_GLOBAL_VMBUS::VmBusSendVsyncControl(
                *((DXG_GUEST_GLOBAL_VMBUS **)Global + 214),
                *(struct _LUID *)((char *)this + 108),
                *((_DWORD *)this + 29),
                (char *)this + 72,
                0) < 0 )
    {
      Adapter = DXGDODPRESENT::GetAdapter(*((DXGDODPRESENT **)this + 12));
      WdLogSingleEntry3(3LL, Adapter, *((unsigned int *)this + 29), v4);
    }
  }
}
