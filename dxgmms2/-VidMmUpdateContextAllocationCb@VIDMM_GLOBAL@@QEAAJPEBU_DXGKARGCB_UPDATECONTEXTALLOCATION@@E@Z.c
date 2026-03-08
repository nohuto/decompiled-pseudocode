/*
 * XREFs of ?VidMmUpdateContextAllocationCb@VIDMM_GLOBAL@@QEAAJPEBU_DXGKARGCB_UPDATECONTEXTALLOCATION@@E@Z @ 0x1C00EAC60
 * Callers:
 *     ?VidMmUpdateContextAllocationCb@@YAJPEAVVIDMM_GLOBAL@@PEBU_DXGKARGCB_UPDATECONTEXTALLOCATION@@@Z @ 0x1C002CF50 (-VidMmUpdateContextAllocationCb@@YAJPEAVVIDMM_GLOBAL@@PEBU_DXGKARGCB_UPDATECONTEXTALLOCATION@@@Z.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C00881C0 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     ?DriverId@VIDMM_SEGMENT@@QEAAKXZ @ 0x1C0001414 (-DriverId@VIDMM_SEGMENT@@QEAAKXZ.c)
 *     ?SysMmGetLogicalAddress@@YA_KQEAX@Z @ 0x1C0001754 (-SysMmGetLogicalAddress@@YA_KQEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C00199EC (DxgkLogInternalTriageEvent.c)
 *     Feature_Servicing_GfxDriverEventsMemoryLeak__private_IsEnabledDeviceUsage @ 0x1C0019B98 (Feature_Servicing_GfxDriverEventsMemoryLeak__private_IsEnabledDeviceUsage.c)
 *     memset @ 0x1C001AC80 (memset.c)
 *     ?QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C0087E80 (-QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEBU_DXGK_ADL@@W4VIDMM_FLUSH_TLB_MODE@@PEAPEAUVIDMM_ALLOC@@PEA_N@Z @ 0x1C008E1D0 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEBU_DX.c)
 *     ?VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0098CB8 (-VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@_N@Z @ 0x1C009EC00 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 *     ?VidMmiInitializeAdlForMdl@@YAXPEAU_DXGK_ADL@@PEAU_MDL@@_K@Z @ 0x1C00B467C (-VidMmiInitializeAdlForMdl@@YAXPEAU_DXGK_ADL@@PEAU_MDL@@_K@Z.c)
 *     ?FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z @ 0x1C00C3074 (-FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z.c)
 *     ?UpdateContextAllocation@VIDMM_GLOBAL@@QEAAX_K0PEAXI@Z @ 0x1C00E8AF8 (-UpdateContextAllocation@VIDMM_GLOBAL@@QEAAX_K0PEAXI@Z.c)
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
  struct _KTHREAD **v12; // r14
  __int64 v13; // rcx
  volatile signed __int32 *v14; // rax
  __int64 v15; // r13
  __int64 v16; // rcx
  struct _RTL_BALANCED_NODE *v17; // r12
  unsigned __int64 LogicalAddress; // rbx
  struct _MDL *FullMDL; // rax
  int v20; // ebx
  __int64 v21; // rdx
  int v22; // r8d
  __int64 v23; // r8
  __int128 v24; // [rsp+78h] [rbp-39h] BYREF
  _QWORD v25[12]; // [rsp+88h] [rbp-29h] BYREF
  DXGK_MULTIPLANE_OVERLAY_PLANE3 *v26; // [rsp+130h] [rbp+7Fh] BYREF

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
        v24 = 0LL;
        if ( (*((_DWORD *)v11 + 20) & 0x1001) != 0 )
        {
          LogicalAddress = SysMmGetLogicalAddress(*(void *const *)(v9 + 528));
          FullMDL = VidMmGetFullMDL((struct _VIDMM_GLOBAL_ALLOC *)v9, 0LL);
          VidMmiInitializeAdlForMdl((struct _DXGK_ADL *)&v24, FullMDL, LogicalAddress);
          v20 = 0;
        }
        else
        {
          v21 = *(_QWORD *)(v9 + 128) >> 12;
          LODWORD(v24) = *(_DWORD *)(v9 + 16) >> 12;
          *((_QWORD *)&v24 + 1) = v21;
          DWORD1(v24) = 1;
          v20 = VIDMM_SEGMENT::DriverId(v11);
        }
        Feature_Servicing_GfxDriverEventsMemoryLeak__private_IsEnabledDeviceUsage();
        v22 = *(_DWORD *)(v9 + 68);
        v26 = 0LL;
        CVirtualAddressAllocator::CommitVirtualAddressRange(
          (__int64)v12,
          v15,
          v22 & 0x3F,
          v20,
          0LL,
          (struct _DXGK_ADL *)&v24,
          1,
          &v26,
          0LL);
        VIDMM_GLOBAL::UpdateContextAllocation(
          (ADAPTER_RENDER **)this,
          (D3DGPU_VIRTUAL_ADDRESS)v17,
          *(_QWORD *)(v9 + 16),
          (SIZE_T)a2->pPrivateDriverData,
          a2->PrivateDriverDataSize);
        CVirtualAddressAllocator::FreeVirtualAddressRange(v12, v17, v23);
        return 0;
      }
      else
      {
        WdLogSingleEntry1(1LL, 24513LL);
        DxgkLogInternalTriageEvent(v16, 0x40000LL);
        return -1073741823;
      }
    }
    else
    {
      WdLogSingleEntry1(1LL, 24492LL);
      DxgkLogInternalTriageEvent(v13, 0x40000LL);
      return -1073741811;
    }
  }
  else
  {
    memset(v25, 0, 0x58uLL);
    v6 = hAllocation[3];
    LODWORD(v25[0]) = 117;
    v25[5] = a2;
    HIDWORD(v25[0]) = *(_DWORD *)(**(_QWORD **)v6 + 68LL) & 0x3F;
    return VIDMM_GLOBAL::QueueSystemCommandAndWait(this, (struct _VIDMM_SYSTEM_COMMAND *)v25, 1);
  }
}
