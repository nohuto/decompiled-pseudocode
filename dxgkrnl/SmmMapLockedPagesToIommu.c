__int64 __fastcall SmmMapLockedPagesToIommu(__int64 a1, __int64 a2, __int64 a3, struct _MDL *a4)
{
  unsigned int v8; // edi
  __int64 LogicalAddress; // rax
  _BYTE v11[40]; // [rsp+20h] [rbp-28h] BYREF

  SYSMM_AUTO_DOMAIN_LOCK_SHARED::SYSMM_AUTO_DOMAIN_LOCK_SHARED(
    (SYSMM_AUTO_DOMAIN_LOCK_SHARED *)v11,
    (struct SYSMM_IOMMU *)(a1 + 64));
  v8 = 0;
  if ( !*(_DWORD *)(a1 + 104) )
  {
    LogicalAddress = SmmGetLogicalAddress(*(const struct SYSMM_LOGICAL_BLOCK **)(a3 + 24));
    if ( (*(_DWORD *)(a2 + 44) & 0x200) != 0 || (dword_1C013BCE0 & 4) != 0 )
      LOBYTE(v8) = 1;
    v8 = SmmMapMdlToIommu((struct SYSMM_IOMMU *)(a1 + 64), LogicalAddress, a4, v8);
  }
  SYSMM_AUTO_DOMAIN_LOCK_SHARED::~SYSMM_AUTO_DOMAIN_LOCK_SHARED((SYSMM_AUTO_DOMAIN_LOCK_SHARED *)v11);
  return v8;
}
