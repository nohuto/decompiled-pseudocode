bool __fastcall VIDMM_GLOBAL::IsAllocationTerminated(VIDMM_GLOBAL *this, struct _VIDMM_MULTI_ALLOC *a2)
{
  return (*((_DWORD *)a2 + 7) & 4) != 0
      && !VIDMM_GLOBAL::IsPagingOperationPending(this, **(struct _VIDMM_GLOBAL_ALLOC ***)a2, 0);
}
