__int64 __fastcall SmmSwapDomains(__int64 a1, struct _IOMMU_DMA_DOMAIN *a2, struct _IOMMU_DMA_DOMAIN *a3)
{
  int v6; // edi
  int v7; // eax

  if ( *(_QWORD *)(a1 + 352) )
    (*(void (**)(void))(a1 + 336))();
  if ( a3 )
    SmmDetachDomainFromAllDevices(a1, a3);
  v6 = SmmAttachDomainToAllDevices(a1, a2);
  if ( v6 < 0 )
  {
    if ( a3 )
    {
      v7 = SmmAttachDomainToAllDevices(a1, a3);
      v6 = v7;
      if ( v7 < 0 )
        WdLogSingleEntry5(0LL, 484LL, 10LL, a1, a2, v7);
    }
    WdLogSingleEntry3(3LL, a1, *(_QWORD *)(a1 + 112), v6);
  }
  if ( *(_QWORD *)(a1 + 352) )
    (*(void (__fastcall **)(__int64))(a1 + 344))(a1);
  return (unsigned int)v6;
}
