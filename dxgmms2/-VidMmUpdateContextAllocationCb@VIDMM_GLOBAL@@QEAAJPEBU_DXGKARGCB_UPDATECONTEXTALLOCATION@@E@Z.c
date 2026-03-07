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
