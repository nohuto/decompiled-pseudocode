/*
 * XREFs of ?ResumeChannel@DXG_VMBUS_CHANNEL_BASE@@QEAAXXZ @ 0x1C0371CF4
 * Callers:
 *     ?VirtualGpuDriverEscape@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGK_VIRTUALGPUDRIVERESCAPE@@@Z @ 0x1C036B3C0 (-VirtualGpuDriverEscape@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGK_VIRTUALGPUDRIVERESCAPE@@@Z.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006F40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@E@Z @ 0x1C00515E4 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@E@Z.c)
 */

void __fastcall DXG_VMBUS_CHANNEL_BASE::ResumeChannel(DXG_VMBUS_CHANNEL_BASE *this)
{
  _BYTE v2[40]; // [rsp+20h] [rbp-28h] BYREF

  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
    (DXGAUTOPUSHLOCKEXCLUSIVE *)v2,
    (DXG_VMBUS_CHANNEL_BASE *)((char *)this + 16),
    *((_QWORD *)this + 3) != (_QWORD)KeGetCurrentThread());
  if ( *(_QWORD *)this && *((_BYTE *)this + 70) )
  {
    if ( *((_BYTE *)this + 71) )
    {
      ((void (*)(void))qword_1C013CEF0)();
      *((_BYTE *)this + 71) = 0;
    }
    *((_BYTE *)this + 70) = 0;
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v2);
}
