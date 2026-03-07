__int64 __fastcall SysMmFinalizeInitialization(
        __int64 a1,
        __int64 a2,
        unsigned __int8 a3,
        unsigned __int8 a4,
        __int64 a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int *a8)
{
  int v8; // ebp
  unsigned __int8 v9; // si
  __int64 v10; // r13
  int v13; // r14d
  __int64 result; // rax
  int v15; // edx
  unsigned int v16; // ecx
  unsigned int v17; // esi
  _BYTE v18[16]; // [rsp+50h] [rbp-38h] BYREF

  v8 = 0;
  v9 = a3;
  v10 = a4;
  v13 = 0;
  *a8 = 0;
  if ( !*(_QWORD *)(a1 + 384) && a5 )
  {
    result = SmmCreateHardwareReservedRanges(a1, a5, a6);
    v13 = result;
    if ( (int)result < 0 )
      return result;
    if ( *(_DWORD *)(a1 + 96) )
    {
      if ( (*(_DWORD *)(a1 + 92) & 1) != 0 )
      {
        WdLogSingleEntry1(1LL, 881LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"pAdapter->Iommu.Flags.DmaRemappingEnabled == 0",
          881LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      SYSMM_AUTO_DOMAIN_LOCK_SHARED::SYSMM_AUTO_DOMAIN_LOCK_SHARED(
        (SYSMM_AUTO_DOMAIN_LOCK_SHARED *)v18,
        (struct SYSMM_IOMMU *)(a1 + 64));
      v17 = 0;
      if ( *(_DWORD *)(a1 + 28) )
      {
        while ( 1 )
        {
          v13 = SmmMapHardwareReservedRangeToIommu(
                  (const struct SYSMM_LOGICAL_BLOCK **)(*(_QWORD *)(a1 + 384) + 24LL * v17),
                  (struct SYSMM_IOMMU *)(a1 + 64));
          if ( v13 < 0 )
            break;
          if ( ++v17 >= *(_DWORD *)(a1 + 28) )
            goto LABEL_17;
        }
        SYSMM_AUTO_DOMAIN_LOCK_SHARED::~SYSMM_AUTO_DOMAIN_LOCK_SHARED((SYSMM_AUTO_DOMAIN_LOCK_SHARED *)v18);
        return (unsigned int)v13;
      }
LABEL_17:
      SYSMM_AUTO_DOMAIN_LOCK_SHARED::~SYSMM_AUTO_DOMAIN_LOCK_SHARED((SYSMM_AUTO_DOMAIN_LOCK_SHARED *)v18);
      v9 = a3;
    }
  }
  v15 = *(_DWORD *)(a1 + 20);
  if ( (v15 & 2) != 0 )
  {
    v16 = v9 | *(_DWORD *)(a1 + 88) & 0xFFFFFFFE;
    *(_QWORD *)(a1 + 8) = a2;
    *(_DWORD *)(a1 + 88) = (2 * v10) & 0xFFFFFFFB | v16 & 0xFFFFFFF9;
    if ( (v15 & 1) == 0 )
    {
      if ( (_BYTE)v10 )
      {
        v13 = SysMmEnableIommu(a1, 32LL);
      }
      else if ( a7 )
      {
        v13 = SysMmEnableIommu(a1, 8LL);
        if ( v13 >= 0 || a7 == 1 )
          goto LABEL_10;
LABEL_19:
        WdLogSingleEntry3(2LL, v9, v10, a7);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed to enable IOMMU via legacy initialization. IommuSupported=%u, Required=%u, LegacyFlagMode=%u",
          v9,
          v10,
          a7,
          0LL,
          0LL);
        return (unsigned int)v13;
      }
    }
    if ( v13 >= 0 )
      goto LABEL_10;
    goto LABEL_19;
  }
LABEL_10:
  LOBYTE(v8) = *(_DWORD *)(a1 + 96) != 0;
  *a8 = (*a8 & 0xFFFFFFFE | v8) ^ ((unsigned __int8)(2 * *(_DWORD *)(a1 + 92)) ^ (unsigned __int8)(*(_BYTE *)a8 | v8)) & 2;
  return 0LL;
}
