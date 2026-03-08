/*
 * XREFs of ?DestroyVaAllocator@CVirtualAddressAllocator@@QEAAXXZ @ 0x1C00A62CC
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C00881C0 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ??1VIDMM_PROCESS@@QEAA@XZ @ 0x1C00944F0 (--1VIDMM_PROCESS@@QEAA@XZ.c)
 *     ?InitializeProcessAdapterInfo@VIDMM_PROCESS@@IEAAPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAVVIDMM_GLOBAL@@@Z @ 0x1C00ABEB0 (-InitializeProcessAdapterInfo@VIDMM_PROCESS@@IEAAPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAVVIDMM_GLOBA.c)
 *     ?GetCpuVisibleBufferAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@XZ @ 0x1C00EF14C (-GetCpuVisibleBufferAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@XZ.c)
 *     ?DestroyPagingProcess@VIDMM_PAGING_PROCESS@@QEAAXXZ @ 0x1C00F20F8 (-DestroyPagingProcess@VIDMM_PAGING_PROCESS@@QEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001A30 (--3@YAXPEAX@Z.c)
 *     ??_GVIDMM_DEVICE@@QEAAPEAXI@Z @ 0x1C0011F9C (--_GVIDMM_DEVICE@@QEAAPEAXI@Z.c)
 *     McTemplateK0ppp_EtwWriteTransfer @ 0x1C002F600 (McTemplateK0ppp_EtwWriteTransfer.c)
 *     ?FreeVadAvl@@YAXPEAU_RTL_BALANCED_NODE@@PEAX@Z @ 0x1C0087920 (-FreeVadAvl@@YAXPEAU_RTL_BALANCED_NODE@@PEAX@Z.c)
 *     ?DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1C00A62A4 (-DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 */

void __fastcall CVirtualAddressAllocator::DestroyVaAllocator(CVirtualAddressAllocator *this, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  __int64 *v5; // rsi
  unsigned int i; // ebp
  struct VIDMM_ALLOC ***v7; // rdi
  struct _RTL_BALANCED_NODE *v8; // rcx
  struct _RTL_BALANCED_NODE *v9; // rdx
  struct _RTL_BALANCED_NODE *p_Right; // rax
  ULONG_PTR ParentValue; // rdi
  unsigned __int64 v12; // rdi
  struct _RTL_BALANCED_NODE *v13; // rcx
  struct _RTL_BALANCED_NODE *v14; // rdx
  struct _RTL_BALANCED_NODE *v15; // rax
  ULONG_PTR v16; // rdi
  unsigned __int64 v17; // rdi
  __int64 v18; // rax
  VIDMM_DEVICE *v19; // rcx

  v3 = *((_QWORD *)this + 12);
  if ( v3 )
  {
    v5 = (__int64 *)((char *)this + 88);
    if ( (byte_1C00769C2 & 0x20) != 0 )
      McTemplateK0ppp_EtwWriteTransfer(
        *v5,
        &DestroyGpuVirtualAddressAllocator,
        a3,
        this,
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 32) + 64LL) + 80LL),
        *(_QWORD *)(*v5 + 24));
    for ( i = 0; i < *(_DWORD *)(*v5 + 7016); ++i )
    {
      v7 = (struct VIDMM_ALLOC ***)(*((_QWORD *)this + 15) + 32LL * i);
      if ( v7 && *v7 )
      {
        VIDMM_PAGE_DIRECTORY::DestroyPageDirectory(*v7, this, 0LL);
        *v7 = 0LL;
      }
    }
  }
  v8 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)this + 5);
  if ( v8 )
  {
    while ( 1 )
    {
      v9 = v8->Children[0];
      if ( v8->Children[0] )
        break;
      p_Right = (struct _RTL_BALANCED_NODE *)&v8->Right;
      v9 = v8->Children[1];
      if ( v9 )
      {
LABEL_12:
        p_Right->Children[0] = 0LL;
        v8 = v9;
      }
      else
      {
        ParentValue = v8->ParentValue;
        FreeVadAvl(v8, 0LL);
        v12 = ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v12 )
          goto LABEL_16;
        v8 = (struct _RTL_BALANCED_NODE *)v12;
      }
    }
    p_Right = v8;
    goto LABEL_12;
  }
LABEL_16:
  *((_QWORD *)this + 5) = 0LL;
  v13 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)this + 6);
  if ( v13 )
  {
    while ( 1 )
    {
      v14 = v13->Children[0];
      if ( v13->Children[0] )
        break;
      v15 = (struct _RTL_BALANCED_NODE *)&v13->Right;
      v14 = v13->Children[1];
      if ( v14 )
      {
LABEL_19:
        v15->Children[0] = 0LL;
        v13 = v14;
      }
      else
      {
        v16 = v13->ParentValue;
        FreeVadAvl(v13, 0LL);
        v17 = v16 & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v17 )
          goto LABEL_23;
        v13 = (struct _RTL_BALANCED_NODE *)v17;
      }
    }
    v15 = v13;
    goto LABEL_19;
  }
LABEL_23:
  *((_QWORD *)this + 6) = 0LL;
  v18 = *((_QWORD *)this + 12);
  if ( v18 )
  {
    if ( (*(_DWORD *)(v18 + 96) & 2) == 0 )
    {
      v19 = (VIDMM_DEVICE *)*((_QWORD *)this + 13);
      if ( v19 )
        VIDMM_DEVICE::`scalar deleting destructor'(v19);
    }
  }
  operator delete(*((void **)this + 15));
  operator delete(this);
}
