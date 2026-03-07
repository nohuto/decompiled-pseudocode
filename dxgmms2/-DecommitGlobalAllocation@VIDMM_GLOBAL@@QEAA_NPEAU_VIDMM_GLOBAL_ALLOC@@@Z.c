char __fastcall VIDMM_GLOBAL::DecommitGlobalAllocation(VIDMM_GLOBAL *this, struct _VIDMM_GLOBAL_ALLOC *a2)
{
  char v4; // bl
  char v5; // r15
  struct _VIDMM_GLOBAL_ALLOC *i; // r14
  PRKPROCESS *v8; // rcx
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-68h] BYREF

  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = a2;
  v4 = 0;
  DXGFASTMUTEX::Acquire((struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 296));
  v5 = 1;
  if ( *(_WORD *)(*((_QWORD *)a2 + 67) + 4LL) == 2 && (*((_DWORD *)a2 + 19) & 0x40) != 0 )
  {
    *((_DWORD *)a2 + 18) |= 0x40u;
    v4 = 1;
  }
  DXGFASTMUTEX::Release((struct _KTHREAD **)a2 + 37);
  if ( v4 )
  {
    if ( *((_QWORD *)a2 + 15) )
    {
      VIDMM_GLOBAL::MarkGlobalAllocation(this, a2, 0LL, 0LL);
      (*(void (__fastcall **)(_QWORD, struct _VIDMM_GLOBAL_ALLOC *, _QWORD, _QWORD, _BYTE, _QWORD))(**((_QWORD **)a2 + 15)
                                                                                                  + 48LL))(
        *((_QWORD *)a2 + 15),
        a2,
        0LL,
        0LL,
        0,
        0LL);
    }
    else if ( !(unsigned int)VIDMM_GLOBAL::DiscardOfferedAllocation(this, a2) )
    {
      WdLogSingleEntry1(3LL, a2);
      return 0;
    }
  }
  if ( VIDMM_GLOBAL::IsPagingOperationPending(this, a2, 0) )
    VIDMM_GLOBAL::WaitForAllPagingEngines(this, a2);
  DXGFASTMUTEX::Acquire((struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 296));
  if ( *(_WORD *)(*((_QWORD *)a2 + 67) + 4LL) == 3 )
  {
    if ( *((_QWORD *)a2 + 30) )
      VIDMM_GLOBAL::EvictTemporaryAllocation((VIDMM_GLOBAL *)3, a2);
    for ( i = (struct _VIDMM_GLOBAL_ALLOC *)*((_QWORD *)a2 + 34);
          i != (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 272);
          i = *(struct _VIDMM_GLOBAL_ALLOC **)i )
    {
      v8 = (PRKPROCESS *)*((_QWORD *)i - 6);
      memset(&ApcState, 0, sizeof(ApcState));
      KeStackAttachProcess(*v8, &ApcState);
      VIDMM_GLOBAL::UncommitLocalBackingStore(this, (struct _VIDMM_GLOBAL_ALLOC *)((char *)i - 56), 1);
      KeUnstackDetachProcess(&ApcState);
    }
    VIDMM_GLOBAL::UncommitGlobalBackingStore(this, a2, 0);
    _InterlockedExchangeAdd64(
      (volatile signed __int64 *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 11) + 8LL) + 32LL) + 456LL),
      -*((_QWORD *)a2 + 1));
  }
  else
  {
    v5 = 0;
    WdLogSingleEntry1(3LL, a2);
  }
  DXGFASTMUTEX::Release((struct _KTHREAD **)a2 + 37);
  return v5;
}
