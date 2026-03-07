void __fastcall VIDMM_GLOBAL::EvictAllReclaimedAllocation(VIDMM_GLOBAL *this, struct VIDMM_ALLOC *a2)
{
  unsigned int v4; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int64 v5; // [rsp+40h] [rbp+18h] BYREF

  if ( g_IsInternalReleaseOrDbg )
    WdLogNewEntry5_WdTrace(this);
  v4 = 0;
  v5 = 0LL;
  VIDMM_GLOBAL::EvictAllAllocationInList(this, (struct _LIST_ENTRY *)((char *)this + 3736), &v4, &v5);
  VIDMM_GLOBAL::EvictAllMemoryAllocationInList(this, a2);
}
