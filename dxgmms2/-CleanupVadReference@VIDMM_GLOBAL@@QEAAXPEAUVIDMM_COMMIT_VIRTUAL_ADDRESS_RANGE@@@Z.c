void __fastcall VIDMM_GLOBAL::CleanupVadReference(VIDMM_GLOBAL *this, struct VIDMM_COMMIT_VIRTUAL_ADDRESS_RANGE *a2)
{
  struct _LIST_ENTRY *v3; // rdx
  unsigned int v4; // edx

  v3 = (struct _LIST_ENTRY *)*((_QWORD *)a2 + 4);
  if ( v3 )
  {
    VIDMM_GLOBAL::RemoveFromPenaltyBoxByListEntry(this, v3);
    VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference(*((VIDMM_MAPPED_VA_RANGE **)a2 + 1), v4);
    operator delete(*((void **)a2 + 4));
    *((_QWORD *)a2 + 4) = 0LL;
    *(_QWORD *)a2 = 0LL;
    *((_QWORD *)a2 + 1) = 0LL;
  }
}
