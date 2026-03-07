struct _MDL *__fastcall VIDMM_PAGE_TABLE_BASE::GetSegmentAddressMdl(VIDMM_PAGE_TABLE_BASE *this)
{
  __int64 v1; // rcx
  struct _VIDMM_GLOBAL_ALLOC *v2; // rcx

  if ( VIDMM_PAGE_TABLE_BASE::IsResident(this)
    && (v2 = *(struct _VIDMM_GLOBAL_ALLOC **)(v1 + 16), (*(_DWORD *)(*((_QWORD *)v2 + 15) + 80LL) & 0x1000) != 0) )
  {
    return VidMmGetFullMDL(v2, 0LL);
  }
  else
  {
    return 0LL;
  }
}
