/*
 * XREFs of VidSchiRedirectedFlipWaitOnSyncObject @ 0x1C003B608
 * Callers:
 *     VidSchSubmitCommandContextless @ 0x1C0040AC0 (VidSchSubmitCommandContextless.c)
 * Callees:
 *     ?VidSchiAcquirePrivateDataReference@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@@Z @ 0x1C0003238 (-VidSchiAcquirePrivateDataReference@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@.c)
 *     ?ProcessHwQueues@HwQueueStagingList@@QEAAXXZ @ 0x1C0006790 (-ProcessHwQueues@HwQueueStagingList@@QEAAXXZ.c)
 *     ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x1C0013414 (-Acquire@AcquireSpinLock@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x1C00134D8 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     VidSchiSubmitPresentHistoryToken @ 0x1C00167E0 (VidSchiSubmitPresentHistoryToken.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A8E0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C001A980 (memmove.c)
 *     VidSchIsVSyncEnabled @ 0x1C00A5F00 (VidSchIsVSyncEnabled.c)
 */

__int64 __fastcall VidSchiRedirectedFlipWaitOnSyncObject(struct _VIDSCH_GLOBAL *a1, char *Src, __int64 a3, _DWORD *a4)
{
  __int64 v8; // rax
  __int64 v9; // r13
  __int64 v10; // r14
  __int64 v11; // rdx
  void (__fastcall *v12)(_QWORD, __int64, __int64); // rax
  struct _VIDSCH_GLOBAL *v13; // rcx
  unsigned __int64 v14; // rcx
  unsigned __int64 **v15; // r8
  unsigned __int64 *v16; // rax
  unsigned int v17; // edi
  __int64 v18; // rdx
  _QWORD *v19; // rax
  _QWORD *v20; // r14
  __int64 v21; // rdx
  char *v22; // rdi
  char *v23; // r14
  char **v24; // rax
  _QWORD v26[2]; // [rsp+58h] [rbp-9h] BYREF
  char v27; // [rsp+68h] [rbp+7h]
  _QWORD v28[4]; // [rsp+70h] [rbp+Fh] BYREF
  __int16 v29; // [rsp+90h] [rbp+2Fh]

  v8 = *(_QWORD *)&Src[*((_DWORD *)Src + 151) * ((8 * *((_DWORD *)Src + 152) + 231) & 0xFFFFFFF8) + 648];
  if ( v8 )
    v9 = *(_QWORD *)(*(_QWORD *)(v8 + 8) + 32LL);
  else
    v9 = 0LL;
  v10 = *((unsigned int *)Src + 29);
  if ( (*(_DWORD *)Src & 0x1000000) != 0 && (_DWORD)v10 != -1 )
  {
    v11 = *(unsigned int *)(*((_QWORD *)a1 + v10 + 400) + 44328LL);
    if ( (_DWORD)v11 != -1 )
    {
      v12 = (void (__fastcall *)(_QWORD, __int64, __int64))*((_QWORD *)a1 + 382);
      if ( v12 )
        v12(*((_QWORD *)a1 + 390), v11, 0xFFFFFFFFLL);
    }
  }
  if ( (*a4 & 0x1000) != 0 && (*a4 & 0xC00) != 0x400 && (_DWORD)v10 != -1 && (*(_DWORD *)Src & 0x1040000) == 0x1040000 )
  {
    _InterlockedAdd((volatile signed __int32 *)a1 + 184, 1u);
    v13 = a1;
    if ( *((_BYTE *)a1 + 2212) )
      v13 = (struct _VIDSCH_GLOBAL *)((char *)a1 + 4 * v10);
    _InterlockedAdd((volatile signed __int32 *)v13 + 185, 1u);
    _InterlockedAdd((volatile signed __int32 *)(v9 + 1572), 1u);
    _InterlockedAdd((volatile signed __int32 *)(v9 + 4 * v10 + 1508), 1u);
    if ( (*(_DWORD *)(v9 + 48) & 2) != 0 || *((int *)Src + 30) >= 4 || *((_BYTE *)a1 + 156) )
      VidSchIsVSyncEnabled(a1, v10);
  }
  v29 = 0;
  v28[0] = (char *)a1 + 1728;
  AcquireSpinLock::Acquire((Acquire *)v28);
  v14 = *((_QWORD *)Src + 59);
  v15 = (unsigned __int64 **)(a3 + 64);
  v26[1] = v26;
  v27 = 0;
  v26[0] = v26;
  if ( *(_BYTE *)(a3 + 28) )
    goto LABEL_25;
  v16 = *v15;
  if ( !*(_BYTE *)(a3 + 29) )
  {
    if ( *(_DWORD *)v16 - (int)v14 < 0 )
      goto LABEL_22;
LABEL_25:
    WdLogSingleEntry3(4LL, a3, **v15, *((_QWORD *)Src + 59));
    VidSchiAcquirePrivateDataReference(a1, (struct VIDSCH_FLIP_MULTIPLANE_OVERLAY2 *)(Src + 600));
    v18 = *((_QWORD *)Src + 4);
    if ( v18 )
      _InterlockedAdd((volatile signed __int32 *)(v18 + 12), 1u);
    VidSchiSubmitPresentHistoryToken((struct HwQueueStagingList *)v26, 0LL, Src, 0LL, (__int64)a1);
    goto LABEL_35;
  }
  if ( *v16 >= v14 )
    goto LABEL_25;
LABEL_22:
  if ( *(_DWORD *)(a3 + 36) == 0x7FFFFFFF )
  {
    WdLogSingleEntry0(1LL);
    ((void (__fastcall *)(_QWORD, __int64, __int64, const wchar_t *, __int64, _QWORD, _QWORD, _QWORD, _QWORD))DxgCoreInterface[86])(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Synchronization object already has MAX_LONG reference pending, can't reference more.\n",
      13506LL,
      0LL,
      0LL,
      0LL,
      0LL);
    v17 = -1073741823;
    goto LABEL_36;
  }
  v19 = ExAllocateFromLookasideListEx((PLOOKASIDE_LIST_EX)((char *)a1 + 880));
  v20 = v19;
  if ( !v19 )
  {
    WdLogSingleEntry0(1LL);
    ((void (__fastcall *)(_QWORD, __int64, __int64, const wchar_t *, __int64, _QWORD, _QWORD, _QWORD, _QWORD))DxgCoreInterface[86])(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Failed to allocate VIDSCH_SYNCOBJ_PHT_DATA",
      13518LL,
      0LL,
      0LL,
      0LL,
      0LL);
    v17 = -1073741801;
    goto LABEL_36;
  }
  v19[1] = a3;
  v19[2] = *((_QWORD *)Src + 59);
  memmove(v19 + 5, Src, *((unsigned int *)Src + 139));
  VidSchiAcquirePrivateDataReference(a1, (struct VIDSCH_FLIP_MULTIPLANE_OVERLAY2 *)(v20 + 80));
  v21 = v20[9];
  if ( v21 )
    _InterlockedAdd((volatile signed __int32 *)(v21 + 12), 1u);
  v22 = (char *)a1 + 856;
  v23 = (char *)(v20 + 3);
  v24 = (char **)*((_QWORD *)v22 + 1);
  if ( *v24 != v22 )
    __fastfail(3u);
  *(_QWORD *)v23 = v22;
  *((_QWORD *)v23 + 1) = v24;
  *v24 = v23;
  *((_QWORD *)v22 + 1) = v23;
  ++*(_DWORD *)(a3 + 44);
  _InterlockedAdd((volatile signed __int32 *)(a3 + 36), 1u);
LABEL_35:
  v17 = 0;
LABEL_36:
  if ( !v27 )
    HwQueueStagingList::ProcessHwQueues((HwQueueStagingList *)v26);
  AcquireSpinLock::Release((AcquireSpinLock *)v28);
  return v17;
}
