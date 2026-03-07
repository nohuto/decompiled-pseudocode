__int64 __fastcall SysMmMapIommuRange(struct SYSMM_ADAPTER *a1, __int64 a2, struct _MDL *a3, char a4)
{
  unsigned __int8 v4; // bl
  int v9; // edx
  int v10; // ecx
  int v11; // r8d
  unsigned int v12; // ebx
  _BYTE v14[16]; // [rsp+60h] [rbp-18h] BYREF

  v4 = 0;
  if ( (*((_DWORD *)a1 + 22) & 8) != 0 )
  {
    WdLogSingleEntry1(1LL, 3225LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v10,
          v9,
          v11,
          0,
          2,
          -1,
          (__int64)L"!pAdapter->Iommu.Caps.GpuVaIommuRequired",
          3225LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  SYSMM_AUTO_DOMAIN_LOCK_SHARED::SYSMM_AUTO_DOMAIN_LOCK_SHARED(
    (SYSMM_AUTO_DOMAIN_LOCK_SHARED *)v14,
    (struct SYSMM_ADAPTER *)((char *)a1 + 64));
  if ( a4 || (dword_1C013BCE0 & 4) != 0 )
    v4 = 1;
  v12 = SmmMapMdlToIommu((struct SYSMM_ADAPTER *)((char *)a1 + 64), a2, a3, v4);
  SYSMM_AUTO_DOMAIN_LOCK_SHARED::~SYSMM_AUTO_DOMAIN_LOCK_SHARED((SYSMM_AUTO_DOMAIN_LOCK_SHARED *)v14);
  return v12;
}
