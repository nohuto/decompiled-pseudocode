/*
 * XREFs of ?StopVSync@BLTQUEUE_REMOTE_VSYNC_SOURCE@@UEAAXXZ @ 0x1C03010D0
 * Callers:
 *     ??1BLTQUEUE_REMOTE_VSYNC_SOURCE@@UEAA@XZ @ 0x1C0300D14 (--1BLTQUEUE_REMOTE_VSYNC_SOURCE@@UEAA@XZ.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ @ 0x1C001AC14 (-GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ.c)
 *     ?VmBusSendVsyncControl@DXG_GUEST_GLOBAL_VMBUS@@QEAAJU_LUID@@IPEAX_N@Z @ 0x1C024E47C (-VmBusSendVsyncControl@DXG_GUEST_GLOBAL_VMBUS@@QEAAJU_LUID@@IPEAX_N@Z.c)
 */

void __fastcall BLTQUEUE_REMOTE_VSYNC_SOURCE::StopVSync(BLTQUEUE_REMOTE_VSYNC_SOURCE *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  struct DXGGLOBAL *Global; // rax
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdi
  struct DXGADAPTER *Adapter; // rax
  _QWORD *v11; // rdx

  if ( *((_BYTE *)this + 104) )
  {
    *((_BYTE *)this + 104) = 0;
    KeCancelTimer((PKTIMER)((char *)this + 8));
    KeFlushQueuedDpcs();
    Global = DXGGLOBAL::GetGlobal(v3, v2);
    v5 = DXG_GUEST_GLOBAL_VMBUS::VmBusSendVsyncControl(
           *((struct _KTHREAD ***)Global + 197),
           *(struct _LUID *)((char *)this + 108),
           *((_DWORD *)this + 29),
           (char *)this + 72,
           0);
    v9 = v5;
    if ( v5 < 0 )
    {
      WdLogNewEntry5_WdWarning(v7, v6, v8);
      Adapter = DXGDODPRESENT::GetAdapter(*((DXGDODPRESENT **)this + 12));
      v11[3] = Adapter;
      v11[4] = *((unsigned int *)this + 29);
      v11[5] = v9;
      WdLogEvent5_WdWarning(v11);
    }
  }
}
