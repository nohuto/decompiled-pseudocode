void __fastcall VIDMM_GLOBAL::DestroyPagingFenceObjects(struct VIDMM_PROCESS **this, __int64 a2)
{
  __int64 i; // rdi
  _VIDSCH_SYNC_OBJECT *v4; // rcx

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 1754); i = (unsigned int)(i + 1) )
  {
    if ( *(_BYTE *)(*((_QWORD *)this[2] + 93) + 55LL) && this[i + 813] )
      VIDMM_GLOBAL::UnmapGpuVA((VIDMM_GLOBAL *)this, this[5048], (VIDMM_FENCE_STORAGE_PAGE **)this[i + 749] + 7, i, 1);
    v4 = this[i + 749];
    if ( v4 )
    {
      VidSchDestroySyncObject(v4, a2);
      this[i + 749] = 0LL;
    }
  }
}
