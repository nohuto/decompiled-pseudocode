/*
 * XREFs of ?SuspendPurgeForVPRGrow@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00FA26C
 * Callers:
 *     ?TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z @ 0x1C00FA934 (-TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00017E8 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0001938 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001998 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0011AEC (-RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?FaultAllAllocations@VIDMM_DEVICE@@QEAAXXZ @ 0x1C00939F8 (-FaultAllAllocations@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?PartiallySuspend@VIDMM_DEVICE@@IEAAXXZ @ 0x1C00EC4C8 (-PartiallySuspend@VIDMM_DEVICE@@IEAAXXZ.c)
 *     ?FreeSpaceForSecureResource@VIDMM_SEGMENT@@QEAAEPEAU_LIST_ENTRY@@PEAU_VIDMM_GLOBAL_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@@Z @ 0x1C00FD460 (-FreeSpaceForSecureResource@VIDMM_SEGMENT@@QEAAEPEAU_LIST_ENTRY@@PEAU_VIDMM_GLOBAL_ALLOC@@W4_VID.c)
 */

void __fastcall VIDMM_MEMORY_SEGMENT::SuspendPurgeForVPRGrow(
        VIDMM_MEMORY_SEGMENT *this,
        struct _VIDMM_GLOBAL_ALLOC *a2)
{
  __int64 v3; // rdx
  VIDMM_GLOBAL *v5; // rcx
  struct _LIST_ENTRY *v6; // rdi
  struct _LIST_ENTRY *v7; // rdx
  VIDMM_GLOBAL **v8; // rbx
  struct _LIST_ENTRY *v9[2]; // [rsp+20h] [rbp-30h] BYREF
  _BYTE v10[8]; // [rsp+30h] [rbp-20h] BYREF
  DXGPUSHLOCK *v11; // [rsp+38h] [rbp-18h]
  int v12; // [rsp+40h] [rbp-10h]

  v3 = *((_QWORD *)this + 1);
  v9[1] = (struct _LIST_ENTRY *)v9;
  v9[0] = (struct _LIST_ENTRY *)v9;
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v10, (struct _KTHREAD **)(v3 + 44512), 0);
  DXGPUSHLOCK::AcquireExclusive(v11);
  v12 = 2;
  if ( (unsigned __int8)VIDMM_SEGMENT::FreeSpaceForSecureResource(this, v9, a2, 6LL) )
  {
    WdLogSingleEntry0(3LL);
    if ( *((_DWORD *)this + 103) )
    {
      v6 = v9[0];
      while ( v6 != (struct _LIST_ENTRY *)v9 )
      {
        v7 = v6;
        v8 = (VIDMM_GLOBAL **)&v6[-12];
        v6 = v6->Flink;
        VIDMM_GLOBAL::RemoveFromPenaltyBoxByListEntry(v5, v7);
        VIDMM_DEVICE::PartiallySuspend(v8);
        VIDMM_DEVICE::FaultAllAllocations((VIDMM_DEVICE *)v8);
      }
    }
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v10);
}
