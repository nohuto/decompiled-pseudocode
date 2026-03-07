char __fastcall VIDMM_RECYCLE_BLOCK::CleanupFreeBlock(VIDMM_RECYCLE_BLOCK *this, struct VIDMM_RECYCLE_RANGE *a2)
{
  VIDMM_RECYCLE_HEAP_MGR *v3; // rsi
  struct VIDMM_RECYCLE_MULTIRANGE *v5; // rdi
  __int64 v6; // rcx

  v3 = *(VIDMM_RECYCLE_HEAP_MGR **)(*((_QWORD *)this + 4) + 8LL);
  if ( *(_QWORD *)this != 1LL )
    return 0;
  v5 = (struct VIDMM_RECYCLE_MULTIRANGE *)*((_QWORD *)a2 + 17);
  v6 = *((_QWORD *)this + 4);
  if ( v5 )
  {
    VIDMM_RECYCLE_HEAP::RemoveMultirangeFromTree(v6, 2, (__int64)v5);
    VIDMM_RECYCLE_HEAP_MGR::DestroyMultirange(v3, v5);
  }
  else
  {
    VIDMM_RECYCLE_HEAP::RemoveRangeFromTree(v6, 2LL, a2);
  }
  VIDMM_RECYCLE_HEAP_MGR::DestroyRange(v3, a2);
  return 1;
}
