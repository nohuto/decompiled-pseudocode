void __fastcall VIDMM_DEVICE_PAGING_QUEUE::UnmapGpuVA(VIDMM_DEVICE_PAGING_QUEUE *this)
{
  bool v2; // zf
  struct VIDMM_PROCESS **v3; // rcx

  v2 = *((_QWORD *)this + 21) == 0LL;
  v3 = (struct VIDMM_PROCESS **)**((_QWORD **)this + 17);
  if ( !v2 )
  {
    VIDMM_GLOBAL::UnmapGpuVA(
      (VIDMM_GLOBAL *)v3,
      v3[5048],
      (VIDMM_FENCE_STORAGE_PAGE **)(*((_QWORD *)this + 19) + 56LL),
      *((_DWORD *)this + 40),
      1);
    *((_QWORD *)this + 21) = 0LL;
  }
}
