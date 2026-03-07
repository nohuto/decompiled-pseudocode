__int64 __fastcall VIDMM_GLOBAL::DestroyContextAllocation(VIDMM_GLOBAL *this, struct _VIDMM_CONTEXT_ALLOC *a2)
{
  struct _KEVENT *v3; // rbx
  struct VIDMM_DEVICE *Flink; // rsi
  struct _VIDMM_GLOBAL_ALLOC *v5; // rdi
  __int64 v7; // rcx

  if ( a2 )
  {
    v3 = (struct _KEVENT *)*((_QWORD *)a2 + 3);
    Flink = (struct VIDMM_DEVICE *)v3->Header.WaitListHead.Flink;
    v5 = **(struct _VIDMM_GLOBAL_ALLOC ***)&v3->Header.Lock;
    VidSchRemoveContextAllocation(a2);
    VIDMM_GLOBAL::CloseOneAllocation(this, v3, 0LL, 0, (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)1, 0LL);
    VIDMM_GLOBAL::DestroyOneAllocation((struct _KTHREAD **)this, Flink, v5, 0);
    return 0LL;
  }
  else
  {
    WdLogSingleEntry1(1LL, 2395LL);
    DxgkLogInternalTriageEvent(v7, 0x40000LL);
    return 3221225485LL;
  }
}
