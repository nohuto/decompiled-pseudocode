void __fastcall SmmDomainTypeStateChangeCallback(struct _IOMMU_INTERFACE_STATE_CHANGE *a1, _DWORD *a2)
{
  SmmAcquirePushLockExclusive<66>();
  if ( (a2[25] & 2) == 0 && (*((_DWORD *)a1 + 1) & 2) != 0 )
  {
    if ( (a2[24] & 1) == 0 )
    {
      WdLogSingleEntry1(1LL, 2583LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"(pAdapter->Iommu.EnablementBitmask & SYSMM_IOMMU_ENABLEMENT_REASON_DMA_REMAPPING_POLICY) != 0",
        2583LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( (int)SysMmDisableIommu(a2, 1LL) < 0 )
    {
      WdLogSingleEntry1(1LL, 2591LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"(((NTSTATUS)(Status)) >= 0)", 2591LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  a2[25] = *((_DWORD *)a1 + 1);
  SmmReleasePushLockExclusive<66>();
}
