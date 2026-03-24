/*
 * XREFs of ?EvictOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1C0062FB0
 * Callers:
 *     ?EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z @ 0x1C005F978 (-EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z.c)
 *     ?EvictPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z @ 0x1C0061240 (-EvictPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C0067150 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C006C260 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?LockInAperture@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@PEA_NPEAPEAU2@@Z @ 0x1C00AFA64 (-LockInAperture@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@PEA_NPEAPEAU2@@Z.c)
 *     ?UnpinOneAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_ALLOC@@W4VIDMM_UNPIN_ACTION@@_N@Z @ 0x1C00B32B0 (-UnpinOneAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_ALLOC@@W4VIDMM_UNPIN_ACTION@@_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0018AA0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x1C0023F2C (McTemplateK0p_EtwWriteTransfer.c)
 *     ?NotifyAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_NPEA_K2@Z @ 0x1C0064A40 (-NotifyAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_NPEA_K2@Z.c)
 */

void __fastcall VIDMM_GLOBAL::EvictOneAllocation(struct VIDMM_ALLOC **this, struct VIDMM_ALLOC *a2, __int64 a3)
{
  bool v3; // si
  VIDMM_GLOBAL *v5; // rbp
  __int64 v6; // rdi
  int v7; // eax
  _QWORD *v8; // rax
  struct VIDMM_ALLOC *v9; // rdx
  int v10; // [rsp+20h] [rbp-28h]

  v3 = a3;
  v5 = (VIDMM_GLOBAL *)this;
  v6 = **(_QWORD **)a2;
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = a2;
  v7 = *((_DWORD *)a2 + 7) & 3;
  if ( v7 == 2 )
  {
    VIDMM_GLOBAL::NotifyAllocationEviction(v5, a2, v3, 0LL, 0LL);
  }
  else if ( v7 == 1 )
  {
    v8 = (_QWORD *)((char *)a2 + 56);
    this = (struct VIDMM_ALLOC **)*((_QWORD *)a2 + 7);
    if ( this[1] != (struct VIDMM_ALLOC *)((char *)a2 + 56)
      || (v9 = (struct VIDMM_ALLOC *)*((_QWORD *)a2 + 8), *(_QWORD **)v9 != v8) )
    {
      __fastfail(3u);
    }
    *(_QWORD *)v9 = this;
    this[1] = v9;
    *((_DWORD *)a2 + 7) &= 0xFFFFFFFC;
    *((_QWORD *)a2 + 8) = 0LL;
    *v8 = 0LL;
  }
  if ( !v3 || (this = *(struct VIDMM_ALLOC ***)(*((_QWORD *)a2 + 1) + 8LL), ((_DWORD)this[14] & 2) != 0) )
  {
    if ( *(_DWORD *)(v6 + 120) == 1 )
    {
      LOBYTE(a3) = 1;
      LOBYTE(v10) = 0;
      (*(void (__fastcall **)(_QWORD, __int64, __int64, _QWORD, int, _QWORD))(**(_QWORD **)(v6 + 128) + 48LL))(
        *(_QWORD *)(v6 + 128),
        v6,
        a3,
        0LL,
        v10,
        0LL);
    }
  }
  if ( bTracingEnabled )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0p_EtwWriteTransfer((__int64)this, &EventEvictAllocation, a3, v6);
  }
}
