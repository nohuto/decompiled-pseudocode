void __fastcall SmmUnmapMdlFromIommu(struct SYSMM_IOMMU *a1, __int64 a2, struct _MDL *a3, char a4)
{
  if ( !a4 || (*((_DWORD *)a1 + 7) & 1) != 0 )
    SmmUnmapIommu((__int64)a1, a2, (__int64)a3);
  else
    SmmIommuUnmapReferenced((__int64)a1, (__int64)a3);
}
