/*
 * XREFs of ?UnreferencePinnedAllocation@VIDMM_DEVICE@@QEAA_NPEAUVIDMM_ALLOC@@_N@Z @ 0x1C00B2528
 * Callers:
 *     ?CleanupPrimaryAllocation@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0086358 (-CleanupPrimaryAllocation@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?UnpinOneAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_ALLOC@@W4VIDMM_UNPIN_ACTION@@_N@Z @ 0x1C00B2444 (-UnpinOneAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_ALLOC@@W4VIDMM_UNPIN_ACTION@@_N@Z.c)
 *     ?PinOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAVVIDMM_PAGING_QUEUE@@K_KPEA_K@Z @ 0x1C00B4384 (-PinOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAVVIDMM_PAGING_QUEUE@@K_KPEA_K@Z.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00017E8 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0001938 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001998 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?BeginMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ @ 0x1C009215C (-BeginMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ.c)
 *     ?CommitMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ @ 0x1C00921C0 (-CommitMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ.c)
 *     ?NotifyAllocationEvicted@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00B2884 (-NotifyAllocationEvicted@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 */

char __fastcall VIDMM_DEVICE::UnreferencePinnedAllocation(VIDMM_DEVICE *this, struct VIDMM_ALLOC *a2, char a3)
{
  char v6; // al
  char v7; // si
  int v8; // eax
  __int64 v9; // rcx
  __int64 v11; // rdx
  __int64 v12; // r8
  _BYTE v13[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v14; // [rsp+28h] [rbp-20h]
  int v15; // [rsp+30h] [rbp-18h]

  if ( a3 )
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(*(_QWORD *)this + 44672LL));
  v6 = *((_BYTE *)a2 + 25);
  v7 = v6 & 1;
  if ( (v6 & 1) != 0 )
  {
    if ( (v6 & 2) != 0 && (v6 & 4) == 0 )
      *((_BYTE *)a2 + 25) = v6 | 4;
    DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v13, (struct _KTHREAD **)(*((_QWORD *)this + 2) + 360LL), 0);
    DXGPUSHLOCK::AcquireExclusive(v14);
    *((_BYTE *)a2 + 25) &= ~1u;
    v8 = *((_DWORD *)a2 + 38);
    v15 = 2;
    if ( !v8 )
    {
      VIDMM_PROCESS_ADAPTER_INFO::BeginMemoryUsageChange(*((VIDMM_PROCESS_ADAPTER_INFO **)this + 2));
      VIDMM_DEVICE::NotifyAllocationEvicted(this, a2);
      VIDMM_PROCESS_ADAPTER_INFO::CommitMemoryUsageChange(*((VIDMM_PROCESS_ADAPTER_INFO **)this + 2), v11, v12);
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v13);
  }
  if ( a3 )
  {
    v9 = *(_QWORD *)this + 44672LL;
    *(_QWORD *)(v9 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v9, 0LL);
    KeLeaveCriticalRegion();
  }
  return v7;
}
