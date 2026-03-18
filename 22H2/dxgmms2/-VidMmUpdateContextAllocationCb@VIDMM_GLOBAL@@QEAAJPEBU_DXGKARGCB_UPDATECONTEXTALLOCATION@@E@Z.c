/*
 * XREFs of ?VidMmUpdateContextAllocationCb@VIDMM_GLOBAL@@QEAAJPEBU_DXGKARGCB_UPDATECONTEXTALLOCATION@@E@Z @ 0x1C00EA900
 * Callers:
 *     ?VidMmUpdateContextAllocationCb@@YAJPEAVVIDMM_GLOBAL@@PEBU_DXGKARGCB_UPDATECONTEXTALLOCATION@@@Z @ 0x1C002CE20 (-VidMmUpdateContextAllocationCb@@YAJPEAVVIDMM_GLOBAL@@PEBU_DXGKARGCB_UPDATECONTEXTALLOCATION@@@Z.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C008ACF0 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     ?DriverId@VIDMM_SEGMENT@@QEAAKXZ @ 0x1C0004EE4 (-DriverId@VIDMM_SEGMENT@@QEAAKXZ.c)
 *     ?SysMmGetLogicalAddress@@YA_KQEAX@Z @ 0x1C0005224 (-SysMmGetLogicalAddress@@YA_KQEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C00199AC (DxgkLogInternalTriageEvent.c)
 *     memset @ 0x1C001ABC0 (memset.c)
 *     ?QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C0091AD8 (-QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEBU_DXGK_ADL@@W4VIDMM_FLUSH_TLB_MODE@@PEAPEAUVIDMM_ALLOC@@PEA_N@Z @ 0x1C0096140 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEBU_DX.c)
 *     ?VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00A2C48 (-VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@_N@Z @ 0x1C00A7740 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 *     ?VidMmiInitializeAdlForMdl@@YAXPEAU_DXGK_ADL@@PEAU_MDL@@_K@Z @ 0x1C00B41DC (-VidMmiInitializeAdlForMdl@@YAXPEAU_DXGK_ADL@@PEAU_MDL@@_K@Z.c)
 *     ?FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z @ 0x1C00C2B74 (-FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z.c)
 *     ?UpdateContextAllocation@VIDMM_GLOBAL@@QEAAX_K0PEAXI@Z @ 0x1C00E8798 (-UpdateContextAllocation@VIDMM_GLOBAL@@QEAAX_K0PEAXI@Z.c)
 */

int __fastcall VIDMM_GLOBAL::VidMmUpdateContextAllocationCb(
        VIDMM_GLOBAL *this,
        const struct _DXGKARGCB_UPDATECONTEXTALLOCATION *a2,
        char a3)
{
  _QWORD *hAllocation; // rbx
  __int64 v6; // rax
  __int64 v8; // rdx
  __int64 v9; // rdi
  int v10; // ecx
  VIDMM_SEGMENT *v11; // rbx
  struct _KTHREAD **v12; // r12
  __int64 v13; // rcx
  volatile signed __int32 *v14; // rax
  __int64 v15; // r15
  __int64 v16; // rcx
  struct _RTL_BALANCED_NODE *v17; // r13
  unsigned __int64 LogicalAddress; // rbx
  struct _MDL *FullMDL; // rax
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // r8
  __int128 v23; // [rsp+78h] [rbp-39h] BYREF
  _QWORD v24[12]; // [rsp+88h] [rbp-29h] BYREF
  DXGK_MULTIPLANE_OVERLAY_PLANE3 *v25; // [rsp+130h] [rbp+7Fh] BYREF

  hAllocation = a2->hAllocation;
  if ( a3 )
  {
    v8 = hAllocation[3];
    v9 = **(_QWORD **)v8;
    v10 = *(_DWORD *)(v9 + 68);
    v11 = *(VIDMM_SEGMENT **)(v9 + 120);
    v12 = (struct _KTHREAD **)*((_QWORD *)this + (v10 & 0x3F) + 5052);
    if ( (*(_DWORD *)(v8 + 28) & 3) == 2 )
    {
      v14 = CVirtualAddressAllocator::MapVirtualAddressRange(
              v12,
              v8,
              0LL,
              1,
              *(_QWORD *)(v9 + 16),
              0LL,
              0LL,
              0LL,
              *(_DWORD *)(v9 + 32),
              1LL,
              0LL,
              v10 & 0x3F,
              0LL,
              0);
      v15 = (__int64)v14;
      if ( v14 )
      {
        v17 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)v14 + 12);
        v23 = 0LL;
        if ( (*((_DWORD *)v11 + 20) & 0x1001) != 0 )
        {
          LogicalAddress = SysMmGetLogicalAddress(*(void *const *)(v9 + 528));
          FullMDL = VidMmGetFullMDL((struct _VIDMM_GLOBAL_ALLOC *)v9, 0LL);
          VidMmiInitializeAdlForMdl((struct _DXGK_ADL *)&v23, FullMDL, LogicalAddress);
          v20 = 0;
        }
        else
        {
          v21 = *(_QWORD *)(v9 + 128) >> 12;
          LODWORD(v23) = *(_DWORD *)(v9 + 16) >> 12;
          *((_QWORD *)&v23 + 1) = v21;
          DWORD1(v23) = 1;
          v20 = VIDMM_SEGMENT::DriverId(v11);
        }
        v25 = 0LL;
        CVirtualAddressAllocator::CommitVirtualAddressRange(
          (__int64)v12,
          v15,
          *(_DWORD *)(v9 + 68) & 0x3F,
          v20,
          0LL,
          (struct _DXGK_ADL *)&v23,
          1,
          &v25,
          0LL);
        VIDMM_GLOBAL::UpdateContextAllocation(
          (ADAPTER_RENDER **)this,
          (D3DGPU_VIRTUAL_ADDRESS)v17,
          *(_QWORD *)(v9 + 16),
          (SIZE_T)a2->pPrivateDriverData,
          a2->PrivateDriverDataSize);
        CVirtualAddressAllocator::FreeVirtualAddressRange(v12, v17, v22);
        return 0;
      }
      else
      {
        WdLogSingleEntry1(1LL, 24464LL);
        DxgkLogInternalTriageEvent(v16, 0x40000LL);
        return -1073741823;
      }
    }
    else
    {
      WdLogSingleEntry1(1LL, 24443LL);
      DxgkLogInternalTriageEvent(v13, 0x40000LL);
      return -1073741811;
    }
  }
  else
  {
    memset(v24, 0, 0x58uLL);
    v6 = hAllocation[3];
    LODWORD(v24[0]) = 117;
    v24[5] = a2;
    HIDWORD(v24[0]) = *(_DWORD *)(**(_QWORD **)v6 + 68LL) & 0x3F;
    return VIDMM_GLOBAL::QueueSystemCommandAndWait(this, (struct _VIDMM_SYSTEM_COMMAND *)v24, 1);
  }
}
