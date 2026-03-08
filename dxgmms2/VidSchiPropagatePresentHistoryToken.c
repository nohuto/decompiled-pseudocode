/*
 * XREFs of VidSchiPropagatePresentHistoryToken @ 0x1C001665C
 * Callers:
 *     VidSchiExecuteMmIoFlip @ 0x1C000BE30 (VidSchiExecuteMmIoFlip.c)
 *     VidSchiCompleteFlipEntry @ 0x1C000D060 (VidSchiCompleteFlipEntry.c)
 *     VidSchiExecuteMmIoFlipAtPassiveLevel @ 0x1C0010D10 (VidSchiExecuteMmIoFlipAtPassiveLevel.c)
 *     ?VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_GLOBAL@@PEAVHwQueueStagingList@@PEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_DEVICE@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@_N7@Z @ 0x1C00168B8 (-VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_GLOBAL@@PEAVHwQueueStagingList@@PEAU_VIDSCH_C.c)
 *     VidSchSubmitCommand @ 0x1C00A4B80 (VidSchSubmitCommand.c)
 * Callees:
 *     ?VidSchiReleasePrivateDataReference@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@@Z @ 0x1C0016770 (-VidSchiReleasePrivateDataReference@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@.c)
 *     ?PropagatePresentHistoryToken@DXGPRESENTHISTORYTOKENQUEUE@@QEAAXPEAU_D3DKMT_PRESENTHISTORYTOKEN@@_N111111PEAX@Z @ 0x1C0016A10 (-PropagatePresentHistoryToken@DXGPRESENTHISTORYTOKENQUEUE@@QEAAXPEAU_D3DKMT_PRESENTHISTORYTOKEN@.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A8E0 (_guard_dispatch_icall_nop.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C001BF00 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 */

void __fastcall VidSchiPropagatePresentHistoryToken(
        struct _VIDSCH_GLOBAL *a1,
        union _SLIST_HEADER *SpinLock,
        struct _D3DKMT_PRESENTHISTORYTOKEN *a3,
        bool a4,
        bool a5,
        bool a6,
        bool a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        char a12)
{
  BOOL v12; // ebx
  struct _VIDSCH_GLOBAL *v16; // rbp
  void *v17; // r14
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // r10
  char v22; // si
  void *v23; // rcx
  int v24; // esi
  __int64 v25; // rbp
  void *v26; // rcx
  bool v27; // [rsp+38h] [rbp-60h]
  bool v28; // [rsp+40h] [rbp-58h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-48h] BYREF

  LOBYTE(v12) = 0;
  v16 = a1;
  v17 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v22 = 0;
  if ( a10 && *(_QWORD *)(a10 + 560) )
  {
    v17 = *(void **)(a10 + 560);
    v18 = *(unsigned int *)(a10 + 568);
    v19 = *(_QWORD *)(a10 + 576);
    v20 = *(_QWORD *)(a10 + 584);
    v21 = *(_QWORD *)(a10 + 592);
    v24 = *(_DWORD *)(a10 + 4) >> 5;
LABEL_16:
    v22 = v24 & 1;
    goto LABEL_4;
  }
  if ( a11 && *(_QWORD *)a11 )
  {
    v18 = *(unsigned int *)(a11 + 8);
    v17 = *(void **)a11;
    v19 = *(_QWORD *)(a11 + 16);
    v20 = *(_QWORD *)(a11 + 24);
    v21 = *(_QWORD *)(a11 + 32);
    LOBYTE(v24) = *(_BYTE *)(a11 + 40);
    goto LABEL_16;
  }
LABEL_4:
  if ( a4 && !a12 )
  {
    v17 = 0LL;
LABEL_6:
    if ( a8 )
    {
      v25 = *(_QWORD *)(a9 + 200);
      if ( v25 )
      {
        memset(&LockHandle, 0, sizeof(LockHandle));
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a8 + 16), &LockHandle);
        _InterlockedIncrement((volatile signed __int32 *)(v25 + 12));
        v26 = *(void **)(a8 + 8);
        if ( v26 )
          CRefCountedBuffer::RefCountedBufferRelease(v26);
        *(_QWORD *)(a8 + 8) = v25;
        KeReleaseInStackQueuedSpinLock(&LockHandle);
      }
      v16 = a1;
    }
    if ( a10 )
    {
      VidSchiReleasePrivateDataReference(v16, (struct VIDSCH_FLIP_MULTIPLANE_OVERLAY2 *)(a10 + 600));
      v23 = *(void **)(a10 + 32);
      if ( v23 )
      {
        CRefCountedBuffer::RefCountedBufferRelease(v23);
        *(_QWORD *)(a10 + 32) = 0LL;
      }
      v12 = *(_DWORD *)(a10 + 4) & 1;
    }
    DXGPRESENTHISTORYTOKENQUEUE::PropagatePresentHistoryToken(
      &SpinLock->Alignment,
      a3,
      a4,
      a5,
      a6,
      a7,
      v12,
      v27,
      v28,
      v17);
    return;
  }
  if ( !v17 )
    goto LABEL_6;
  ((void (__fastcall *)(void *, __int64, __int64, __int64, __int64, char))DxgCoreInterface[73])(
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  if ( v22 )
    goto LABEL_6;
  if ( (*(_DWORD *)(a10 + 4) & 0x10) != 0 )
    ExpInterlockedPushEntrySList(SpinLock + 3, (PSLIST_ENTRY)(&a3[-1].Token.SurfaceComplete + 131));
}
