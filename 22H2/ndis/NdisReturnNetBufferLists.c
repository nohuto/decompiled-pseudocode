/*
 * XREFs of NdisReturnNetBufferLists @ 0x1C00044C0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisCallReceiveCompleteHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C0008090 (-ndisCallReceiveCompleteHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     WPP_RECORDER_SF_q @ 0x1C000DE40 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qd @ 0x1C001D228 (WPP_RECORDER_SF_qd.c)
 *     ?ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z @ 0x1C003F4B0 (-ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0040820 (_guard_dispatch_icall_nop.c)
 *     ?ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x1C0069ECC (-ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z.c)
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C00748F0 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 *     ?ndisNblVerifyRxCompletion@@YAXPEBU_NET_BUFFER_LIST@@KPEBU_NDIS_OBJECT_HEADER@@@Z @ 0x1C0075278 (-ndisNblVerifyRxCompletion@@YAXPEBU_NET_BUFFER_LIST@@KPEBU_NDIS_OBJECT_HEADER@@@Z.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C008FC4C (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C008FDE4 (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 *     ?ndisReturnPeriodicReceives@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU1@@Z @ 0x1C00A4858 (-ndisReturnPeriodicReceives@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU1@@Z.c)
 *     ?ndisMarkNetBufferListCorrelationIdsAsUsed@@YAXPEAU_NET_BUFFER_LIST@@@Z @ 0x1C00AEB3C (-ndisMarkNetBufferListCorrelationIdsAsUsed@@YAXPEAU_NET_BUFFER_LIST@@@Z.c)
 */

void __stdcall NdisReturnNetBufferLists(
        NDIS_HANDLE NdisBindingHandle,
        PNET_BUFFER_LIST NetBufferLists,
        ULONG ReturnFlags)
{
  struct _NDIS_MINIPORT_BLOCK *v3; // rsi
  KIRQL v4; // r11
  PNET_BUFFER_LIST v6; // r14
  int PcwDatapathEventMask; // eax
  $B736E2A58696D72C4F1E471023AC4CFD *v8; // rbx
  int v10; // edi
  int v11; // eax
  PNET_BUFFER_LIST i; // rax
  __int64 CurrentIrql; // rax
  _NDIS_OBJECT_HEADER *ReturnNetBufferListsObject; // rdi
  void (*ReturnNetBufferListsHandler)(void); // r15
  void *ReturnNetBufferListsContext; // r12
  unsigned int Number; // r9d
  _SLIST_HEADER *Alignment; // rax
  unsigned int v19; // r8d
  struct NDIS_NBL_TRACKER_HANDLE__ *v20; // r11
  NDIS_NBL_TRACKER_HANDLE__ *ReturnNetBufferListsTracker; // rbx
  char v22; // di
  __int64 v23; // r15
  __int64 v24; // r9
  unsigned __int64 v25; // rbx
  char *v26; // r8
  _SLIST_HEADER *v27; // r12
  unsigned __int64 Region; // rdi
  int *v29; // r10
  char *v30; // rcx
  _QWORD *v31; // rcx
  char v32; // r10
  unsigned __int64 v33; // r8
  unsigned __int64 v34; // rdi
  __int64 v35; // r8
  unsigned __int64 v36; // r15
  unsigned __int64 v37; // rdx
  unsigned __int64 v38; // rbx
  __int64 v39; // rdx
  _QWORD *v40; // rcx
  struct _NET_BUFFER_LIST **v41; // rsi
  bool v42; // zf
  _NDIS_OBJECT_HEADER *v43; // r13
  __int64 v44; // r14
  char v45; // al
  struct _NET_BUFFER_LIST *v46; // r9
  struct _NET_BUFFER_LIST *Scratch; // rbx
  struct _NET_BUFFER_LIST *v48; // rbx
  KIRQL v49; // r11
  unsigned int ChildRefCount; // [rsp+30h] [rbp-99h]
  unsigned int v51; // [rsp+30h] [rbp-99h]
  ULONG v52; // [rsp+40h] [rbp-89h]
  unsigned int v53; // [rsp+40h] [rbp-89h]
  wchar_t *Buffer; // [rsp+48h] [rbp-81h] BYREF
  __int64 v55; // [rsp+50h] [rbp-79h]
  int v56; // [rsp+58h] [rbp-71h]
  char *v57; // [rsp+60h] [rbp-69h]
  __int64 v58; // [rsp+68h] [rbp-61h]
  struct NDIS_NBL_TRACKER_HANDLE__ *v59; // [rsp+70h] [rbp-59h]
  wchar_t *v60; // [rsp+78h] [rbp-51h] BYREF
  __int64 v61; // [rsp+80h] [rbp-49h]
  int v62; // [rsp+88h] [rbp-41h]
  __int64 v63; // [rsp+90h] [rbp-39h]
  struct _NDIS_MINIPORT_BLOCK *v64; // [rsp+98h] [rbp-31h]
  _QWORD Parameter[5]; // [rsp+A0h] [rbp-29h] BYREF
  int v66; // [rsp+C8h] [rbp-1h]
  __int64 v67; // [rsp+CCh] [rbp+3h]
  ULONG v68; // [rsp+D4h] [rbp+Bh]
  _QWORD v69[9]; // [rsp+D8h] [rbp+Fh] BYREF
  char v70; // [rsp+138h] [rbp+6Fh]
  char v71; // [rsp+138h] [rbp+6Fh]
  KIRQL v72; // [rsp+148h] [rbp+7Fh]

  v3 = (struct _NDIS_MINIPORT_BLOCK *)*((_QWORD *)NdisBindingHandle + 2);
  v4 = 2;
  v64 = v3;
  v6 = NetBufferLists;
  Buffer = 0LL;
  PcwDatapathEventMask = v3->PcwDatapathEventMask;
  v8 = &v3->80;
  v55 = 0LL;
  v56 = -1;
  if ( PcwDatapathEventMask || v8->PcwDatapathCycleMask )
  {
    LODWORD(v55) = PcwDatapathEventMask;
    HIDWORD(v55) = v8->PcwDatapathCycleMask;
    Buffer = v3->Reserved4.Buffer;
    if ( !Buffer )
      Buffer = v3->Reserved4.Buffer;
  }
  if ( (*((_DWORD *)NdisBindingHandle + 56) & 1) != 0 )
  {
    ndisNblVerifyRxCompletion((ULONG_PTR)NetBufferLists, ReturnFlags, (ULONG_PTR)NdisBindingHandle);
    v4 = 2;
  }
  v10 = v55;
  if ( (v55 & 0x180028) != 0 || (v55 & 0x1000000000LL) != 0 )
  {
    if ( (ReturnFlags & 1) == 0 )
      v4 = KfRaiseIrql(2u);
    if ( (v55 & 8) != 0 )
    {
      Number = KeGetPcr()->Prcb.Number;
      v10 = v55;
      NetBufferLists = (PNET_BUFFER_LIST)(Number * ndisPcwPerCpuDataStride);
      v56 = Number;
      ++*(_QWORD *)((char *)Buffer + (_QWORD)NetBufferLists + ndisPcwOffsetToPerCpuData + 24);
    }
    else
    {
      Number = v56;
    }
    if ( !v4 && (v10 & 0x80000) != 0 )
    {
      if ( Number == -1 )
      {
        Number = KeGetPcr()->Prcb.Number;
        v10 = v55;
        v56 = Number;
      }
      NetBufferLists = (PNET_BUFFER_LIST)ndisPcwOffsetToPerCpuData;
      ++*(_QWORD *)((char *)Buffer + Number * ndisPcwPerCpuDataStride + ndisPcwOffsetToPerCpuData + 216);
    }
    if ( (v10 & 0x100020) != 0 )
    {
      Alignment = (_SLIST_HEADER *)v6;
      v19 = 0;
      if ( v6 )
      {
        do
        {
          Alignment = (_SLIST_HEADER *)Alignment->Alignment;
          ++v19;
        }
        while ( Alignment );
      }
      if ( (v10 & 0x20) != 0 )
      {
        if ( Number == -1 )
        {
          Number = KeGetPcr()->Prcb.Number;
          v10 = v55;
          v56 = Number;
        }
        NetBufferLists = (PNET_BUFFER_LIST)ndisPcwOffsetToPerCpuData;
        *(_QWORD *)((char *)Buffer + Number * ndisPcwPerCpuDataStride + ndisPcwOffsetToPerCpuData + 40) += v19;
      }
      if ( !v4 && (v10 & 0x100000) != 0 )
      {
        if ( Number == -1 )
        {
          Number = KeGetPcr()->Prcb.Number;
          v56 = Number;
        }
        NetBufferLists = (PNET_BUFFER_LIST)ndisPcwOffsetToPerCpuData;
        *(_QWORD *)((char *)Buffer + Number * ndisPcwPerCpuDataStride + ndisPcwOffsetToPerCpuData + 224) += v19;
      }
    }
    if ( (v55 & 0x1000000000LL) != 0 )
    {
      ndisPcwStartCycleCounter((struct NDIS_PCW_CONTEXT *)&Buffer, 4u);
    }
    else if ( v4 != 2 )
    {
      KeLowerIrql(v4);
    }
  }
  v11 = v3->PcwDatapathEventMask;
  v72 = 2;
  v60 = 0LL;
  v61 = 0LL;
  v62 = -1;
  if ( v11 || v8->PcwDatapathCycleMask )
  {
    LODWORD(v61) = v11;
    HIDWORD(v61) = v8->PcwDatapathCycleMask;
    v60 = v3->Reserved4.Buffer;
    if ( !v60 )
      v60 = v3->Reserved4.Buffer;
  }
  for ( i = v6; i; i = (PNET_BUFFER_LIST)i->Link.Alignment )
    i->Flags = i->Flags & 0xFFFFFFF4 | 8;
  if ( Microsoft_Windows_Networking_CorrelationEnabled || byte_1C00E4FD0 )
    ndisMarkNetBufferListCorrelationIdsAsUsed(v6);
  if ( v3->PeriodicReceiveQueue.NblsAllocated )
    v6 = ndisReturnPeriodicReceives(v3, v6);
  if ( !v6 )
    goto LABEL_21;
  CurrentIrql = *(unsigned int *)ndisNblTrackerMode;
  if ( !*(_DWORD *)ndisNblTrackerMode )
    goto LABEL_17;
  v20 = (struct NDIS_NBL_TRACKER_HANDLE__ *)*((_QWORD *)NdisBindingHandle + 73);
  ReturnNetBufferListsTracker = v3->Next.ReturnNetBufferListsTracker;
  v22 = ndisNblTrackerEpoch;
  v52 = ReturnFlags & 1;
  v23 = 0LL;
  v59 = v20;
  v24 = 0LL;
  v63 = 0LL;
  v58 = 0LL;
  v70 = 0;
  if ( *(int *)ndisNblTrackerMode >= 3 )
  {
    ndisNblTrackerRecordEventInternal(v6, v20, 0x87u, ReturnNetBufferListsTracker, ReturnFlags & 1);
    v20 = v59;
    v24 = 0LL;
  }
  v25 = (unsigned __int64)ReturnNetBufferListsTracker & 0xFFFFFFFFFFFFFFFDuLL;
  if ( (v25 & 1) != 0 )
  {
    v26 = *(char **)((v25 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
    CurrentIrql = 2LL * (v22 & 1);
    v25 |= CurrentIrql;
  }
  else
  {
    v26 = (char *)v25;
  }
  v57 = v26;
  v27 = (_SLIST_HEADER *)v6;
  do
  {
    Region = v27[22].Region;
    v29 = &WPP_RECORDER_INITIALIZED;
    while ( v27[22].Region == Region )
    {
      if ( !Region && !v27[7].Region )
        v27[7].Region = ndisSourceHandleFromOwner(
                          (unsigned __int64)v20 & 0xFFFFFFFFFFFFFFFDuLL,
                          NetBufferLists,
                          v26,
                          v24);
      if ( (Region & 4) != 0 )
        goto LABEL_107;
      v30 = (char *)v27[7].Region;
      if ( v30 )
      {
        NetBufferLists = (PNET_BUFFER_LIST)(unsigned __int8)*v30;
        if ( (unsigned __int8)((_BYTE)NetBufferLists - 17) <= 1u || (_BYTE)NetBufferLists == 5 )
        {
          if ( v30 != v26 || v27[1].Region )
          {
            ++v23;
            CurrentIrql = v25;
          }
          else
          {
            ++v24;
            CurrentIrql = 24LL;
            v58 = v24;
            ++v23;
          }
          goto LABEL_56;
        }
        if ( *(int **)&WPP_RECORDER_INITIALIZED != v29 )
        {
          LOBYTE(NetBufferLists) = 3;
          WPP_RECORDER_SF_qd(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            (int)NetBufferLists,
            27,
            12,
            (struct _GUID *)&WPP_5e110f494fc33fedd56e6eda5750fecd_Traceguids,
            (char)v27,
            *v30);
          goto LABEL_106;
        }
      }
      else if ( *(int **)&WPP_RECORDER_INITIALIZED != v29 )
      {
        LOBYTE(NetBufferLists) = 3;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          (int)NetBufferLists,
          27,
          11,
          (struct _GUID *)&WPP_5e110f494fc33fedd56e6eda5750fecd_Traceguids,
          (char)v27);
LABEL_106:
        v26 = v57;
        v29 = &WPP_RECORDER_INITIALIZED;
        v24 = v58;
        v20 = v59;
      }
LABEL_107:
      CurrentIrql = v25 | 4;
LABEL_56:
      v27[22].Region = CurrentIrql;
      v27 = (_SLIST_HEADER *)v27->Alignment;
      if ( !v27 )
        break;
    }
    LODWORD(v31) = v52;
    NetBufferLists = (PNET_BUFFER_LIST)(v63 - v23);
    v32 = v70;
    if ( (Region & 1) != 0 && NetBufferLists )
    {
      if ( !(_BYTE)v52 && !v70 )
      {
        v32 = 1;
        v70 = 1;
        CurrentIrql = KeGetCurrentIrql();
        if ( (_BYTE)CurrentIrql == 2 )
          LODWORD(v31) = 1;
        else
          LOBYTE(v31) = 0;
        v52 = (unsigned int)v31;
      }
      v33 = Region;
      v34 = Region & 0xFFFFFFFFFFFFFFF8uLL;
      v35 = 2 * ((v33 >> 1) & 1);
      if ( (_BYTE)v31 )
      {
        CurrentIrql = KeGetPcr()->Prcb.Number << 12;
        v31 = (_QWORD *)(*(_QWORD *)(v34 + 8 * v35 + 40) + (unsigned int)CurrentIrql);
        *v31 += NetBufferLists;
        LOBYTE(v31) = v52;
      }
      else
      {
        NetBufferLists = (PNET_BUFFER_LIST)_InterlockedExchangeAdd64(
                                             (volatile signed __int64 *)(v34 + 8 * v35 + 48),
                                             (unsigned __int64)NetBufferLists);
      }
      v26 = v57;
    }
    v63 = v23;
  }
  while ( v27 );
  v3 = v64;
  v36 = v23 - v24;
  if ( (v25 & 1) != 0 && v36 )
  {
    if ( !(_BYTE)v31 && !v32 )
    {
      CurrentIrql = KeGetCurrentIrql();
      LOBYTE(v31) = (_BYTE)CurrentIrql == 2;
    }
    v37 = v25;
    v38 = v25 & 0xFFFFFFFFFFFFFFF8uLL;
    v39 = 2 * ((v37 >> 1) & 1);
    if ( (_BYTE)v31 )
    {
      CurrentIrql = KeGetPcr()->Prcb.Number << 12;
      v40 = (_QWORD *)(*(_QWORD *)(v38 + 8 * v39 + 40) + (unsigned int)CurrentIrql);
      *v40 += v36;
    }
    else
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v38 + 8 * v39 + 48), v36);
    }
  }
LABEL_17:
  if ( (v61 & 0x2000000000LL) != 0 )
  {
    if ( (ReturnFlags & 1) == 0 )
      v72 = KfRaiseIrql(2u);
    ndisPcwStartCycleCounter((struct NDIS_PCW_CONTEXT *)&v60, 5u);
  }
  ReturnNetBufferListsObject = v3->Next.ReturnNetBufferListsObject;
  ReturnNetBufferListsHandler = (void (*)(void))v3->Next.ReturnNetBufferListsHandler;
  ReturnNetBufferListsContext = v3->Next.ReturnNetBufferListsContext;
  if ( ReturnNetBufferListsObject->Type == 17 )
  {
LABEL_19:
    v3->Next.ReturnNetBufferListsHandler(v3->Next.ReturnNetBufferListsContext, v6, ReturnFlags);
  }
  else if ( !ndisIterativeDataPathDisabled
         && ((ReturnFlags & 1) != 0 || (CurrentIrql = KeGetCurrentIrql(), (_BYTE)CurrentIrql == 2)) )
  {
    LODWORD(CurrentIrql) = KeGetPcr()->Prcb.Number;
    v41 = (struct _NET_BUFFER_LIST **)v69;
    v6->Scratch = 0LL;
    v6->ChildRefCount = ReturnFlags;
    v42 = ReturnNetBufferListsObject->Type == 5;
    v53 = CurrentIrql;
    v69[2] = 0LL;
    v69[0] = v6;
    v69[1] = v6;
    if ( v42 )
    {
      while ( *v41 )
      {
        v43 = ReturnNetBufferListsObject;
        v44 = *(_QWORD *)&ReturnNetBufferListsObject[106].Type + 96 * CurrentIrql;
        v45 = *(_BYTE *)(v44 + 88);
        *(_BYTE *)(v44 + 88) = 1;
        v46 = *v41;
        v71 = v45;
        *v41 = 0LL;
        if ( v46 )
        {
          do
          {
            Scratch = (struct _NET_BUFFER_LIST *)v46->Scratch;
            ChildRefCount = v46->ChildRefCount;
            v46->ChildRefCount = 0;
            ndisCallReceiveCompleteHandler(
              ReturnNetBufferListsObject,
              ReturnNetBufferListsHandler,
              ReturnNetBufferListsContext,
              v46,
              0,
              0,
              ChildRefCount);
            v46 = Scratch;
          }
          while ( Scratch );
          v45 = v71;
        }
        *(_BYTE *)(v44 + 88) = 0;
        if ( v45 )
        {
          *(_BYTE *)(v44 + 88) = 1;
          v6 = *v41;
          goto LABEL_79;
        }
        ReturnNetBufferListsObject = *(_NDIS_OBJECT_HEADER **)&ReturnNetBufferListsObject[138].Type;
        v41 = (struct _NET_BUFFER_LIST **)(v44 + 72);
        ReturnNetBufferListsHandler = *(void (**)(void))&v43[132].Type;
        ReturnNetBufferListsContext = *(void **)&v43[134].Type;
        CurrentIrql = v53;
        if ( ReturnNetBufferListsObject->Type != 5 )
        {
          v6 = *(PNET_BUFFER_LIST *)(v44 + 72);
          goto LABEL_79;
        }
      }
    }
    else
    {
LABEL_79:
      if ( v6 )
      {
        *v41 = 0LL;
        do
        {
          v48 = (struct _NET_BUFFER_LIST *)v6->Scratch;
          v51 = v6->ChildRefCount;
          v6->ChildRefCount = 0;
          ndisCallReceiveCompleteHandler(
            ReturnNetBufferListsObject,
            ReturnNetBufferListsHandler,
            ReturnNetBufferListsContext,
            v6,
            0,
            0,
            v51);
          v6 = v48;
        }
        while ( v48 );
      }
    }
  }
  else
  {
    if ( v3->Header.Type != 5 )
      goto LABEL_19;
    Parameter[0] = 0LL;
    Parameter[1] = ReturnNetBufferListsObject;
    Parameter[2] = ReturnNetBufferListsContext;
    v67 = 3LL;
    Parameter[3] = ReturnNetBufferListsHandler;
    Parameter[4] = v6;
    v66 = 0;
    v68 = ReturnFlags;
    if ( KeExpandKernelStackAndCalloutEx(ndisDataPathExpandStackCallback, Parameter, 0x4CCCuLL, 0, 0LL) < 0 )
      ndisQueueStackExpansionFallbackNbls((struct _NDIS_FILTER_BLOCK *)v3, v6, 0);
  }
  if ( (v61 & 0x2000000000LL) != 0 )
  {
    ndisPcwEndCycleCounter((struct NDIS_PCW_CONTEXT *)&v60, 5u, 0x12uLL);
    if ( v72 != 2 )
      KeLowerIrql(v72);
  }
LABEL_21:
  if ( (v55 & 0x1000000000LL) != 0 )
  {
    ndisPcwEndCycleCounter((struct NDIS_PCW_CONTEXT *)&Buffer, 4u, 0x11uLL);
    if ( v49 != 2 )
      KeLowerIrql(v49);
  }
}
