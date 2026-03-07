void __fastcall SysMmUnmapIommuRange(struct SYSMM_ADAPTER *a1, unsigned __int64 a2, struct _MDL *a3, char a4)
{
  struct SYSMM_IOMMU *v4; // rdi
  bool v8; // r9
  _BYTE v9[24]; // [rsp+20h] [rbp-18h] BYREF

  v4 = (struct SYSMM_ADAPTER *)((char *)a1 + 64);
  SYSMM_AUTO_DOMAIN_LOCK_SHARED::SYSMM_AUTO_DOMAIN_LOCK_SHARED(
    (SYSMM_AUTO_DOMAIN_LOCK_SHARED *)v9,
    (struct SYSMM_ADAPTER *)((char *)a1 + 64));
  v8 = 0;
  if ( a4 || (dword_1C013BCE0 & 4) != 0 )
    v8 = 1;
  SmmUnmapMdlFromIommu(v4, a2, a3, v8);
  SYSMM_AUTO_DOMAIN_LOCK_SHARED::~SYSMM_AUTO_DOMAIN_LOCK_SHARED((SYSMM_AUTO_DOMAIN_LOCK_SHARED *)v9);
}
