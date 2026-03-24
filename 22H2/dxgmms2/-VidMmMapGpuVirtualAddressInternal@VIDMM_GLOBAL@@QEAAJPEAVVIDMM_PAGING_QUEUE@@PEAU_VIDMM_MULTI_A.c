/*
 * XREFs of ?VidMmMapGpuVirtualAddressInternal@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEAUD3DDDI_MAPGPUVIRTUALADDRESS@@E@Z @ 0x1C0072A6C
 * Callers:
 *     ?VidMmMapGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEAUD3DDDI_MAPGPUVIRTUALADDRESS@@EI@Z @ 0x1C0073B90 (-VidMmMapGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PE.c)
 * Callees:
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00016E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@_N@Z @ 0x1C005EDB4 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 *     ?ReleaseVaRangeReferenceSafe@VIDMM_MAPPED_VA_RANGE@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1C005F094 (-ReleaseVaRangeReferenceSafe@VIDMM_MAPPED_VA_RANGE@@QEAAJPEAVCVirtualAddressAllocator@@@Z.c)
 *     ?UncommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAUVIDMM_MAPPED_VA_RANGE@@EPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C0065A9C (-UncommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAUVIDMM_MAPPED_V.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1C006F08C (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 *     ?CommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_MAPPED_VA_RANGE@@EPEAU_MDL@@PEA_KPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C0073560 (-CommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAVVIDMM_PAGING_QUE.c)
 *     ?RecordVaPagingHistoryMapGpuVa@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAUVIDMM_MAPPED_VA_RANGE@@PEAVVIDMM_PAGING_QUEUE@@_K@Z @ 0x1C00BCD04 (-RecordVaPagingHistoryMapGpuVa@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAUVIDMM_MAPPED_VA_RANGE@@.c)
 */

__int64 __fastcall VIDMM_GLOBAL::VidMmMapGpuVirtualAddressInternal(
        VIDMM_GLOBAL *this,
        struct VIDMM_PAGING_QUEUE *a2,
        __int64 **a3,
        struct D3DDDI_MAPGPUVIRTUALADDRESS *a4,
        unsigned __int8 a5)
{
  bool v5; // cf
  unsigned __int64 *v7; // r12
  unsigned __int64 v8; // rbx
  unsigned __int64 v11; // rbp
  unsigned int v12; // r13d
  __int64 *v13; // rdx
  D3DGPU_SIZE_T OffsetInPages; // rax
  __int64 v15; // r8
  D3DGPU_SIZE_T v16; // rcx
  __int64 v17; // rax
  D3DGPU_SIZE_T SizeInPages; // rcx
  unsigned __int64 v20; // rcx
  VIDMM_PROCESS *v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  unsigned int v25; // r10d
  unsigned int v26; // r11d
  struct CVirtualAddressAllocator *VirtualAddressAllocator; // r14
  __int64 v28; // rax
  __int64 v29; // r8
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  struct VIDMM_MAPPED_VA_RANGE *v35; // rbp
  __int64 v36; // rax
  bool v37; // zf
  struct VIDMM_PAGING_QUEUE *v38; // r13
  unsigned int v39; // edi
  struct _MDL *BaseAddress; // [rsp+28h] [rbp-80h]
  unsigned __int64 *MinimumAddress; // [rsp+30h] [rbp-78h]
  struct VIDMM_VAD_PENDING_OPERATION *MaximumAddress; // [rsp+38h] [rbp-70h]
  struct _D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE::$1733E72EC9282FC5874A304A0CB4AC6C::$B8A99364A42B8948C2A577AA69BF28DA Value; // [rsp+48h] [rbp-60h]
  UINT64 DriverProtection; // [rsp+50h] [rbp-58h]
  struct VIDMM_VAD_PENDING_OPERATION *v46; // [rsp+C0h] [rbp+18h] BYREF

  v5 = a5 != 0;
  a5 = -a5;
  LODWORD(v46) = *((_DWORD *)a2 + 36);
  v7 = (unsigned __int64 *)((unsigned __int64)&a4->PagingFenceValue & -(__int64)v5);
  v8 = 0LL;
  v11 = a4->SizeInPages << 12;
  v12 = 4096;
  if ( a3 )
  {
    if ( !a4->SizeInPages )
      v11 = *(_QWORD *)(**a3 + 16);
    if ( *((_BYTE *)a3 + 24) )
      a4->Protection.Value &= ~1uLL;
    v13 = *a3;
    OffsetInPages = a4->OffsetInPages;
    v15 = **a3;
    v16 = *(_QWORD *)(v15 + 16) >> 12;
    if ( OffsetInPages >= v16 )
    {
      v17 = WdLogNewEntry5_WdWarning(v16, v13);
      SizeInPages = a4->OffsetInPages;
      *(_QWORD *)(v17 + 32) = 20153LL;
LABEL_8:
      *(_QWORD *)(v17 + 24) = SizeInPages;
      WdLogEvent5_WdWarning(v17);
      return 3221225485LL;
    }
    v20 = v16 - OffsetInPages;
    if ( v20 < v11 >> 12 && (*((_BYTE *)this + 40937) & 4) == 0 )
    {
      v17 = WdLogNewEntry5_WdWarning(v20, v13);
      SizeInPages = a4->SizeInPages;
      *(_QWORD *)(v17 + 32) = 20164LL;
      goto LABEL_8;
    }
    v21 = (VIDMM_PROCESS *)v13[1];
    if ( *(_DWORD *)(v15 + 32) > 0x1000u )
      v12 = *(_DWORD *)(v15 + 32);
  }
  else
  {
    v22 = *((_QWORD *)DXGPROCESS::GetCurrent() + 8);
    if ( v22 )
      v21 = *(VIDMM_PROCESS **)(v22 + 8);
    else
      v21 = 0LL;
  }
  if ( !v11 )
  {
    v17 = WdLogNewEntry5_WdWarning(v21, v13);
    SizeInPages = a4->SizeInPages;
    *(_QWORD *)(v17 + 32) = 20186LL;
    goto LABEL_8;
  }
  VirtualAddressAllocator = VIDMM_PROCESS::GetVirtualAddressAllocator(
                              v21,
                              *(_DWORD *)(*((_QWORD *)this + 3) + 232LL),
                              0xFFFFFFFF);
  if ( VirtualAddressAllocator )
  {
    DriverProtection = a4->DriverProtection;
    Value = (struct _D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE::$1733E72EC9282FC5874A304A0CB4AC6C::$B8A99364A42B8948C2A577AA69BF28DA)a4->Protection.Value;
    MaximumAddress = (struct VIDMM_VAD_PENDING_OPERATION *)a4->MaximumAddress;
    MinimumAddress = (unsigned __int64 *)a4->MinimumAddress;
    BaseAddress = (struct _MDL *)a4->BaseAddress;
    v29 = a4->OffsetInPages << 12;
    v46 = 0LL;
    v30 = CVirtualAddressAllocator::MapVirtualAddressRange(
            VirtualAddressAllocator,
            (__int64)a3,
            v29,
            v25,
            v11,
            (unsigned __int64)BaseAddress,
            (unsigned __int64)MinimumAddress,
            (unsigned __int64)MaximumAddress,
            v12,
            (_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE)Value,
            DriverProtection,
            v26,
            (void **)&v46,
            1);
    v35 = (struct VIDMM_MAPPED_VA_RANGE *)v30;
    if ( v30 )
    {
      v37 = (*(_BYTE *)&a4->Protection.0 & 8) == 0;
      a4->VirtualAddress = *(_QWORD *)(v30 + 96);
      a4->PagingFenceValue = 0LL;
      if ( v37 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v30 + 128));
        v38 = a2;
        v39 = VIDMM_GLOBAL::CommitVirtualAddressRange(
                this,
                VirtualAddressAllocator,
                a2,
                (struct VIDMM_MAPPED_VA_RANGE *)v30,
                0,
                0LL,
                v7,
                v46);
        if ( v39 == 259 && a3 && (*((_DWORD *)a3 + 7) & 0x20) != 0 )
        {
          a3[31] = (__int64 *)a2;
          a3[34] = (__int64 *)*v7;
        }
      }
      else
      {
        v38 = a2;
        v39 = VIDMM_GLOBAL::UncommitVirtualAddressRange(
                this,
                VirtualAddressAllocator,
                (struct VIDMM_MAPPED_VA_RANGE *)v30,
                0,
                v46);
      }
      if ( *((_QWORD *)this + 5123) )
      {
        if ( v7 )
          v8 = *v7;
        VIDMM_GLOBAL::RecordVaPagingHistoryMapGpuVa(
          this,
          *((struct VIDMM_PROCESS **)VirtualAddressAllocator + 12),
          v35,
          v38,
          v8);
      }
      VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReferenceSafe((volatile signed __int32 *)v35, VirtualAddressAllocator);
      return v39;
    }
    else
    {
      v36 = WdLogNewEntry5_WdError(v32, v31, v33, v34);
      *(_QWORD *)(v36 + 24) = 20218LL;
      WdLogEvent5_WdError(v36);
      return 3221225473LL;
    }
  }
  else
  {
    v28 = WdLogNewEntry5_WdWarning(v24, v23);
    WdLogEvent5_WdWarning(v28);
    return 3221225495LL;
  }
}
