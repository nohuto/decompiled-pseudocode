__int64 __fastcall VIDMM_GLOBAL::AllocateCrossAdapterDataDpc(
        VIDMM_GLOBAL *this,
        struct _VIDMM_CROSSADAPTER_ALLOC *a2,
        struct _VIDMM_GLOBAL_ALLOC *a3)
{
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  struct _VIDMM_CROSSADAPTER_ALLOC **v9; // rdx
  struct _VIDMM_CROSSADAPTER_ALLOC *v10; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-28h] BYREF

  v6 = (_QWORD *)operator new(32LL, 0x30366956u, 64LL);
  v7 = v6;
  if ( v6 )
  {
    *v6 = a3;
    v6[3] = VidSchGetRunEvent(*(_QWORD *)(*((_QWORD *)this + 2) + 744LL));
    memset(&LockHandle, 0, sizeof(LockHandle));
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a2 + 4, &LockHandle);
    v9 = (struct _VIDMM_CROSSADAPTER_ALLOC **)*((_QWORD *)a2 + 3);
    v10 = (struct _VIDMM_CROSSADAPTER_ALLOC *)(v7 + 1);
    if ( *v9 != (struct _VIDMM_CROSSADAPTER_ALLOC *)((char *)a2 + 16) )
      __fastfail(3u);
    *(_QWORD *)v10 = (char *)a2 + 16;
    v7[2] = v9;
    *v9 = v10;
    *((_QWORD *)a2 + 3) = v10;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    return 0LL;
  }
  else
  {
    _InterlockedIncrement(&dword_1C00768E4);
    WdLogSingleEntry1(6LL, 32803LL);
    ((void (__fastcall *)(_QWORD, __int64, __int64, const wchar_t *, __int64, _QWORD, _QWORD, _QWORD, _QWORD))DxgCoreInterface[86])(
      0LL,
      262145LL,
      0xFFFFFFFFLL,
      L"Failed to allocate VIDMM_GLOBAL_ALLOC_CROSSADAPTER_DATA",
      32803LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225495LL;
  }
}
