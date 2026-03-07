__int64 __fastcall DXGSWAPCHAIN::ReleaseBuffer(
        DXGSWAPCHAIN *this,
        struct _D3DKMT_RELEASESWAPCHAIN *a2,
        void *a3,
        char a4,
        int a5)
{
  PRKEVENT v7; // r14
  BOOL bProducer; // ecx
  char *v9; // rbx
  PRKEVENT *v10; // rax
  PVOID *v11; // r12
  unsigned int v13; // r8d
  __int64 v14; // rdx
  __int64 pDeferredFreeList_low; // rcx
  __int64 v16; // r8
  struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *v17; // r14
  int *v18; // r15
  __int64 v19; // rsi
  const wchar_t *v20; // r9
  __int64 v21; // rdx
  __int64 v22; // r8
  PVOID v23; // rcx
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // r8
  struct _WORK_QUEUE_ITEM *v27; // rax
  struct _WORK_QUEUE_ITEM *v28; // r15
  unsigned int v29; // r8d
  __int64 v30; // rcx
  struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_SURF_INFO *v31; // r14
  struct AUTOEXPANDALLOCATION *v32; // rdx
  int v33; // eax
  int *v34; // r8
  int v35; // ecx
  size_t Size; // [rsp+20h] [rbp-91h]
  void *v37; // [rsp+28h] [rbp-89h]
  struct DXGSWAPCHAIN::SWAPCHAIN_METADATA_ETW_INFO *v38; // [rsp+30h] [rbp-81h]
  int v39; // [rsp+38h] [rbp-79h]
  __int64 v40; // [rsp+40h] [rbp-71h]
  struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *v42; // [rsp+80h] [rbp-31h] BYREF
  struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_SURF_INFO *v43; // [rsp+88h] [rbp-29h] BYREF
  PRKEVENT *v44; // [rsp+90h] [rbp-21h]
  void *v45; // [rsp+98h] [rbp-19h]
  BOOL v46; // [rsp+A0h] [rbp-11h] BYREF
  int v47; // [rsp+A4h] [rbp-Dh]
  __int128 v48; // [rsp+A8h] [rbp-9h]
  __int128 v49; // [rsp+B8h] [rbp+7h]

  v45 = a3;
  if ( *((struct _KTHREAD **)this + 3) != KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 2880LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_SwapChainLock.IsOwner()", 2880LL, 0LL, 0LL, 0LL, 0LL);
  }
  v7 = 0LL;
  if ( a2[1].hNtSwapChain )
  {
    WdLogSingleEntry1(1LL, 2887LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pRelease->pMetaData == nullptr", 2887LL, 0LL, 0LL, 0LL, 0LL);
  }
  bProducer = a2->bProducer;
  v9 = (char *)this + (bProducer ? 144LL : 96LL);
  if ( bProducer )
  {
    v10 = (PRKEVENT *)((char *)this + 128);
    v11 = (PVOID *)((char *)this + 112);
  }
  else
  {
    v10 = (PRKEVENT *)((char *)this + 176);
    v11 = (PVOID *)((char *)this + 160);
  }
  v44 = v10;
  if ( *((_DWORD *)this + 58) && !bProducer && LODWORD(a2->pDeferredFreeList) )
  {
    WdLogSingleEntry1(2LL, 2895LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Non-sequential swapchain client cannot provided metadata when releasing",
      2895LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225659LL;
  }
  v13 = *((_DWORD *)v9 + 10);
  if ( v13 == -1 )
  {
    WdLogSingleEntry2(2LL, *((_QWORD *)v9 + 2), this);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"ReleaseBuffer caller (0x%I64x) does not own the swapchain 0x%I64x",
      *((_QWORD *)v9 + 2),
      (__int64)this,
      0LL,
      0LL,
      0LL);
LABEL_49:
    LODWORD(v19) = -1073741811;
    goto LABEL_50;
  }
  v42 = 0LL;
  v43 = 0LL;
  DXGSWAPCHAIN::GetClientSurfaceInfo(this, (DXGSWAPCHAIN *)((char *)this + (bProducer ? 144LL : 96LL)), v13, &v42, &v43);
  v17 = v42;
  if ( *(_DWORD *)v42 != 1 || (v18 = (int *)(v9 + 28), *((_DWORD *)v42 + 1) != *((_DWORD *)v9 + 7)) )
  {
    WdLogSingleEntry2(2LL, *((_QWORD *)v9 + 2), this);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"ReleaseBuffer caller (0x%I64x) does not own the swapchain 0x%I64x",
      *((_QWORD *)v9 + 2),
      (__int64)this,
      0LL,
      0LL,
      0LL);
    v7 = 0LL;
    goto LABEL_49;
  }
  LODWORD(v19) = DXGSWAPCHAIN::InsertGPUSignal(
                   this,
                   (struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_INFO *)v9,
                   v42,
                   *((_DWORD *)this + 48),
                   a5);
  if ( (int)v19 >= 0 )
  {
    if ( *v18 == 1 )
    {
      if ( *((_DWORD *)this + 58) )
      {
        v21 = *((_QWORD *)v17 + 4);
        if ( v21 )
        {
          v22 = *((_QWORD *)v9 + 2);
          v23 = *v11;
          LOBYTE(v39) = 1;
          v42 = 0LL;
          v24 = ObDuplicateObject(v23, v21, v22, &v42, 0, 0, 6, v39);
          v19 = v24;
          if ( v24 < 0 )
          {
            WdLogSingleEntry2(2LL, *((_QWORD *)v17 + 4), v24);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Failed to duplicate Fence Nt handle 0x%I64x, error 0x%I64x",
              *((_QWORD *)v17 + 4),
              v19,
              0LL,
              0LL,
              0LL);
            DXGSWAPCHAIN::MarkAbandoned((struct _KTHREAD **)this, v25, v26);
            v7 = 0LL;
            goto LABEL_50;
          }
          a2->pMetaData = v42;
          *(_QWORD *)&a2->DeferredFreeListSize = *((_QWORD *)v17 + 5);
          v27 = (struct _WORK_QUEUE_ITEM *)operator new[](0x30uLL, 0x4B677844u, 64LL);
          v28 = v27;
          if ( !v27 )
          {
            WdLogSingleEntry1(2LL, *((_QWORD *)v17 + 4));
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Failed to allocate WorkItem to delayed close Nt Handle 0x%I64x",
              *((_QWORD *)v17 + 4),
              0LL,
              0LL,
              0LL,
              0LL);
            goto LABEL_19;
          }
          v27->List = 0LL;
          *(_OWORD *)&v27->WorkerRoutine = 0LL;
          v27[1].List = 0LL;
          LODWORD(v19) = ObReferenceObjectByPointer(*v11, 0x10000000u, (POBJECT_TYPE)PsProcessType, 0);
          if ( (int)v19 < 0 )
          {
            WdLogSingleEntry1(2LL, *v11);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Failed to increment refcount on Process 0x%I64x",
              (__int64)*v11,
              0LL,
              0LL,
              0LL,
              0LL);
            operator delete(v28);
            goto LABEL_19;
          }
          v28[1].List.Blink = (struct _LIST_ENTRY *)*((_QWORD *)v17 + 4);
          v28[1].List.Flink = (struct _LIST_ENTRY *)*v11;
          v28->WorkerRoutine = (PWORKER_THREAD_ROUTINE)DXGSWAPCHAIN::AsyncCloseNtHandle;
          v28->Parameter = v28;
          v28->List.Flink = 0LL;
          ExQueueWorkItem(v28, DelayedWorkQueue);
          *((_QWORD *)v17 + 4) = 0LL;
          v18 = (int *)(v9 + 28);
          *((_QWORD *)v17 + 5) = 0LL;
        }
      }
    }
    v29 = *((_DWORD *)v9 + 10);
    v43 = 0LL;
    v42 = 0LL;
    DXGSWAPCHAIN::GetOtherClientSurfaceInfo(this, (struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_INFO *)v9, v29, &v43, &v42);
    v30 = *((unsigned int *)this + 48);
    v31 = v43;
    *((_DWORD *)this + 48) = v30 + 1;
    *((_DWORD *)v42 + 1) = v30;
    *(_DWORD *)v31 = 2;
    *((_DWORD *)v31 + 1) = DXGSWAPCHAIN::SwitchClient(v30, *v18);
    pDeferredFreeList_low = LODWORD(a2->pDeferredFreeList);
    if ( (_DWORD)pDeferredFreeList_low )
    {
      v32 = (struct AUTOEXPANDALLOCATION *)*((_QWORD *)v31 + 2);
      v46 = a2->bProducer;
      LODWORD(Size) = pDeferredFreeList_low;
      v48 = 0LL;
      v47 = 0;
      v49 = 0LL;
      LODWORD(v19) = DXGSWAPCHAIN::SetMetaDataInternal(
                       this,
                       v32,
                       (int *)v31 + 6,
                       0,
                       Size,
                       v45,
                       (struct DXGSWAPCHAIN::SWAPCHAIN_METADATA_ETW_INFO *)&v46,
                       a4);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000000000LL) != 0 )
      {
        LODWORD(v40) = DWORD2(v48);
        LODWORD(v38) = v47;
        LODWORD(v37) = v46;
        LODWORD(Size) = v19;
        McTemplateK0pqddpqqqqqq_EtwWriteTransfer(
          pDeferredFreeList_low,
          v14,
          v16,
          this,
          Size,
          v37,
          v38,
          (_QWORD)v48,
          v40,
          HIDWORD(v48),
          (_DWORD)v49,
          DWORD1(v49),
          DWORD2(v49),
          HIDWORD(v49));
      }
      if ( (int)v19 < 0 )
      {
        WdLogSingleEntry2(2LL, *((_QWORD *)v9 + 2), this);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"ReleaseBuffer could not store the caller's (0x%I64x) metadata for swapchain (0x%I64x)",
          *((_QWORD *)v9 + 2),
          (__int64)this,
          0LL,
          0LL,
          0LL);
        goto LABEL_19;
      }
    }
    if ( !*((_DWORD *)v31 + 6) )
      AUTOEXPANDALLOCATION::GetBuffer(*((const void ***)v31 + 2), 0, 0);
    v33 = *((_DWORD *)this + 58);
    if ( *v18 )
    {
      if ( v33 )
      {
        LODWORD(v19) = DXGSWAPCHAIN::ConsumerCheckForSurfacesToFree((unsigned __int64)this, a2);
        if ( (int)v19 < 0 )
          goto LABEL_19;
      }
    }
    else
    {
      if ( !v33 )
      {
        v34 = (int *)*((_QWORD *)this + 28);
        v35 = *v34 + 1;
        if ( *v34 == v34[1] )
          v35 = 0;
        *v34 = v35;
      }
      LODWORD(v19) = DXGFIXEDQUEUE::Add(*((DXGFIXEDQUEUE **)this + 27), *((_DWORD *)v9 + 10));
      if ( (int)v19 < 0 )
      {
        WdLogSingleEntry1(2LL, this);
        v20 = L"Failed to add to surface to process queue, swapchain 0x%I64x";
        goto LABEL_18;
      }
    }
    *((_DWORD *)v9 + 10) = -1;
    v7 = *v44;
    if ( *v44 )
      KeSetEvent(*v44, 2, 0);
    goto LABEL_50;
  }
  WdLogSingleEntry1(2LL, this);
  v20 = L"Failed to insert GPU signal, swapchain 0x%I64x";
LABEL_18:
  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v20, (__int64)this, 0LL, 0LL, 0LL, 0LL);
LABEL_19:
  DXGSWAPCHAIN::MarkAbandoned((struct _KTHREAD **)this, v14, v16);
  v7 = 0LL;
LABEL_50:
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000000000LL) != 0 )
  {
    LODWORD(v38) = a2->pDeferredFreeList;
    LODWORD(v37) = a2->bProducer;
    LODWORD(Size) = v19;
    McTemplateK0pqdqp_EtwWriteTransfer(pDeferredFreeList_low, v14, v16, this, Size, v37, v38, v7);
  }
  return (unsigned int)v19;
}
