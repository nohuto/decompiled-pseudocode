/*
 * XREFs of ?PauseVirtualGpu@DXGVIRTUALMACHINE@@QEAAXXZ @ 0x1C0340D44
 * Callers:
 *     ?VirtualGpuDriverEscape@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGK_VIRTUALGPUDRIVERESCAPE@@@Z @ 0x1C036B3C0 (-VirtualGpuDriverEscape@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGK_VIRTUALGPUDRIVERESCAPE@@@Z.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006F40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006FA0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00095A8 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?PauseChannel@DXG_VMBUS_CHANNEL_BASE@@QEAAX_N@Z @ 0x1C0371A6C (-PauseChannel@DXG_VMBUS_CHANNEL_BASE@@QEAAX_N@Z.c)
 */

void __fastcall DXGVIRTUALMACHINE::PauseVirtualGpu(struct _KTHREAD **this)
{
  struct _KTHREAD **i; // rax
  _BYTE v3[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v4; // [rsp+28h] [rbp-20h]
  int v5; // [rsp+30h] [rbp-18h]

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v3, this + 12, 0);
  DXGPUSHLOCK::AcquireShared(v4);
  v5 = 1;
  for ( i = (struct _KTHREAD **)this[5]; ; i = (struct _KTHREAD **)*i )
  {
    if ( i == this + 5 )
    {
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v3);
      DXG_VMBUS_CHANNEL_BASE::PauseChannel((DXG_VMBUS_CHANNEL_BASE *)(this + 20), 0);
      return;
    }
    if ( *((_BYTE *)i + 16) && !*((_BYTE *)i + 110) )
      break;
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v3);
}
