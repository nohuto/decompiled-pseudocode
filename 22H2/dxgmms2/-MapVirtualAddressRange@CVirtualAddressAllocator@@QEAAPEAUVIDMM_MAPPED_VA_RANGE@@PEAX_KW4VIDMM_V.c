/*
 * XREFs of ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@_N@Z @ 0x1C005EDB4
 * Callers:
 *     ?CreateSchLog@VIDMM_SCH_LOG@@SAJPEAVVIDMM_GLOBAL@@I_KPEAPEAV1@PEAPEAXPEA_K@Z @ 0x1C003E604 (-CreateSchLog@VIDMM_SCH_LOG@@SAJPEAVVIDMM_GLOBAL@@I_KPEAPEAV1@PEAPEAXPEA_K@Z.c)
 *     ?MapScratchAreaVaRange@VIDMM_PAGING_PROCESS@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@I_KPEAU_VIDMM_GLOBAL_ALLOC@@0I0PEAU_MDL@@PEAE0@Z @ 0x1C0063EDC (-MapScratchAreaVaRange@VIDMM_PAGING_PROCESS@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@I_KPEAU_VIDMM_GLOBAL.c)
 *     ?VidMmMapGpuVirtualAddressInternal@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEAUD3DDDI_MAPGPUVIRTUALADDRESS@@E@Z @ 0x1C0072A6C (-VidMmMapGpuVirtualAddressInternal@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_A.c)
 *     ?MapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEA_KI_N@Z @ 0x1C0083994 (-MapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@.c)
 *     ?CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@@PEAVDXGCONTEXT@@PEAX_KKKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_SEGMENTBANKPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAPEAU_VIDMM_CONTEXT_ALLOC@@@Z @ 0x1C008A578 (-CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@.c)
 *     ?AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z @ 0x1C008B81C (-AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z.c)
 *     ?InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x1C00967D0 (-InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z.c)
 *     ?VidMmUpdateContextAllocationCb@VIDMM_GLOBAL@@QEAAJPEBU_DXGKARGCB_UPDATECONTEXTALLOCATION@@E@Z @ 0x1C00B54E0 (-VidMmUpdateContextAllocationCb@VIDMM_GLOBAL@@QEAAJPEBU_DXGKARGCB_UPDATECONTEXTALLOCATION@@E@Z.c)
 *     ?MapPageTablesToVaSpace@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1C00BC2A0 (-MapPageTablesToVaSpace@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001668 (--3@YAXPEAX@Z.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0001B20 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0001D2C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0001FC0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?AllocateVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAU_RTL_AVL_TREE@@_K111IPEAPEAUVIDMM_VAD@@E@Z @ 0x1C00680E8 (-AllocateVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAU_RTL_AVL_TREE@@_K111IPEAPEAUVIDM.c)
 *     ?FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z @ 0x1C006863C (-FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z.c)
 *     ?MapVadVaRange@CVirtualAddressAllocator@@AEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAUVIDMM_VAD@@IW4VIDMM_VAD_OWNER_TYPE@@PEAX_KU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@333@Z @ 0x1C0076264 (-MapVadVaRange@CVirtualAddressAllocator@@AEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAUVIDMM_VAD@@IW4VIDMM_.c)
 *     ?InsertVadToReservedListForNewVaRange@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@U_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@@Z @ 0x1C0079D2C (-InsertVadToReservedListForNewVaRange@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@U_D3DDDIGPUV.c)
 *     ?CompareVadAddressInsideAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1C0088B08 (-CompareVadAddressInsideAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 */

__int64 __fastcall CVirtualAddressAllocator::MapVirtualAddressRange(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        unsigned __int64 a7,
        unsigned __int64 a8,
        unsigned int a9,
        _D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE a10,
        __int64 a11,
        unsigned int a12,
        void **a13,
        char a14)
{
  struct _RTL_AVL_TREE *v15; // rdx
  unsigned __int64 v16; // r12
  __int64 v17; // rdi
  struct _D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE::$1733E72EC9282FC5874A304A0CB4AC6C::$B8A99364A42B8948C2A577AA69BF28DA v18; // rbx
  __int64 v19; // r15
  struct VIDMM_VAD *v20; // rsi
  unsigned __int64 v21; // r14
  int v22; // eax
  __int64 v23; // r8
  __int64 v24; // rcx
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rdx
  __int64 v28; // rax
  _QWORD *v29; // rax
  int v30; // eax
  void **v31; // r14
  PVOID v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rax
  char *v39; // rsi
  char **v40; // rdx
  char *v41; // rax
  struct VIDMM_VAD *v43; // [rsp+50h] [rbp-28h] BYREF
  _BYTE v44[32]; // [rsp+58h] [rbp-20h] BYREF
  char v45; // [rsp+C0h] [rbp+48h]

  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
    (DXGAUTOPUSHLOCKEXCLUSIVE *)v44,
    (struct DXGPUSHLOCK *const)(a1 + 7));
  v16 = a6;
  v17 = 0LL;
  v18 = a10.0;
  v19 = 0LL;
  v43 = 0LL;
  v45 = 0;
  if ( !a6 )
    goto LABEL_15;
  v20 = (struct VIDMM_VAD *)a1[6];
  v21 = a6 + a5;
  if ( !v20 )
    goto LABEL_15;
  do
  {
    v22 = CompareVadAddressInsideAvl(&a6, (struct _RTL_BALANCED_NODE *)v20);
    if ( v22 >= 0 )
    {
      if ( v22 <= 0 )
        break;
      v20 = (struct VIDMM_VAD *)*((_QWORD *)v20 + 1);
    }
    else
    {
      v20 = *(struct VIDMM_VAD **)v20;
    }
  }
  while ( v20 );
  if ( v20 )
  {
    v24 = *((_QWORD *)v20 + 4);
    v25 = *((unsigned int *)v20 + 18);
    v26 = v24 - 4096;
    if ( (v25 & 0x1000) == 0 )
      v26 = *((_QWORD *)v20 + 4);
    if ( v26 < v21 )
    {
      v29 = (_QWORD *)WdLogNewEntry5_WdWarning(v24, v25);
      v29[3] = a6;
      v29[4] = v21;
      v29[5] = v20;
      WdLogEvent5_WdWarning(v29);
      goto LABEL_39;
    }
    v27 = v25 >> 7;
    LOBYTE(v27) = *(_BYTE *)&v18 ^ v27;
    v43 = v20;
    if ( (v27 & 0x10) != 0 )
    {
      v28 = WdLogNewEntry5_WdAssertion(v24, v27, v23);
      *(_QWORD *)(v28 + 24) = 1334LL;
      WdLogEvent5_WdAssertion(v28);
      goto LABEL_39;
    }
  }
  else
  {
LABEL_15:
    v30 = CVirtualAddressAllocator::AllocateVirtualAddressRange(
            (CVirtualAddressAllocator *)a1,
            v15,
            a5,
            v16,
            a7,
            a8,
            a9,
            &v43,
            1u);
    v20 = v43;
    if ( v30 >= 0 )
    {
      v45 = 1;
      CVirtualAddressAllocator::InsertVadToReservedListForNewVaRange(
        (CVirtualAddressAllocator *)a1,
        v43,
        (struct _D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE)v18);
    }
  }
  if ( !v20 )
    goto LABEL_38;
  v31 = a13;
  if ( a13 )
  {
    v32 = operator new[](0x18uLL, 0x39346956u, PagedPool);
    *v31 = v32;
    if ( !v32 )
      goto LABEL_28;
  }
  if ( (*((_BYTE *)v20 + 72) & 0xF) != 3 || (*(_BYTE *)&v18 & 8) == 0 && (*(_BYTE *)&v18 & 4) == 0 )
  {
    if ( v45 )
      v16 = *((_QWORD *)v20 + 3);
    v34 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))CVirtualAddressAllocator::MapVadVaRange)(
            a1,
            v20,
            a12,
            a4,
            a2,
            a3,
            v18,
            a11,
            v16,
            a5);
    v19 = v34;
    if ( !v34 )
    {
      v38 = WdLogNewEntry5_WdAssertion(v36, v35, v37);
      *(_QWORD *)(v38 + 24) = 1377LL;
      WdLogEvent5_WdAssertion(v38);
      goto LABEL_28;
    }
    if ( v31 )
    {
      v39 = (char *)v20 + 80;
      *((_QWORD *)*v31 + 2) = v34;
      v40 = (char **)*((_QWORD *)v39 + 1);
      v41 = (char *)*v31;
      if ( *v40 != v39 )
        __fastfail(3u);
      *(_QWORD *)v41 = v39;
      *((_QWORD *)v41 + 1) = v40;
      *v40 = v41;
      *((_QWORD *)v39 + 1) = v41;
    }
    if ( a14 )
      _InterlockedIncrement((volatile signed __int32 *)(v19 + 128));
LABEL_38:
    v17 = v19;
    goto LABEL_39;
  }
  v33 = WdLogNewEntry5_WdWarning(v24, v27);
  WdLogEvent5_WdWarning(v33);
LABEL_28:
  if ( v45 )
    CVirtualAddressAllocator::FreeVadVirtualAddressRangeInternal((CVirtualAddressAllocator *)a1, v20);
  if ( v31 )
  {
    operator delete(*v31);
    *v31 = 0LL;
  }
LABEL_39:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v44);
  return v17;
}
