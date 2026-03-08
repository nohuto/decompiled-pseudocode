/*
 * XREFs of ?CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@@PEAVDXGCONTEXT@@PEAX_KKKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_SEGMENTBANKPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAPEAU_VIDMM_CONTEXT_ALLOC@@@Z @ 0x1C00B2D08
 * Callers:
 *     ?VidMmCreateContextAllocation@@YAJPEAVVIDMM_GLOBAL@@IU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@PEAVDXGDEVICE@@PEAVDXGCONTEXT@@PEAX_KKKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_SEGMENTBANKPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAPEAU_VIDMM_CONTEXT_ALLOC@@@Z @ 0x1C0017150 (-VidMmCreateContextAllocation@@YAJPEAVVIDMM_GLOBAL@@IU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@PEAVDX.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C00199EC (DxgkLogInternalTriageEvent.c)
 *     memset @ 0x1C001AC80 (memset.c)
 *     ?QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_NPEA_K@Z @ 0x1C008EBA0 (-QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_N.c)
 *     ?DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C0094640 (-DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALLOCATION@@PEAPEAUVIDMM_ALLOC@@PEAE@Z @ 0x1C009DFB0 (-OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALL.c)
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@_N@Z @ 0x1C009EC00 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 *     ?CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@U_DXGK_ALLOCATIONINFOFLAGS2@@PEAVDXGADAPTERALLOCATION@@PEAX6KE6PEAVVIDMM_PAGE_TABLE_BASE@@PEAPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C009F370 (-CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_D.c)
 *     ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1C00A25B0 (-CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_D.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1C00AB510 (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 *     VidSchInsertContextAllocation @ 0x1C00B2F20 (VidSchInsertContextAllocation.c)
 *     VidSchRemoveContextAllocation @ 0x1C00B3B54 (VidSchRemoveContextAllocation.c)
 */

__int64 __fastcall VIDMM_GLOBAL::CreateContextAllocation(
        VIDMM_GLOBAL *this,
        struct _DXGK_CREATECONTEXTALLOCATIONFLAGS a2,
        unsigned int a3,
        struct DXGDEVICE *a4,
        struct DXGCONTEXT *a5,
        void *a6,
        unsigned __int64 a7,
        unsigned int a8,
        unsigned int a9,
        unsigned int a10,
        struct _D3DDDI_SEGMENTPREFERENCE a11,
        struct _DXGK_SEGMENTBANKPREFERENCE a12,
        struct _DXGK_ALLOCATIONINFOFLAGS a13,
        struct _VIDMM_CONTEXT_ALLOC **a14)
{
  int v14; // r13d
  unsigned int v15; // r10d
  void *v18; // r14
  struct VIDMM_DEVICE *v19; // r15
  int v20; // r14d
  unsigned __int8 v21; // r8
  int OneAllocation; // esi
  __int64 v24; // rcx
  char v25; // dl
  bool v26; // zf
  int v27; // ecx
  __int64 v28; // rcx
  struct _KTHREAD **VirtualAddressAllocator; // rax
  unsigned int v30; // r8d
  __int64 v31; // r10
  __int64 v32; // rcx
  __int64 v33; // rcx
  struct VIDMM_ALLOC *v34; // [rsp+A0h] [rbp-80h] BYREF
  struct _VIDMM_GLOBAL_ALLOC *v35; // [rsp+A8h] [rbp-78h] BYREF
  _QWORD v36[18]; // [rsp+B0h] [rbp-70h] BYREF
  unsigned int v37; // [rsp+160h] [rbp+40h]
  void *v38; // [rsp+168h] [rbp+48h] BYREF

  v37 = a3;
  v14 = (int)a4;
  v35 = 0LL;
  v15 = a3;
  v34 = 0LL;
  v38 = 0LL;
  v18 = 0LL;
  if ( !a4 )
  {
    v19 = 0LL;
    goto LABEL_32;
  }
  v19 = (struct VIDMM_DEVICE *)*((_QWORD *)a4 + 99);
  if ( (*(_DWORD *)(*((_QWORD *)a4 + 5) + 424LL) & 2) != 0 )
  {
LABEL_32:
    WdLogSingleEntry1(1LL, 2215LL);
    DxgkLogInternalTriageEvent(v33, 0x40000LL);
    OneAllocation = -1073741811;
LABEL_33:
    if ( v18 )
      VidSchRemoveContextAllocation(v18);
    goto LABEL_16;
  }
  v20 = (int)a5;
  v21 = *(_BYTE *)&a2.0 & 1;
  if ( (*(_BYTE *)&a2.0 & 1) != 0 )
  {
    if ( !a5 )
      goto LABEL_5;
    WdLogSingleEntry1(1LL, 2229LL);
LABEL_15:
    DxgkLogInternalTriageEvent(v24, 0x40000LL);
    OneAllocation = -1073741811;
    goto LABEL_16;
  }
  if ( !a5 )
  {
    WdLogSingleEntry1(1LL, 2222LL);
    goto LABEL_15;
  }
  v25 = -1;
  v26 = !_BitScanForward((unsigned int *)&v27, *((_DWORD *)a5 + 99));
  a4 = a5;
  a12.0 = 0;
  if ( !v26 )
    v25 = v27;
  v15 = v25;
  v37 = v25;
LABEL_5:
  OneAllocation = VIDMM_GLOBAL::CreateOneAllocation(
                    (__int64)this,
                    v19,
                    v15,
                    a7,
                    a7,
                    a8,
                    a9,
                    a10,
                    a11.Value,
                    (struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0::$5068715F5D8591D41DA1228877FDA04B::$63766B29C143116E9EC685C38896947D)a13.0,
                    0,
                    0LL,
                    0LL,
                    (__int64)a6,
                    -1610612736,
                    v21,
                    (__int64)a4,
                    0LL,
                    0LL,
                    (__int64 *)&v35);
  if ( OneAllocation >= 0 )
  {
    *(_BYTE *)&a12.0 = 0;
    OneAllocation = VIDMM_GLOBAL::OpenOneAllocation(this, v19, v35, 0LL, 0, 0LL, &v34, (unsigned __int8 *)&a12);
    if ( OneAllocation >= 0 )
    {
      OneAllocation = VidSchInsertContextAllocation(
                        *(_QWORD *)(*((_QWORD *)this + 2) + 744LL),
                        v14,
                        v20,
                        (_DWORD)v34,
                        (__int64)&v38);
      if ( OneAllocation < 0 )
      {
        v18 = v38;
        WdLogSingleEntry1(1LL, v38);
      }
      else
      {
        if ( (*(_BYTE *)&a2.0 & 2) != 0 )
        {
          VirtualAddressAllocator = (struct _KTHREAD **)VIDMM_PROCESS::GetVirtualAddressAllocator(
                                                          *(VIDMM_PROCESS **)(*(_QWORD *)v34 + 8LL),
                                                          *(_DWORD *)(*((_QWORD *)this + 3) + 240LL),
                                                          v37);
          if ( !CVirtualAddressAllocator::MapVirtualAddressRange(
                  VirtualAddressAllocator,
                  v31,
                  0LL,
                  1,
                  *((_QWORD *)v35 + 2),
                  0LL,
                  0LL,
                  0LL,
                  *((_DWORD *)v35 + 8),
                  17LL,
                  0LL,
                  v30,
                  0LL,
                  0) )
          {
            v18 = v38;
            WdLogSingleEntry2(1LL, v38, 2328LL);
            DxgkLogInternalTriageEvent(v32, 0x40000LL);
            OneAllocation = -1073741801;
            goto LABEL_33;
          }
        }
        memset(v36, 0, 0x58uLL);
        v36[2] = v34;
        LODWORD(v36[0]) = 209;
        LODWORD(v36[4]) = a2;
        OneAllocation = VIDMM_GLOBAL::QueueDeferredCommand(
                          this,
                          (struct VIDMM_PAGING_QUEUE *)(*(_QWORD *)(*((_QWORD *)v34 + 1) + 80LL)
                                                      + 176LL * (*((_DWORD *)v35 + 17) & 0x3F)),
                          (struct _VIDMM_DEFERRED_COMMAND *)v36,
                          1,
                          0LL);
        if ( OneAllocation >= 0 )
        {
          *a14 = (struct _VIDMM_CONTEXT_ALLOC *)v38;
          return (unsigned int)OneAllocation;
        }
        if ( OneAllocation == -1071775232 )
        {
          v18 = v38;
          WdLogSingleEntry2(3LL, v38, 2344LL);
          goto LABEL_33;
        }
        v18 = v38;
        WdLogSingleEntry2(1LL, v38, 2348LL);
      }
      DxgkLogInternalTriageEvent(v28, 0x40000LL);
      goto LABEL_33;
    }
  }
LABEL_16:
  if ( v34 )
    VIDMM_GLOBAL::CloseOneAllocation(
      this,
      (struct _KEVENT *)v34,
      0LL,
      0,
      (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)1,
      0LL);
  if ( v35 )
    VIDMM_GLOBAL::DestroyOneAllocation((struct _KTHREAD **)this, v19, v35, 1);
  *a14 = 0LL;
  return (unsigned int)OneAllocation;
}
