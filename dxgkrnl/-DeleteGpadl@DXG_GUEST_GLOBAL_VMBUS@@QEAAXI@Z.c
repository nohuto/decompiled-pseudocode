/*
 * XREFs of ?DeleteGpadl@DXG_GUEST_GLOBAL_VMBUS@@QEAAXI@Z @ 0x1C036EBB8
 * Callers:
 *     ??1DXGSHAREDRESOURCE@@MEAA@XZ @ 0x1C01AAE10 (--1DXGSHAREDRESOURCE@@MEAA@XZ.c)
 *     ?UnlockParavirtualizedAllocationOnGuest@@YAXPEAVDXGALLOCATION@@E@Z @ 0x1C02D4100 (-UnlockParavirtualizedAllocationOnGuest@@YAXPEAVDXGALLOCATION@@E@Z.c)
 *     ?HandleVirtualMachineReset@DXGGLOBAL@@QEAAXXZ @ 0x1C030E6D0 (-HandleVirtualMachineReset@DXGGLOBAL@@QEAAXXZ.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006F40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006FA0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00095A8 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DXG_GUEST_GLOBAL_VMBUS::DeleteGpadl(struct _KTHREAD **this, unsigned int a2)
{
  bool v4; // zf
  _BYTE v5[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v6; // [rsp+28h] [rbp-20h]
  int v7; // [rsp+30h] [rbp-18h]

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v5, this + 2, 0);
  DXGPUSHLOCK::AcquireShared(v6);
  v4 = *((_BYTE *)this + 68) == 0;
  v7 = 1;
  if ( !v4 )
    ((void (__fastcall *)(struct _KTHREAD *, _QWORD))qword_1C013CE30)(*this, a2);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v5);
}
