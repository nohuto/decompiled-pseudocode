void __fastcall SysMmQueryIommuState(const struct SYSMM_ADAPTER *a1, union SYSMM_IOMMU_STATE *a2)
{
  BOOL v2; // eax
  int v3; // r8d

  *(_DWORD *)a2 = 0;
  v2 = *((_DWORD *)a1 + 24) != 0;
  *(_DWORD *)a2 = v2;
  v3 = v2 | (2 * (*((_DWORD *)a1 + 23) & 1));
  *(_DWORD *)a2 = v3;
  *(_DWORD *)a2 = v3 | (2 * (*((_DWORD *)a1 + 23) & 2));
}
