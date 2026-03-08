/*
 * XREFs of ?UnreferenceAllocationList@VIDMM_DEVICE@@QEAAXPEAPEAUVIDMM_ALLOC@@_KPEA_K@Z @ 0x1C00B2774
 * Callers:
 *     ?Evict@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAPEAU_VIDMM_MULTI_ALLOC@@IKPEA_K@Z @ 0x1C00B261C (-Evict@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAPEAU_VIDMM_MULTI_ALLOC@@IKPEA_K@Z.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00017E8 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0001938 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001998 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     VidSchMarkDeviceAsError @ 0x1C0014AF0 (VidSchMarkDeviceAsError.c)
 *     DxgkLogInternalTriageEvent @ 0x1C00199EC (DxgkLogInternalTriageEvent.c)
 *     ?BeginMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ @ 0x1C009215C (-BeginMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ.c)
 *     ?CommitMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ @ 0x1C00921C0 (-CommitMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ.c)
 *     ?GetNumBytesToTrim@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXPEA_K_N1@Z @ 0x1C0092260 (-GetNumBytesToTrim@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXPEA_K_N1@Z.c)
 *     ?NotifyAllocationEvicted@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00B2884 (-NotifyAllocationEvicted@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 */

void __fastcall VIDMM_DEVICE::UnreferenceAllocationList(
        VIDMM_DEVICE *this,
        struct VIDMM_ALLOC **a2,
        __int64 a3,
        unsigned __int64 *a4)
{
  VIDMM_PROCESS_ADAPTER_INFO *v8; // rcx
  struct VIDMM_ALLOC **v9; // r14
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rcx
  _BYTE v15[8]; // [rsp+50h] [rbp-38h] BYREF
  DXGPUSHLOCK *v16; // [rsp+58h] [rbp-30h]
  int v17; // [rsp+60h] [rbp-28h]

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v15, (struct _KTHREAD **)(*((_QWORD *)this + 2) + 360LL), 0);
  DXGPUSHLOCK::AcquireExclusive(v16);
  v8 = (VIDMM_PROCESS_ADAPTER_INFO *)*((_QWORD *)this + 2);
  v17 = 2;
  VIDMM_PROCESS_ADAPTER_INFO::BeginMemoryUsageChange(v8);
  v9 = &a2[a3];
  while ( a2 != v9 )
  {
    v10 = (__int64)*a2;
    if ( *((_DWORD *)*a2 + 38) == ((*(_DWORD *)(**(_QWORD **)*a2 + 72LL) >> 5) & 1) )
    {
      WdLogSingleEntry2(1LL, *a2, (*(_DWORD *)(**(_QWORD **)v10 + 72LL) >> 5) & 1);
      DxgkLogInternalTriageEvent(**(_QWORD **)v10, 0x40000LL);
    }
    else
    {
      --*(_DWORD *)(v10 + 152);
      v11 = *(int *)(v10 + 156);
      if ( !*(_DWORD *)(v10 + 152) && (_DWORD)v11 && !*(_BYTE *)(**(_QWORD **)v10 + 81LL) )
      {
        WdLogSingleEntry1(1LL, v11);
        DxgkLogInternalTriageEvent(v14, 0x40000LL);
        VidSchMarkDeviceAsError(*(_QWORD *)(*(_QWORD *)(v10 + 8) + 32LL));
      }
      if ( !(*(_BYTE *)(v10 + 25) & 1 | *(_DWORD *)(v10 + 152)) )
        VIDMM_DEVICE::NotifyAllocationEvicted(this, (struct VIDMM_ALLOC *)v10);
    }
    ++a2;
  }
  VIDMM_PROCESS_ADAPTER_INFO::GetNumBytesToTrim(*((VIDMM_PROCESS_ADAPTER_INFO **)this + 2), a4, 0, 1u);
  VIDMM_PROCESS_ADAPTER_INFO::CommitMemoryUsageChange(*((VIDMM_PROCESS_ADAPTER_INFO **)this + 2), v12, v13);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v15);
}
