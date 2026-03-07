void __fastcall VIDMM_GLOBAL::UnmapGpuVA(
        VIDMM_GLOBAL *this,
        struct VIDMM_PROCESS *a2,
        VIDMM_FENCE_STORAGE_PAGE **a3,
        unsigned int a4,
        bool a5)
{
  if ( a2 )
    goto LABEL_2;
  if ( *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 2) + 744LL) + 55LL) )
  {
    a2 = (struct VIDMM_PROCESS *)*((_QWORD *)this + 5048);
LABEL_2:
    VIDMM_FENCE_STORAGE_PAGE::UnmapGpuVA(*a3, this, a2, a4, a5);
  }
}
