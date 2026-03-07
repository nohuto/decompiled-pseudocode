void __fastcall SmmClosePhysicalObject(__int64 *a1, __int64 a2, int a3)
{
  __int64 *v3; // rdi
  __int64 v4; // rsi
  KIRQL v6; // al
  __int64 *v7; // r8
  __int64 **v8; // rdx
  int v9; // edx
  int v10; // ecx
  int v11; // r8d
  __int64 v12; // r8
  _BYTE v13[16]; // [rsp+60h] [rbp-18h] BYREF

  v3 = a1 - 8;
  v4 = a1[2];
  if ( (Microsoft_Windows_DxgKrnl_SysMmEnableBits & 1) != 0 )
    McTemplateK0ppp_EtwWriteTransfer(
      (unsigned int)&SysMmControlGuid_Context,
      (unsigned int)&ClosePhysicalObject,
      a3,
      v4,
      (_BYTE)a1 - 64,
      (char)a1);
  if ( (dword_1C013BCE0 & 0x20) != 0 && *(_QWORD *)v3[3] != v3[3] )
  {
    WdLogSingleEntry1(1LL, 154LL);
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
          (__int64)L"IsListEmpty(&pPhysicalObject->Debug->AdlListHead)",
          154LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  SYSMM_AUTO_DOMAIN_LOCK_SHARED::SYSMM_AUTO_DOMAIN_LOCK_SHARED(
    (SYSMM_AUTO_DOMAIN_LOCK_SHARED *)v13,
    (struct SYSMM_IOMMU *)(v4 + 64));
  v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v4 + 36));
  v7 = (__int64 *)*a1;
  if ( *(__int64 **)(*a1 + 8) != a1 || (v8 = (__int64 **)a1[1], *v8 != a1) )
    __fastfail(3u);
  *v8 = v7;
  v7[1] = (__int64)v8;
  ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v4 + 36), v6);
  a1[2] = 0LL;
  if ( !*(_DWORD *)(v4 + 104) )
  {
    v12 = v4 + 64;
    if ( (*((_DWORD *)v3 + 11) & 1) != 0 )
      SmmUnmapNonPagedObjectFromIommu(v3, a1, v12);
    else
      SmmUnmapPagedObjectFromIommu(v3, a1, v12);
  }
  SYSMM_AUTO_DOMAIN_LOCK_SHARED::~SYSMM_AUTO_DOMAIN_LOCK_SHARED((SYSMM_AUTO_DOMAIN_LOCK_SHARED *)v13);
  if ( (*(_DWORD *)(v4 + 92) & 1) != 0 && (dword_1C013BCE0 & 0x18) == 0 )
    SmmFreeLogicalAddress(*(struct SYSMM_LOGICAL_ALLOCATOR **)(v4 + 368), (struct SYSMM_LOGICAL_BLOCK *)a1[3]);
  SysMmUnreferencePhysicalObject((struct SYSMM_PHYSICAL_OBJECT *)v3);
}
