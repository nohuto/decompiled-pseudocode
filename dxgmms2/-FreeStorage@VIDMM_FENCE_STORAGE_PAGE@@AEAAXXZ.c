void __fastcall VIDMM_FENCE_STORAGE_PAGE::FreeStorage(VIDMM_FENCE_STORAGE_PAGE *this)
{
  PMDL *v2; // rdi
  void *v3; // rcx
  void *v4; // rcx

  VIDMM_FENCE_STORAGE_PAGE::FreeVmMapping(this);
  v2 = (PMDL *)((char *)this + 120);
  if ( *((_BYTE *)this + 136) )
  {
    MmUnlockPages(*v2);
    *((_BYTE *)this + 136) = 0;
  }
  if ( *v2 )
  {
    ExFreePoolWithTag(*v2, 0);
    *v2 = 0LL;
  }
  v3 = (void *)*((_QWORD *)this + 14);
  if ( v3 )
  {
    MmUnmapViewInSystemSpace(v3);
    *((_QWORD *)this + 14) = 0LL;
  }
  v4 = (void *)*((_QWORD *)this + 13);
  if ( v4 )
  {
    ObfDereferenceObject(v4);
    *((_QWORD *)this + 13) = 0LL;
  }
}
