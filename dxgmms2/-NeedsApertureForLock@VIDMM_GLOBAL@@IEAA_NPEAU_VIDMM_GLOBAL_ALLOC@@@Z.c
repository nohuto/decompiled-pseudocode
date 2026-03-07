bool __fastcall VIDMM_GLOBAL::NeedsApertureForLock(VIDMM_GLOBAL *this, struct _VIDMM_GLOBAL_ALLOC *a2)
{
  int v2; // eax

  v2 = *((_DWORD *)a2 + 17);
  if ( (v2 & 0x1E0000) == 0 || (v2 & 0x1E0000) == 0x40000 )
    return *(_BYTE *)(1616LL * (v2 & 0x3F) + *((_QWORD *)this + 5028) + 446) & 1;
  else
    return 0;
}
