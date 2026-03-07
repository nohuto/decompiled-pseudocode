int __fastcall VIDMM_GLOBAL::RecommitSystemFenceGpuVA(VIDMM_GLOBAL *this, unsigned int a2)
{
  VIDMM_DEVICE *v2; // rdi
  __int64 v3; // rbx
  int result; // eax

  v2 = (VIDMM_DEVICE *)*((_QWORD *)this + 5049);
  v3 = a2;
  result = VIDMM_FENCE_STORAGE_PAGE::RecommitSystemGpuVA(
             *(VIDMM_FENCE_STORAGE_PAGE **)(*((_QWORD *)this + v3 + 749) + 56LL),
             this,
             *((struct VIDMM_DEVICE **)this + v3 + 749),
             *((struct VIDMM_PROCESS **)this + 5048),
             v3);
  if ( result >= 0 )
    return VIDMM_DEVICE::RecommitPagingQueueSystemGpuVAs(v2, v3);
  return result;
}
