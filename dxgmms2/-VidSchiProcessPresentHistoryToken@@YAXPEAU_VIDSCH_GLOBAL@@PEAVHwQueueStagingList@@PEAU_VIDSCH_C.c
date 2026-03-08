/*
 * XREFs of ?VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_GLOBAL@@PEAVHwQueueStagingList@@PEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_DEVICE@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@_N7@Z @ 0x1C00168B8
 * Callers:
 *     VidSchiSubmitPresentHistoryToken @ 0x1C00167E0 (VidSchiSubmitPresentHistoryToken.c)
 *     VidSchiFlushPendingTokenList @ 0x1C003A950 (VidSchiFlushPendingTokenList.c)
 * Callees:
 *     VidSchiCheckPendingDeviceCommand @ 0x1C00062E0 (VidSchiCheckPendingDeviceCommand.c)
 *     VidSchiPropagatePresentHistoryToken @ 0x1C001665C (VidSchiPropagatePresentHistoryToken.c)
 *     ?PropagatePresentHistoryToken@DXGPRESENTHISTORYTOKENQUEUE@@QEAAXPEAU_D3DKMT_PRESENTHISTORYTOKEN@@_N111111PEAX@Z @ 0x1C0016A10 (-PropagatePresentHistoryToken@DXGPRESENTHISTORYTOKENQUEUE@@QEAAXPEAU_D3DKMT_PRESENTHISTORYTOKEN@.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A8E0 (_guard_dispatch_icall_nop.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C001BF00 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     ?VidSchiCheckPlaneIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@II@Z @ 0x1C00355FC (-VidSchiCheckPlaneIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@II@Z.c)
 *     ?VidSchiCheckTokenIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@PEBUVIDSCH_SUBMIT_DATA2@@@Z @ 0x1C00356D0 (-VidSchiCheckTokenIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@PEBUVIDSCH_SUBMIT_DATA2@@@Z.c)
 *     ?VidSchiSubmitIndependentFlip@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_HW_QUEUE@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@PEAU_VIDSCH_DEVICE@@@Z @ 0x1C0036A48 (-VidSchiSubmitIndependentFlip@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_HW_QUE.c)
 *     ?VidSchiUnreferencePrimaryAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@II_N3@Z @ 0x1C003754C (-VidSchiUnreferencePrimaryAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSC.c)
 */

void __fastcall VidSchiProcessPresentHistoryToken(
        struct _VIDSCH_GLOBAL *a1,
        struct HwQueueStagingList *a2,
        struct _VIDSCH_CONTEXT *a3,
        struct VIDSCH_HW_QUEUE *a4,
        struct _VIDSCH_DEVICE *a5,
        struct VIDSCH_SUBMIT_DATA2 *a6,
        union _ULARGE_INTEGER a7,
        bool a8,
        bool a9)
{
  struct VIDSCH_FLIP_MULTIPLANE_OVERLAY2 *v12; // r15
  _BYTE *v13; // rbp
  struct _D3DKMT_PRESENTHISTORYTOKEN *v14; // r12
  __int64 v15; // r13
  __int64 v16; // rax
  unsigned int v17; // ebx
  __int64 v18; // r12
  void *v19; // rcx
  void *v20; // rcx
  bool v21; // bl
  __int64 v22; // rbx
  void *v23; // rcx
  char v24; // dl
  struct _VIDSCH_DEVICE *v25; // rbx
  __int64 v26; // r9
  int v28; // ecx
  char v29; // cl
  __int64 v30; // rax
  __int64 v31; // r13
  __int64 v32; // rbp
  void (__fastcall *v33)(_QWORD); // rax
  __int64 v34; // r9
  __int64 v35; // rdx
  __int64 v36; // r8
  bool v37; // [rsp+38h] [rbp-80h]
  bool v38; // [rsp+40h] [rbp-78h]
  union _SLIST_HEADER *SpinLock; // [rsp+60h] [rbp-58h]
  struct _D3DKMT_PRESENTHISTORYTOKEN *v40; // [rsp+68h] [rbp-50h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+70h] [rbp-48h] BYREF
  struct VIDSCH_SUBMIT_DATA2 *v44; // [rsp+E8h] [rbp+30h]

  v12 = (struct VIDSCH_SUBMIT_DATA2 *)((char *)a6 + 600);
  if ( (*(_DWORD *)a6 & 0x1000000) != 0 )
  {
    v24 = -1;
    v25 = a5;
    v26 = *((unsigned int *)a6 + 29);
    if ( _BitScanForward((unsigned int *)&v28, *(_DWORD *)v12 & 0x3FF) )
      v24 = v28;
    v29 = 0;
    if ( v24 != -1 )
      v29 = v24;
    if ( !a5 )
    {
      v30 = *(_QWORD *)((char *)a6 + *((_DWORD *)a6 + 151) * ((8 * *((_DWORD *)a6 + 152) + 231) & 0xFFFFFFF8) + 648);
      if ( v30 )
        v25 = *(struct _VIDSCH_DEVICE **)(*(_QWORD *)(v30 + 8) + 32LL);
      else
        v25 = 0LL;
    }
    v31 = *((_QWORD *)a1 + v26 + 400);
    v32 = *((unsigned int *)a6 + 29);
    if ( VidSchiCheckPlaneIndependentFlipCondition(a1, v26, v29) && VidSchiCheckTokenIndependentFlipCondition(a1, a6) )
    {
      VidSchiSubmitIndependentFlip(a2, a3, a4, a6, a7, v25);
    }
    else
    {
      if ( *(_DWORD *)(v31 + 44328) != -1 )
      {
        v33 = (void (__fastcall *)(_QWORD))*((_QWORD *)a1 + 384);
        if ( v33 )
          v33(*((_QWORD *)a1 + 390));
      }
      v34 = *(_QWORD *)((char *)a6 + 156);
      v35 = *((_QWORD *)a6 + 13);
      v36 = *((unsigned int *)a6 + 28);
      if ( a8 )
        WdLogSingleEntry5(8LL, v35, v36, 0LL, v34, *((_QWORD *)a6 + 21));
      else
        WdLogSingleEntry5(8LL, v35, v36, v34, *((_QWORD *)a6 + 21), *((_DWORD *)a6 + 1) & 1);
      VidSchiPropagatePresentHistoryToken(
        a1,
        *((union _SLIST_HEADER **)a6 + 12),
        *((struct _D3DKMT_PRESENTHISTORYTOKEN **)a6 + 13),
        0,
        0,
        a8,
        a9,
        *((_QWORD *)a6 + 3),
        (__int64)v12,
        (__int64)a6,
        0LL,
        0);
      VidSchiUnreferencePrimaryAllocations(a2, a1, v32, v12, *((_DWORD *)a6 + 34), *((_DWORD *)a6 + 34), 0, 0);
      _InterlockedDecrement((volatile signed __int32 *)a1 + 184);
      if ( *((_BYTE *)a1 + 2212) )
        a1 = (struct _VIDSCH_GLOBAL *)((char *)a1 + 4 * v32);
      _InterlockedDecrement((volatile signed __int32 *)a1 + 185);
      _InterlockedDecrement((volatile signed __int32 *)v25 + 393);
      _InterlockedDecrement((volatile signed __int32 *)v25 + v32 + 377);
      VidSchiCheckPendingDeviceCommand(v25);
    }
  }
  else
  {
    WdLogSingleEntry4(
      8LL,
      *((_QWORD *)a6 + 13),
      *((unsigned int *)a6 + 28),
      *(_QWORD *)((char *)a6 + 156),
      *((_QWORD *)a6 + 21));
    v13 = (char *)a6 + 4;
    v44 = 0LL;
    v14 = (struct _D3DKMT_PRESENTHISTORYTOKEN *)*((_QWORD *)a6 + 13);
    v15 = *((_QWORD *)a6 + 3);
    SpinLock = (union _SLIST_HEADER *)*((_QWORD *)a6 + 12);
    v16 = *((_QWORD *)a6 + 70);
    v40 = v14;
    if ( !v16
      || (v44 = (struct VIDSCH_SUBMIT_DATA2 *)*((_QWORD *)a6 + 70),
          v21 = (*(_DWORD *)v13 & 0x20) != 0,
          ((void (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD, _QWORD, bool))DxgCoreInterface[73])(
            v16,
            *((unsigned int *)a6 + 142),
            *((_QWORD *)a6 + 72),
            *((_QWORD *)a6 + 73),
            *((_QWORD *)a6 + 74),
            v21),
          v21) )
    {
      if ( v15 )
      {
        v22 = *((_QWORD *)v12 + 25);
        if ( v22 )
        {
          memset(&LockHandle, 0, sizeof(LockHandle));
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v15 + 16), &LockHandle);
          _InterlockedIncrement((volatile signed __int32 *)(v22 + 12));
          v23 = *(void **)(v15 + 8);
          if ( v23 )
            CRefCountedBuffer::RefCountedBufferRelease(v23);
          *(_QWORD *)(v15 + 8) = v22;
          KeReleaseInStackQueuedSpinLock(&LockHandle);
        }
      }
      v17 = 0;
      if ( *((_DWORD *)a1 + 38) )
      {
        do
        {
          v18 = v17 * ((8 * *((_DWORD *)v12 + 2) + 231) & 0xFFFFFFF8);
          v19 = *(void **)((char *)v12 + v18 + 200);
          if ( v19 )
          {
            CRefCountedBuffer::RefCountedBufferRelease(v19);
            *(_QWORD *)((char *)v12 + v18 + 200) = 0LL;
          }
          ++v17;
        }
        while ( v17 < *((_DWORD *)a1 + 38) );
        v14 = v40;
      }
      v20 = (void *)*((_QWORD *)a6 + 4);
      if ( v20 )
      {
        CRefCountedBuffer::RefCountedBufferRelease(v20);
        *((_QWORD *)a6 + 4) = 0LL;
      }
      DXGPRESENTHISTORYTOKENQUEUE::PropagatePresentHistoryToken(
        &SpinLock->Alignment,
        v14,
        0,
        0,
        0,
        a9,
        *v13 & 1,
        v37,
        v38,
        v44);
    }
    else if ( (*(_DWORD *)v13 & 0x10) != 0 )
    {
      ExpInterlockedPushEntrySList(SpinLock + 3, (PSLIST_ENTRY)(&v14[-1].Token.SurfaceComplete + 131));
    }
  }
}
