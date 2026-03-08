/*
 * XREFs of ??1VIDMM_PROCESS@@QEAA@XZ @ 0x1C00944F0
 * Callers:
 *     VidMmTerminateProcess @ 0x1C0017830 (VidMmTerminateProcess.c)
 *     ??_GVIDMM_PROCESS@@QEAAPEAXI@Z @ 0x1C002C7A8 (--_GVIDMM_PROCESS@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001998 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C0001A30 (--3@YAXPEAX@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0001AD8 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetMaximumGlobalAdapterCount@DXGGLOBAL@@QEAAKXZ @ 0x1C0001AFC (-GetMaximumGlobalAdapterCount@DXGGLOBAL@@QEAAKXZ.c)
 *     ?VidMmiClosePartition@@YAXPEAUVIDMM_PARTITION@@@Z @ 0x1C0001B50 (-VidMmiClosePartition@@YAXPEAUVIDMM_PARTITION@@@Z.c)
 *     ??_GVIDMM_PROCESS_ADAPTER_INFO@@QEAAPEAXI@Z @ 0x1C0014898 (--_GVIDMM_PROCESS_ADAPTER_INFO@@QEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A8E0 (_guard_dispatch_icall_nop.c)
 *     ?RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1C0095E30 (-RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z.c)
 *     ?DestroyVaAllocator@CVirtualAddressAllocator@@QEAAXXZ @ 0x1C00A62CC (-DestroyVaAllocator@CVirtualAddressAllocator@@QEAAXXZ.c)
 *     ??1VIDMM_PROCESS_FENCE_STORAGE@@QEAA@XZ @ 0x1C00B3050 (--1VIDMM_PROCESS_FENCE_STORAGE@@QEAA@XZ.c)
 *     ?FreeVmProcessFencePageInGlobalStorage@VIDMM_PROCESS@@QEAAXXZ @ 0x1C00F0E10 (-FreeVmProcessFencePageInGlobalStorage@VIDMM_PROCESS@@QEAAXXZ.c)
 */

void __fastcall VIDMM_PROCESS::~VIDMM_PROCESS(VIDMM_PROCESS *this)
{
  __int64 v2; // rbp
  DXGGLOBAL *Global; // rax
  VIDMM_GLOBAL **v4; // rdi
  DXGGLOBAL *v5; // rax
  __int64 v6; // rax
  void (__fastcall ***v7)(_QWORD, __int64); // rcx
  __int64 v8; // rax
  void *v9; // rdi
  CVirtualAddressAllocator *v10; // rcx
  void *v11; // rcx
  volatile signed __int32 *v12; // rcx
  unsigned int i; // esi
  __int64 *v14; // rcx
  __int64 v15; // rax
  __int64 **v16; // rdx
  struct _PCW_INSTANCE *v17; // rcx
  VIDMM_GLOBAL *v18; // rdx
  VIDMM_GLOBAL ***v19; // rcx
  __int64 v20; // rcx

  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = this;
  if ( *((_QWORD *)this + 2) )
  {
    v2 = 0LL;
    Global = DXGGLOBAL::GetGlobal();
    if ( (unsigned int)DXGGLOBAL::GetMaximumGlobalAdapterCount(Global) )
    {
      do
      {
        v4 = *(VIDMM_GLOBAL ***)(*((_QWORD *)this + 2) + 8 * v2);
        if ( v4 )
        {
          DXGPUSHLOCK::AcquireExclusive((VIDMM_GLOBAL *)((char *)*v4 + 41072));
          for ( i = 0; i < *((_DWORD *)*v4 + 1754); ++i )
          {
            v14 = (__int64 *)((char *)v4[6] + 296 * i);
            v15 = *v14;
            if ( *v14 )
            {
              if ( *(__int64 **)(v15 + 8) != v14 )
                goto LABEL_35;
              v16 = (__int64 **)v14[1];
              if ( *v16 != v14 )
                goto LABEL_35;
              *v16 = (__int64 *)v15;
              *(_QWORD *)(v15 + 8) = v16;
              *v14 = 0LL;
              v14[1] = 0LL;
            }
            v17 = (struct _PCW_INSTANCE *)v14[31];
            if ( v17 )
              PcwCloseInstance(v17);
          }
          v18 = v4[3];
          if ( *((VIDMM_GLOBAL ***)v18 + 1) != v4 + 3 || (v19 = (VIDMM_GLOBAL ***)v4[4], *v19 != v4 + 3) )
LABEL_35:
            __fastfail(3u);
          *v19 = (VIDMM_GLOBAL **)v18;
          *((_QWORD *)v18 + 1) = v19;
          *(_QWORD *)(*((_QWORD *)this + 2) + 8 * v2) = 0LL;
          v20 = (__int64)*v4 + 41072;
          *(_QWORD *)(v20 + 8) = 0LL;
          ExReleasePushLockExclusiveEx(v20, 0LL);
          KeLeaveCriticalRegion();
          VIDMM_GLOBAL::RequestNewBudget(*v4, 1);
          VIDMM_PROCESS_ADAPTER_INFO::`scalar deleting destructor'((VIDMM_PROCESS_ADAPTER_INFO *)v4);
        }
        v2 = (unsigned int)(v2 + 1);
        v5 = DXGGLOBAL::GetGlobal();
      }
      while ( (unsigned int)v2 < (unsigned int)DXGGLOBAL::GetMaximumGlobalAdapterCount(v5) );
    }
    operator delete(*((void **)this + 2));
  }
  v6 = *((_QWORD *)this + 4);
  if ( !v6 || (*(_DWORD *)(v6 + 424) & 0x100) == 0 )
  {
    v7 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 3);
    if ( v7 )
      (**v7)(v7, 1LL);
  }
  v8 = *((_QWORD *)this + 4);
  if ( v8 && (*(_DWORD *)(v8 + 424) & 0x180) != 0 )
    VIDMM_PROCESS::FreeVmProcessFencePageInGlobalStorage(this);
  v9 = (void *)*((_QWORD *)this + 5);
  if ( v9 )
  {
    VIDMM_PROCESS_FENCE_STORAGE::~VIDMM_PROCESS_FENCE_STORAGE(*((VIDMM_PROCESS_FENCE_STORAGE **)this + 5));
    operator delete(v9);
  }
  v10 = (CVirtualAddressAllocator *)*((_QWORD *)this + 27);
  if ( v10 )
    CVirtualAddressAllocator::DestroyVaAllocator(v10);
  v11 = (void *)*((_QWORD *)this + 37);
  if ( v11 != (void *)-1LL )
    ObCloseHandle(v11, 0);
  v12 = (volatile signed __int32 *)*((_QWORD *)this + 36);
  if ( v12 )
    VidMmiClosePartition(v12);
}
