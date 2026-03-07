__int64 __fastcall SmmIommuSwitchToGpuVaIoMmu(__int64 a1)
{
  __int64 v1; // r12
  char v3; // r14
  int PasidDomain; // eax
  int v5; // edi
  __int64 v6; // r15
  const wchar_t *v7; // r9

  v1 = *(_QWORD *)(a1 + 112);
  v3 = 0;
  PasidDomain = SmmIommuCreatePasidDomain();
  v5 = PasidDomain;
  if ( PasidDomain < 0 )
  {
    v6 = PasidDomain;
    WdLogSingleEntry2(2LL, a1, PasidDomain);
    v7 = L"Failed to create IOMMU domain. SysMmAdapter=0x%.16I64x, Status=0x%.8x";
  }
  else
  {
    SmmAssignDomain(a1, 0LL, 0);
    v5 = SmmMapExistingMemoryToDomain(a1);
    if ( v5 < 0 )
      return (unsigned int)v5;
    if ( *(_QWORD *)(a1 + 352) )
    {
      v5 = (*(__int64 (__fastcall **)(__int64))(a1 + 320))(a1);
      if ( v5 < 0 )
        return (unsigned int)v5;
      v3 = 1;
    }
    if ( (dword_1C013BCE4 & 1) != 0 )
    {
      WdLogSingleEntry1(2LL, a1);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Verifier fault: Fail to attach to Pasid domain. SysMmAdapter=0x%.16I64x",
        a1,
        0LL,
        0LL,
        0LL,
        0LL);
      v5 = -1073741823;
    }
    else
    {
      v5 = SmmSwapDomains(a1, *(_QWORD *)(a1 + 112), v1);
      if ( v5 >= 0 )
        return (unsigned int)v5;
    }
    v6 = v5;
    WdLogSingleEntry2(2LL, a1, v5);
    v7 = L"Failed to swap/attach IOMMU domains. SysMmAdapter=0x%.16I64x, Status=0x%.8x";
  }
  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v7, a1, v6, 0LL, 0LL, 0LL);
  if ( v3 )
  {
    if ( !*(_QWORD *)(a1 + 352) )
    {
      WdLogSingleEntry1(1LL, 2409LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pAdapter->Iommu.CallbackContext != nullptr",
        2409LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))(a1 + 328))(a1, *(_QWORD *)(a1 + 352));
  }
  return (unsigned int)v5;
}
