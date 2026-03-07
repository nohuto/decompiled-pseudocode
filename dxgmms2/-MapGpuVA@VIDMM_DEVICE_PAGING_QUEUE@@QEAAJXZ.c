__int64 __fastcall VIDMM_DEVICE_PAGING_QUEUE::MapGpuVA(VIDMM_DEVICE_PAGING_QUEUE *this)
{
  int v1; // eax
  unsigned int v2; // ecx

  v1 = VIDMM_GLOBAL::MapGpuVA(
         **((struct VIDMM_DEVICE ****)this + 17),
         *(struct VIDMM_DEVICE **)(**((_QWORD **)this + 17) + 40392LL),
         *(struct VIDMM_PROCESS **)(**((_QWORD **)this + 17) + 40384LL),
         (VIDMM_FENCE_STORAGE_PAGE **)(*((_QWORD *)this + 19) + 56LL),
         (unsigned __int64 *)this + 21,
         1 << *((_DWORD *)this + 40),
         1);
  v2 = 0;
  if ( v1 < 0 )
    return (unsigned int)v1;
  return v2;
}
