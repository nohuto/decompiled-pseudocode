/*
 * XREFs of ?CreateGpadlFromBuffer@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAXIPEAI@Z @ 0x1C036DEDC
 * Callers:
 *     ?VmBusSendCreateAllocation@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIPEBU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAPEAXPEBX3EEPEAPEAE@Z @ 0x1C03810BC (-VmBusSendCreateAllocation@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIPEBU_D3DKMT_CREATEALLOCATION@@PEA.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006F40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006FA0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00095A8 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXG_GUEST_GLOBAL_VMBUS::CreateGpadlFromBuffer(
        struct _KTHREAD **this,
        void *a2,
        unsigned int a3,
        unsigned int *a4)
{
  struct _KTHREAD *v8; // rcx
  _BYTE v10[8]; // [rsp+30h] [rbp-28h] BYREF
  DXGPUSHLOCK *v11; // [rsp+38h] [rbp-20h]
  int v12; // [rsp+40h] [rbp-18h]

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v10, this + 2, 0);
  DXGPUSHLOCK::AcquireShared(v11);
  v8 = *this;
  v12 = 1;
  LODWORD(a4) = ((__int64 (__fastcall *)(struct _KTHREAD *, _QWORD, void *, _QWORD, unsigned int *))qword_1C013CE20)(
                  v8,
                  0LL,
                  a2,
                  a3,
                  a4);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v10);
  return (unsigned int)a4;
}
