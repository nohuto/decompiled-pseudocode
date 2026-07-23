/*
 * XREFs of NtNotifyChangeMultipleKeys @ 0x1406DC020
 * Callers:
 *     NtNotifyChangeKey @ 0x1406DBFB0 (NtNotifyChangeKey.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1402C5E00 (KeWaitForSingleObject.c)
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x1402CB940 (ObfReferenceObject.c)
 *     KeInitializeApc @ 0x140341E70 (KeInitializeApc.c)
 *     KeResetEvent @ 0x140344C50 (KeResetEvent.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140413800 (memset.c)
 *     CmObReferenceObjectByName @ 0x1405CD0F0 (CmObReferenceObjectByName.c)
 *     CmpLockTwoKcbsShared @ 0x1405F38C0 (CmpLockTwoKcbsShared.c)
 *     CmpUnlockTwoKcbs @ 0x1405F3950 (CmpUnlockTwoKcbs.c)
 *     ObReferenceObjectByHandle @ 0x14063E2E0 (ObReferenceObjectByHandle.c)
 *     CmpLockKcbShared @ 0x140640230 (CmpLockKcbShared.c)
 *     CmpUnlockKcb @ 0x140640260 (CmpUnlockKcb.c)
 *     CmpUnlockRegistry @ 0x1406435F0 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140643630 (CmpLockRegistry.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140649D20 (CmpIsKeyDeletedForKeyBody.c)
 *     ProbeForWrite @ 0x1406CD560 (ProbeForWrite.c)
 *     CmpReleaseShutdownRundown @ 0x1406CE440 (CmpReleaseShutdownRundown.c)
 *     CmpCleanupParseContext @ 0x1406CE840 (CmpCleanupParseContext.c)
 *     CmpAcquireShutdownRundown @ 0x1406CF870 (CmpAcquireShutdownRundown.c)
 *     CmpAllocatePostBlock @ 0x1406DC750 (CmpAllocatePostBlock.c)
 *     CmUnlockHive @ 0x1406DC84C (CmUnlockHive.c)
 *     CmpNotifyChangeKey @ 0x1406DC890 (CmpNotifyChangeKey.c)
 *     CmLockHive @ 0x1406DCB88 (CmLockHive.c)
 *     CmObReferenceObjectByHandle @ 0x1406DD40C (CmObReferenceObjectByHandle.c)
 *     UNLOCK_POST_LIST @ 0x1406DF168 (UNLOCK_POST_LIST.c)
 *     LOCK_POST_LIST @ 0x1406DF184 (LOCK_POST_LIST.c)
 *     CmpFreePostBlock @ 0x1406E0850 (CmpFreePostBlock.c)
 */

NTSTATUS __cdecl NtNotifyChangeMultipleKeys(
        HANDLE MasterKeyHandle,
        ULONG Count,
        OBJECT_ATTRIBUTES SubordinateObjects[],
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        ULONG CompletionFilter,
        BOOLEAN WatchTree,
        PVOID Buffer,
        ULONG BufferSize,
        BOOLEAN Asynchronous)
{
  _QWORD *v13; // r12
  unsigned int v14; // esi
  int v15; // r9d
  int v16; // r8d
  char PreviousMode; // cl
  NTSTATUS v18; // edi
  PADAPTER_OBJECT v19; // r14
  __int64 PostBlock; // rax
  __int64 v21; // rsi
  unsigned int v22; // edx
  PADAPTER_OBJECT v23; // rcx
  PADAPTER_OBJECT *v24; // rax
  _DMA_OPERATIONS **p_DmaOperations; // r15
  _DMA_OPERATIONS *DmaOperations; // rcx
  __int64 v27; // r9
  int (__fastcall *v28)(_DMA_ADAPTER *, _DEVICE_OBJECT *, unsigned int, _IO_ALLOCATION_ACTION (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *, void *), void *); // rcx
  ULONG_PTR v29; // rcx
  BOOLEAN v30; // r15
  unsigned __int64 v32; // rax
  bool v33; // r14
  struct _KTHREAD *CurrentThread; // rdx
  void *v35; // r8
  __int64 v36; // r9
  int (__fastcall *AllocateAdapterChannel)(_DMA_ADAPTER *, _DEVICE_OBJECT *, unsigned int, _IO_ALLOCATION_ACTION (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *, void *), void *); // rcx
  _DMA_OPERATIONS *v38; // rax
  int (__fastcall *v39)(_DMA_ADAPTER *, _DEVICE_OBJECT *, unsigned int, _IO_ALLOCATION_ACTION (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *, void *), void *); // rdx
  __int64 v40; // r9
  __int16 v41; // ax
  ULONG_PTR v42; // rcx
  void *v43; // rcx
  int (__fastcall *v44)(_DMA_ADAPTER *, _DEVICE_OBJECT *, unsigned int, _IO_ALLOCATION_ACTION (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *, void *), void *); // rcx
  ULONG_PTR v45; // rcx
  __int64 v46; // rcx
  _QWORD *v47; // rax
  OBJECT_ATTRIBUTES *CurrentIrql; // r11
  __int64 v49; // rdx
  _QWORD *v50; // rcx
  unsigned __int8 v51; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v54; // edx
  bool v55; // zf
  NTSTATUS v56; // eax
  unsigned __int8 v57; // di
  __int64 v58; // rax
  _QWORD *v59; // rcx
  __int64 v60; // rdx
  _QWORD *v61; // rcx
  __int64 v62; // rax
  _QWORD *v63; // rcx
  __int64 v64; // rdx
  _QWORD *v65; // rcx
  unsigned __int8 v66; // al
  struct _KPRCB *v67; // r9
  _DWORD *v68; // r8
  int v69; // eax
  PIO_STATUS_BLOCK v70; // rax
  unsigned __int8 v71; // r15
  __int64 v72; // rax
  _QWORD *v73; // rcx
  __int64 v74; // rdx
  _QWORD *v75; // rcx
  __int64 v76; // rax
  _QWORD *v77; // rcx
  __int64 v78; // rdx
  _QWORD *v79; // rcx
  unsigned __int8 v80; // al
  struct _KPRCB *v81; // r9
  _DWORD *v82; // r8
  int v83; // eax
  BOOLEAN v84; // [rsp+40h] [rbp-1E8h]
  KPROCESSOR_MODE AccessMode; // [rsp+41h] [rbp-1E7h]
  bool v86; // [rsp+42h] [rbp-1E6h]
  bool v87; // [rsp+44h] [rbp-1E4h]
  unsigned int v88; // [rsp+48h] [rbp-1E0h]
  int Handlea; // [rsp+50h] [rbp-1D8h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+58h] [rbp-1D0h] BYREF
  int (__fastcall *v92)(_DMA_ADAPTER *, _DEVICE_OBJECT *, unsigned int, _IO_ALLOCATION_ACTION (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *, void *), void *); // [rsp+60h] [rbp-1C8h]
  PADAPTER_OBJECT v93; // [rsp+68h] [rbp-1C0h] BYREF
  PADAPTER_OBJECT v94; // [rsp+70h] [rbp-1B8h]
  __int64 v95; // [rsp+78h] [rbp-1B0h]
  OBJECT_ATTRIBUTES *__attribute__((__org_arrdim(0,0))) v96; // [rsp+80h] [rbp-1A8h]
  PVOID Object; // [rsp+88h] [rbp-1A0h] BYREF
  PIO_STATUS_BLOCK v98; // [rsp+90h] [rbp-198h]
  _QWORD *v99; // [rsp+98h] [rbp-190h]
  int v100; // [rsp+A0h] [rbp-188h]
  _OWORD v101[19]; // [rsp+B0h] [rbp-178h] BYREF

  v96 = SubordinateObjects;
  v95 = (__int64)MasterKeyHandle;
  v98 = IoStatusBlock;
  DmaAdapter = 0LL;
  v94 = 0LL;
  v13 = 0LL;
  v99 = 0LL;
  v14 = 1;
  v88 = 1;
  memset(v101, 0, 0x128uLL);
  v87 = 0;
  v92 = 0LL;
  v100 = 0;
  v84 = CmpAcquireShutdownRundown();
  if ( !v84 )
    return -1073741431;
  v16 = 1;
  if ( Count <= 1 )
  {
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    AccessMode = PreviousMode;
    if ( PreviousMode )
    {
      if ( (CompletionFilter & 0x10000000) != 0 )
      {
        if ( Asynchronous && !ApcRoutine && Event )
        {
          v14 = 4;
LABEL_9:
          v88 = v14;
          goto LABEL_10;
        }
        goto LABEL_83;
      }
      v32 = KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[10];
      v33 = 0;
      if ( v32 )
      {
        v41 = *(_WORD *)(v32 + 8);
        if ( v41 == 332 || v41 == 452 )
          v33 = 1;
      }
      v87 = v33;
      ProbeForWrite(IoStatusBlock, 8 * !v33 + 8LL, 4u);
      ProbeForWrite(Buffer, BufferSize, 4u);
      if ( v33 )
      {
        IoStatusBlock->Pointer = (PVOID)259;
      }
      else
      {
        IoStatusBlock->Status = 259;
        IoStatusBlock->Information = 0LL;
      }
      PreviousMode = AccessMode;
      if ( Asynchronous )
      {
        v14 = 2;
        goto LABEL_9;
      }
LABEL_10:
      if ( CompletionFilter != (CompletionFilter & 0x1000000F) )
      {
        v18 = -1073741811;
        goto LABEL_39;
      }
      LOBYTE(v15) = PreviousMode;
      v18 = CmObReferenceObjectByHandle(v95, 16, v16, v15, (__int64)&DmaAdapter, 0LL);
      if ( v18 < 0 )
      {
LABEL_39:
        CmpReleaseShutdownRundown();
        return v18;
      }
      v19 = 0LL;
      v93 = 0LL;
      if ( Count == 1 )
      {
        LODWORD(v101[6]) = -1;
        *((_QWORD *)&v101[9] + 1) = &v101[9];
        *(_QWORD *)&v101[9] = &v101[9];
        memset((char *)&v101[13] + 8, 0, 0x50uLL);
        v18 = CmObReferenceObjectByName((int)v96, 0, 16, v36, AccessMode, (__int64)v101, &v93);
        CmpCleanupParseContext((__int64)v101, 0);
        if ( v18 < 0 )
          goto LABEL_37;
        v19 = v93;
        if ( DmaAdapter->DmaOperations->AllocateAdapterChannel == v93->DmaOperations->AllocateAdapterChannel )
        {
          HalPutDmaAdapter(v93);
          v18 = -1073741811;
          goto LABEL_37;
        }
      }
      PostBlock = CmpAllocatePostBlock(v14, 0x10000LL, 0LL, 0LL);
      v21 = PostBlock;
      v95 = PostBlock;
      if ( !PostBlock )
      {
        if ( Count == 1 )
          HalPutDmaAdapter(v19);
        goto LABEL_90;
      }
      if ( Count == 1 )
      {
        v13 = (_QWORD *)CmpAllocatePostBlock(v88, 0LL, v19, PostBlock);
        v99 = v13;
        if ( !v13 )
        {
          HalPutDmaAdapter(v19);
          CmpFreePostBlock((PVOID)v21);
LABEL_90:
          v18 = -1073741670;
          goto LABEL_37;
        }
      }
      v22 = v88;
      if ( v88 != 1 )
      {
        if ( Event )
        {
          Object = 0LL;
          v18 = ObReferenceObjectByHandle(Event, 2u, (POBJECT_TYPE)ExEventObjectType, AccessMode, &Object, 0LL);
          v94 = (PADAPTER_OBJECT)Object;
          if ( v18 < 0 )
          {
            if ( Count != 1 )
            {
LABEL_93:
              v43 = (void *)v21;
LABEL_94:
              CmpFreePostBlock(v43);
              goto LABEL_37;
            }
LABEL_92:
            CmpFreePostBlock(v13);
            goto LABEL_93;
          }
          KeResetEvent((PRKEVENT)Object);
          v22 = v88;
        }
        v23 = v94;
        v24 = *(PADAPTER_OBJECT **)(v21 + 64);
        if ( v22 == 2 )
        {
          v24[13] = (PADAPTER_OBJECT)IoStatusBlock;
          *(_QWORD *)(*(_QWORD *)(v21 + 64) + 8LL) = v23;
          CurrentThread = KeGetCurrentThread();
          v35 = AlpcMessageDeleteProcedure;
          if ( ApcRoutine )
            v35 = ApcRoutine;
          KeInitializeApc(
            *(_QWORD *)(v21 + 64) + 16LL,
            (__int64)CurrentThread,
            2,
            (__int64)CmpPostApc,
            (__int64)CmpPostApcRunDown,
            (__int64)v35,
            ApcRoutine != 0LL ? AccessMode : 0,
            (__int64)ApcContext);
          v19 = v93;
        }
        else
        {
          *v24 = v94;
          if ( v22 != 4 )
          {
            *(_QWORD *)(*(_QWORD *)(v21 + 64) + 8LL) = ApcRoutine;
            *(_DWORD *)(*(_QWORD *)(v21 + 64) + 16LL) = (_DWORD)ApcContext;
          }
        }
      }
      CmpLockRegistry();
      p_DmaOperations = &DmaAdapter->DmaOperations;
      DmaOperations = DmaAdapter->DmaOperations;
      if ( Count == 1 )
        CmpLockTwoKcbsShared((__int64)DmaOperations, (__int64)v19->DmaOperations);
      else
        CmpLockKcbShared((__int64)DmaOperations);
      if ( !CmpIsKeyDeletedForKeyBody((__int64)DmaAdapter, 0LL) )
      {
        if ( Count != 1 )
        {
LABEL_26:
          CmLockHive((*p_DmaOperations)->AllocateAdapterChannel);
          Handlea = 1;
          goto LABEL_27;
        }
        if ( !CmpIsKeyDeletedForKeyBody((__int64)v19, 0LL) )
        {
          AllocateAdapterChannel = (*p_DmaOperations)->AllocateAdapterChannel;
          v38 = v19->DmaOperations;
          v39 = v38->AllocateAdapterChannel;
          if ( (unsigned __int64)AllocateAdapterChannel < (unsigned __int64)v39 )
          {
            ((void (*)(void))CmLockHive)();
            CmLockHive(v19->DmaOperations->AllocateAdapterChannel);
            Handlea = 2;
          }
          else
          {
            if ( AllocateAdapterChannel == v39 )
              goto LABEL_26;
            CmLockHive(v38->AllocateAdapterChannel);
            CmLockHive((*p_DmaOperations)->AllocateAdapterChannel);
            Handlea = 3;
          }
          v92 = v19->DmaOperations->AllocateAdapterChannel;
LABEL_27:
          LOCK_POST_LIST();
          LOBYTE(v27) = WatchTree;
          v18 = CmpNotifyChangeKey(DmaAdapter, v21, CompletionFilter, v27);
          if ( v18 >= 0 )
          {
            v86 = Count == 1;
            if ( Count == 1 )
            {
              ObfReferenceObject(v19);
              if ( v18 )
              {
                LOBYTE(v40) = WatchTree;
                v18 = CmpNotifyChangeKey(v19, v13, CompletionFilter, v40);
                v86 = Count == 1;
                if ( v18 < 0 )
                {
                  v46 = *(_QWORD *)v21;
                  v47 = *(_QWORD **)(v21 + 8);
                  if ( *(_QWORD *)(*(_QWORD *)v21 + 8LL) != v21 )
                    goto LABEL_173;
                  if ( *v47 != v21 )
                    goto LABEL_173;
                  *v47 = v46;
                  *(_QWORD *)(v46 + 8) = v47;
                  CurrentIrql = (OBJECT_ATTRIBUTES *)KeGetCurrentIrql();
                  v96 = CurrentIrql;
                  __writecr8(1uLL);
                  v49 = *(_QWORD *)(v21 + 16);
                  v50 = *(_QWORD **)(v21 + 24);
                  if ( *(_QWORD *)(v49 + 8) != v21 + 16 || *v50 != v21 + 16 )
                    goto LABEL_173;
                  *v50 = v49;
                  *(_QWORD *)(v49 + 8) = v50;
                  if ( KiIrqlFlags )
                  {
                    if ( (KiIrqlFlags & 1) != 0 )
                    {
                      v51 = KeGetCurrentIrql();
                      if ( v51 <= 0xFu && (unsigned __int8)CurrentIrql <= 0xFu && v51 >= 2u )
                      {
                        CurrentPrcb = KeGetCurrentPrcb();
                        SchedulerAssist = CurrentPrcb->SchedulerAssist;
                        v54 = ~(unsigned __int16)(-1LL << ((unsigned __int8)CurrentIrql + 1));
                        v55 = (v54 & SchedulerAssist[5]) == 0;
                        SchedulerAssist[5] &= v54;
                        if ( v55 )
                        {
                          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
                          LOBYTE(CurrentIrql) = (_BYTE)v96;
                        }
                        v19 = v93;
                      }
                    }
                  }
                  __writecr8((unsigned __int8)CurrentIrql);
                  v86 = Count == 1;
                }
              }
              else
              {
                CmpFreePostBlock(v13);
                v86 = 0;
              }
            }
            UNLOCK_POST_LIST();
            if ( Handlea != 1 )
            {
              if ( Handlea != 2 )
              {
                CmUnlockHive((*p_DmaOperations)->AllocateAdapterChannel);
                v28 = v92;
LABEL_31:
                CmUnlockHive(v28);
                v29 = (ULONG_PTR)*p_DmaOperations;
                if ( Count == 1 )
                  CmpUnlockTwoKcbs(v29, (ULONG_PTR)v19->DmaOperations);
                else
                  CmpUnlockKcb(v29);
                CmpUnlockRegistry();
                if ( v19 )
                  HalPutDmaAdapter(v19);
                if ( v18 < 0 )
                {
                  CmpFreePostBlock((PVOID)v21);
                  if ( v94 )
                    HalPutDmaAdapter(v94);
                  goto LABEL_37;
                }
                if ( v88 != 1 )
                {
LABEL_37:
                  v30 = v84;
                  goto LABEL_38;
                }
                CmpReleaseShutdownRundown();
                v84 = 0;
                v56 = KeWaitForSingleObject(*(PVOID *)(v21 + 64), Executive, AccessMode, 1u, 0LL);
                v18 = v56;
                if ( v56 != 257 && v56 != 192 )
                {
                  CmpLockRegistry();
                  LOCK_POST_LIST();
                  v57 = KeGetCurrentIrql();
                  __writecr8(1uLL);
                  if ( v86 )
                  {
                    v58 = *v13;
                    if ( *v13 )
                    {
                      v59 = (_QWORD *)v13[1];
                      if ( *(_QWORD **)(v58 + 8) != v13 || (_QWORD *)*v59 != v13 )
                        goto LABEL_173;
                      *v59 = v58;
                      *(_QWORD *)(v58 + 8) = v59;
                    }
                    v60 = v13[2];
                    v61 = (_QWORD *)v13[3];
                    if ( *(_QWORD **)(v60 + 8) != v13 + 2 || (_QWORD *)*v61 != v13 + 2 )
                      goto LABEL_173;
                    *v61 = v60;
                    *(_QWORD *)(v60 + 8) = v61;
                  }
                  v62 = *(_QWORD *)v21;
                  if ( *(_QWORD *)v21 )
                  {
                    v63 = *(_QWORD **)(v21 + 8);
                    if ( *(_QWORD *)(v62 + 8) != v21 || *v63 != v21 )
                      goto LABEL_173;
                    *v63 = v62;
                    *(_QWORD *)(v62 + 8) = v63;
                  }
                  v64 = *(_QWORD *)(v21 + 16);
                  v65 = *(_QWORD **)(v21 + 24);
                  if ( *(_QWORD *)(v64 + 8) == v21 + 16 && *v65 == v21 + 16 )
                  {
                    *v65 = v64;
                    *(_QWORD *)(v64 + 8) = v65;
                    if ( KiIrqlFlags )
                    {
                      if ( (KiIrqlFlags & 1) != 0 )
                      {
                        v66 = KeGetCurrentIrql();
                        if ( v66 <= 0xFu && v57 <= 0xFu && v66 >= 2u )
                        {
                          v67 = KeGetCurrentPrcb();
                          v68 = v67->SchedulerAssist;
                          v69 = ~(unsigned __int16)(-1LL << (v57 + 1));
                          v55 = (v69 & v68[5]) == 0;
                          v68[5] &= v69;
                          if ( v55 )
                            KiRemoveSystemWorkPriorityKick((__int64)v67);
                        }
                      }
                    }
                    __writecr8(v57);
                    UNLOCK_POST_LIST();
                    CmpUnlockRegistry();
                    v18 = *(_DWORD *)(*(_QWORD *)(v21 + 64) + 24LL);
                    v70 = v98;
                    v98->Status = v18;
                    if ( v87 )
                      HIDWORD(v70->Pointer) = 0;
                    else
                      v70->Information = 0LL;
                    v30 = 0;
                    if ( v86 )
                      CmpFreePostBlock(v13);
                    CmpFreePostBlock((PVOID)v21);
LABEL_38:
                    HalPutDmaAdapter(DmaAdapter);
                    if ( !v30 )
                      return v18;
                    goto LABEL_39;
                  }
LABEL_173:
                  __fastfail(3u);
                }
                CmpLockRegistry();
                LOCK_POST_LIST();
                v71 = KeGetCurrentIrql();
                __writecr8(1uLL);
                if ( v86 )
                {
                  v72 = *v13;
                  if ( *v13 )
                  {
                    v73 = (_QWORD *)v13[1];
                    if ( *(_QWORD **)(v72 + 8) != v13 || (_QWORD *)*v73 != v13 )
                      goto LABEL_173;
                    *v73 = v72;
                    *(_QWORD *)(v72 + 8) = v73;
                  }
                  v74 = v13[2];
                  v75 = (_QWORD *)v13[3];
                  if ( *(_QWORD **)(v74 + 8) != v13 + 2 || (_QWORD *)*v75 != v13 + 2 )
                    goto LABEL_173;
                  *v75 = v74;
                  *(_QWORD *)(v74 + 8) = v75;
                }
                v76 = *(_QWORD *)v21;
                if ( *(_QWORD *)v21 )
                {
                  v77 = *(_QWORD **)(v21 + 8);
                  if ( *(_QWORD *)(v76 + 8) != v21 || *v77 != v21 )
                    goto LABEL_173;
                  *v77 = v76;
                  *(_QWORD *)(v76 + 8) = v77;
                }
                v78 = *(_QWORD *)(v21 + 16);
                v79 = *(_QWORD **)(v21 + 24);
                if ( *(_QWORD *)(v78 + 8) != v21 + 16 || *v79 != v21 + 16 )
                  goto LABEL_173;
                *v79 = v78;
                *(_QWORD *)(v78 + 8) = v79;
                if ( KiIrqlFlags )
                {
                  if ( (KiIrqlFlags & 1) != 0 )
                  {
                    v80 = KeGetCurrentIrql();
                    if ( v80 <= 0xFu && v71 <= 0xFu && v80 >= 2u )
                    {
                      v81 = KeGetCurrentPrcb();
                      v82 = v81->SchedulerAssist;
                      v83 = ~(unsigned __int16)(-1LL << (v71 + 1));
                      v55 = (v83 & v82[5]) == 0;
                      v82[5] &= v83;
                      if ( v55 )
                        KiRemoveSystemWorkPriorityKick((__int64)v81);
                    }
                  }
                }
                __writecr8(v71);
                UNLOCK_POST_LIST();
                CmpUnlockRegistry();
                if ( !v86 )
                  goto LABEL_93;
                goto LABEL_92;
              }
              CmUnlockHive(v92);
            }
            v28 = (*p_DmaOperations)->AllocateAdapterChannel;
            goto LABEL_31;
          }
          UNLOCK_POST_LIST();
          if ( Handlea != 1 )
          {
            if ( Handlea != 2 )
            {
              CmUnlockHive((*p_DmaOperations)->AllocateAdapterChannel);
              v44 = v92;
              goto LABEL_100;
            }
            CmUnlockHive(v92);
          }
          v44 = (*p_DmaOperations)->AllocateAdapterChannel;
LABEL_100:
          CmUnlockHive(v44);
          v45 = (ULONG_PTR)*p_DmaOperations;
          if ( Count == 1 )
            CmpUnlockTwoKcbs(v45, (ULONG_PTR)v19->DmaOperations);
          else
            CmpUnlockKcb(v45);
          CmpUnlockRegistry();
          if ( v94 )
            HalPutDmaAdapter(v94);
          if ( Count != 1 )
            goto LABEL_37;
          v43 = v13;
          goto LABEL_94;
        }
      }
      v42 = (ULONG_PTR)*p_DmaOperations;
      if ( Count == 1 )
        CmpUnlockTwoKcbs(v42, (ULONG_PTR)v19->DmaOperations);
      else
        CmpUnlockKcb(v42);
      CmpUnlockRegistry();
      if ( v94 )
        HalPutDmaAdapter(v94);
      if ( Count == 1 )
        CmpFreePostBlock(v13);
      CmpFreePostBlock((PVOID)v21);
      v18 = -1073741444;
      goto LABEL_37;
    }
    if ( !Asynchronous )
      goto LABEL_10;
    v14 = 3;
    v88 = 3;
    if ( !Count )
      goto LABEL_10;
  }
LABEL_83:
  CmpReleaseShutdownRundown();
  return -1073741811;
}
