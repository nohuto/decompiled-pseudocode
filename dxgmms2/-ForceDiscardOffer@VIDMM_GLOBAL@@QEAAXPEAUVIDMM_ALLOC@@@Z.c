void __fastcall VIDMM_GLOBAL::ForceDiscardOffer(VIDMM_GLOBAL *this, struct VIDMM_ALLOC *a2)
{
  __int64 v4; // rax
  _QWORD *v5; // rdi
  struct _VIDSCH_SYNC_OBJECT **v6; // rsi
  _QWORD v7[12]; // [rsp+30h] [rbp-19h] BYREF
  unsigned __int64 v8; // [rsp+B8h] [rbp+6Fh] BYREF
  struct _VIDSCH_SYNC_OBJECT *v9; // [rsp+C0h] [rbp+77h] BYREF

  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = a2;
  v4 = *(_QWORD *)a2;
  v8 = 0LL;
  v5 = *(_QWORD **)v4;
  v6 = (struct _VIDSCH_SYNC_OBJECT **)(*(_QWORD *)(*((_QWORD *)a2 + 1) + 88LL)
                                     + 176LL * (*(_DWORD *)(*(_QWORD *)v4 + 68LL) & 0x3F));
  if ( *(int *)(*((_QWORD *)a2 + 12) + 8LL) > 0 )
    VIDMM_GLOBAL::FlushPendingAllocationAccess(this, (struct _VIDMM_GLOBAL_ALLOC *)v5, 0LL, 0);
  if ( v5[15] )
  {
    memset(v7, 0, 0x58uLL);
    v7[1] = *((_QWORD *)a2 + 1);
    LODWORD(v7[0]) = 211;
    v7[4] = v5;
    if ( (unsigned int)VIDMM_GLOBAL::QueueDeferredCommand(
                         this,
                         (struct VIDMM_PAGING_QUEUE *)v6,
                         (struct _VIDMM_DEFERRED_COMMAND *)v7,
                         0,
                         &v8) == 259 )
    {
      v9 = v6[11];
      VIDMM_GLOBAL::WaitForFences(this, &v9, &v8, 1u, 0LL);
    }
  }
  else
  {
    DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v5 + 37));
    VIDMM_GLOBAL::DiscardOfferedAllocation(this, (struct _VIDMM_GLOBAL_ALLOC *)v5);
    DXGFASTMUTEX::Release((struct _KTHREAD **)v5 + 37);
  }
}
