/*
 * XREFs of ?CreateGpadlFromMdl@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAU_MDL@@PEAI@Z @ 0x1C036DF68
 * Callers:
 *     ?EnsureVmBusInterface@DXGGLOBAL@@QEAAJXZ @ 0x1C030DD7C (-EnsureVmBusInterface@DXGGLOBAL@@QEAAJXZ.c)
 *     ?VmBusSendCreateAllocation@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIPEBU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAPEAXPEBX3EEPEAPEAE@Z @ 0x1C03810BC (-VmBusSendCreateAllocation@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIPEBU_D3DKMT_CREATEALLOCATION@@PEA.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006F40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006FA0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00095A8 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXG_GUEST_GLOBAL_VMBUS::CreateGpadlFromMdl(
        struct _KTHREAD **this,
        struct _MDL *a2,
        unsigned int *a3)
{
  struct _KTHREAD *v6; // rcx
  _BYTE v8[8]; // [rsp+40h] [rbp-28h] BYREF
  DXGPUSHLOCK *v9; // [rsp+48h] [rbp-20h]
  int v10; // [rsp+50h] [rbp-18h]

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v8, this + 2, 0);
  DXGPUSHLOCK::AcquireShared(v9);
  v6 = *this;
  v10 = 1;
  LODWORD(a3) = ((__int64 (__fastcall *)(struct _KTHREAD *, _QWORD, struct _MDL *, _QWORD, _DWORD, unsigned int *))qword_1C013CE28)(
                  v6,
                  0LL,
                  a2,
                  0LL,
                  0,
                  a3);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v8);
  return (unsigned int)a3;
}
