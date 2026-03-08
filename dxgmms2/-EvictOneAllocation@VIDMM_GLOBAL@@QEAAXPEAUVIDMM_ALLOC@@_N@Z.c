/*
 * XREFs of ?EvictOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1C0093850
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C00881C0 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?EvictPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z @ 0x1C00936BC (-EvictPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z.c)
 *     ?EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z @ 0x1C0095AF0 (-EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00A33B0 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?UnpinOneAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_ALLOC@@W4VIDMM_UNPIN_ACTION@@_N@Z @ 0x1C00B2444 (-UnpinOneAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_ALLOC@@W4VIDMM_UNPIN_ACTION@@_N@Z.c)
 *     ?LockInAperture@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@PEA_NPEAPEAU2@@Z @ 0x1C00E4970 (-LockInAperture@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@PEA_NPEAPEAU2@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001A8E0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x1C002E4FC (McTemplateK0p_EtwWriteTransfer.c)
 *     ?NotifyAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_NPEA_K2@Z @ 0x1C009391C (-NotifyAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_NPEA_K2@Z.c)
 */

void __fastcall VIDMM_GLOBAL::EvictOneAllocation(VIDMM_GLOBAL *this, __int64 **a2, __int64 a3)
{
  bool v3; // si
  VIDMM_GLOBAL *v5; // rbp
  __int64 v6; // rdi
  int v7; // eax
  _QWORD *v8; // rax
  __int64 *v9; // rdx
  int v10; // [rsp+20h] [rbp-28h]

  v3 = a3;
  v5 = this;
  v6 = **a2;
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = a2;
  v7 = *((_DWORD *)a2 + 7) & 3;
  if ( v7 == 2 )
  {
    VIDMM_GLOBAL::NotifyAllocationEviction(v5, (struct VIDMM_ALLOC *)a2, v3, 0LL, 0LL);
  }
  else if ( v7 == 1 )
  {
    v8 = a2 + 7;
    v9 = a2[7];
    if ( (__int64 **)v9[1] != a2 + 7 || (this = (VIDMM_GLOBAL *)a2[8], *(_QWORD **)this != v8) )
      __fastfail(3u);
    *(_QWORD *)this = v9;
    v9[1] = (__int64)this;
    *((_DWORD *)a2 + 7) &= 0xFFFFFFFC;
    a2[8] = 0LL;
    *v8 = 0LL;
  }
  if ( !v3 || (this = (VIDMM_GLOBAL *)a2[1][1], (*((_DWORD *)this + 28) & 2) != 0) )
  {
    if ( *(_DWORD *)(v6 + 112) == 1 )
    {
      LOBYTE(a3) = 1;
      LOBYTE(v10) = 0;
      (*(void (__fastcall **)(_QWORD, __int64, __int64, _QWORD, int, _QWORD))(**(_QWORD **)(v6 + 120) + 48LL))(
        *(_QWORD *)(v6 + 120),
        v6,
        a3,
        0LL,
        v10,
        0LL);
    }
  }
  if ( bTracingEnabled )
  {
    if ( (byte_1C00769C1 & 1) != 0 )
      McTemplateK0p_EtwWriteTransfer((__int64)this, &EventEvictAllocation, a3, v6);
  }
}
