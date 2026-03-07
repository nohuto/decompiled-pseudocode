bool __fastcall VidMmIsAllocationSysmemOnlyThunk(struct _VIDMM_MULTI_ALLOC *a1)
{
  return (*(_DWORD *)(**(_QWORD **)a1 + 68LL) & 0x80) != 0;
}
