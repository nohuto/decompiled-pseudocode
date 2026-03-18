/*
 * XREFs of ?DestroyVaAllocator@CVirtualAddressAllocator@@QEAAXXZ @ 0x1C0087C8C
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C008ACF0 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?InitializeProcessAdapterInfo@VIDMM_PROCESS@@IEAAPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAVVIDMM_GLOBAL@@@Z @ 0x1C008F9EC (-InitializeProcessAdapterInfo@VIDMM_PROCESS@@IEAAPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAVVIDMM_GLOBA.c)
 *     ??1VIDMM_PROCESS@@QEAA@XZ @ 0x1C009C460 (--1VIDMM_PROCESS@@QEAA@XZ.c)
 *     ?GetCpuVisibleBufferAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@XZ @ 0x1C00EEDDC (-GetCpuVisibleBufferAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@XZ.c)
 *     ?DestroyPagingProcess@VIDMM_PAGING_PROCESS@@QEAAXXZ @ 0x1C00F1D88 (-DestroyPagingProcess@VIDMM_PAGING_PROCESS@@QEAAXXZ.c)
 * Callees:
 *     ??_GVIDMM_DEVICE@@QEAAPEAXI@Z @ 0x1C00024CC (--_GVIDMM_DEVICE@@QEAAPEAXI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C0005500 (--3@YAXPEAX@Z.c)
 *     McTemplateK0ppp_EtwWriteTransfer @ 0x1C002F4D0 (McTemplateK0ppp_EtwWriteTransfer.c)
 *     ?DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1C0087C64 (-DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 *     ?FreeVadAvl@@YAXPEAU_RTL_BALANCED_NODE@@PEAX@Z @ 0x1C00894EC (-FreeVadAvl@@YAXPEAU_RTL_BALANCED_NODE@@PEAX@Z.c)
 */

void __fastcall CVirtualAddressAllocator::DestroyVaAllocator(
        CVirtualAddressAllocator *this,
        __int64 a2,
        __int64 a3,
        unsigned __int8 a4)
{
  __int64 v4; // rdx
  __int64 *v6; // rsi
  unsigned int i; // ebp
  VIDMM_PAGE_DIRECTORY **v8; // rdi
  struct _RTL_BALANCED_NODE *v9; // rcx
  struct _RTL_BALANCED_NODE *v10; // rdx
  struct _RTL_BALANCED_NODE *p_Right; // rax
  ULONG_PTR ParentValue; // rdi
  unsigned __int64 v13; // rdi
  struct _RTL_BALANCED_NODE *v14; // rcx
  struct _RTL_BALANCED_NODE *v15; // rdx
  struct _RTL_BALANCED_NODE *v16; // rax
  ULONG_PTR v17; // rdi
  unsigned __int64 v18; // rdi
  __int64 v19; // rax
  VIDMM_DEVICE *v20; // rcx

  v4 = *((_QWORD *)this + 12);
  if ( v4 )
  {
    v6 = (__int64 *)((char *)this + 88);
    if ( (byte_1C0076982 & 0x20) != 0 )
      McTemplateK0ppp_EtwWriteTransfer(
        *v6,
        &DestroyGpuVirtualAddressAllocator,
        a3,
        this,
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 32) + 64LL) + 80LL),
        *(_QWORD *)(*v6 + 24));
    for ( i = 0; i < *(_DWORD *)(*v6 + 7016); ++i )
    {
      v8 = (VIDMM_PAGE_DIRECTORY **)(*((_QWORD *)this + 15) + 32LL * i);
      if ( v8 && *v8 )
      {
        VIDMM_PAGE_DIRECTORY::DestroyPageDirectory(*v8, this, 0LL, a4);
        *v8 = 0LL;
      }
    }
  }
  v9 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)this + 5);
  if ( v9 )
  {
    while ( 1 )
    {
      v10 = v9->Children[0];
      if ( v9->Children[0] )
        break;
      p_Right = (struct _RTL_BALANCED_NODE *)&v9->Right;
      v10 = v9->Children[1];
      if ( v10 )
      {
LABEL_12:
        p_Right->Children[0] = 0LL;
        v9 = v10;
      }
      else
      {
        ParentValue = v9->ParentValue;
        FreeVadAvl(v9, 0LL);
        v13 = ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v13 )
          goto LABEL_16;
        v9 = (struct _RTL_BALANCED_NODE *)v13;
      }
    }
    p_Right = v9;
    goto LABEL_12;
  }
LABEL_16:
  *((_QWORD *)this + 5) = 0LL;
  v14 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)this + 6);
  if ( v14 )
  {
    while ( 1 )
    {
      v15 = v14->Children[0];
      if ( v14->Children[0] )
        break;
      v16 = (struct _RTL_BALANCED_NODE *)&v14->Right;
      v15 = v14->Children[1];
      if ( v15 )
      {
LABEL_19:
        v16->Children[0] = 0LL;
        v14 = v15;
      }
      else
      {
        v17 = v14->ParentValue;
        FreeVadAvl(v14, 0LL);
        v18 = v17 & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v18 )
          goto LABEL_23;
        v14 = (struct _RTL_BALANCED_NODE *)v18;
      }
    }
    v16 = v14;
    goto LABEL_19;
  }
LABEL_23:
  *((_QWORD *)this + 6) = 0LL;
  v19 = *((_QWORD *)this + 12);
  if ( v19 )
  {
    if ( (*(_DWORD *)(v19 + 96) & 2) == 0 )
    {
      v20 = (VIDMM_DEVICE *)*((_QWORD *)this + 13);
      if ( v20 )
        VIDMM_DEVICE::`scalar deleting destructor'(v20);
    }
  }
  operator delete(*((void **)this + 15));
  operator delete(this);
}
