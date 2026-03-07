__int64 __fastcall SmmAttachDomainToAllDevices(__int64 a1, struct _IOMMU_DMA_DOMAIN *a2)
{
  __int64 v2; // rbx
  __int64 v5; // rsi
  __int64 v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // r14
  int v9; // eax

  v2 = 0LL;
  LODWORD(v5) = 0;
  LODWORD(v6) = 0;
  if ( *(_DWORD *)(a1 + 24) )
  {
    while ( 1 )
    {
      v7 = *(_QWORD *)(a1 + 376) + 16LL * (unsigned int)v6;
      v8 = (unsigned int)v6;
      v9 = SysMmIommuAttach(*(struct _DEVICE_OBJECT **)(v7 + 8), a2, *(struct _IOMMU_DMA_DEVICE **)v7);
      v5 = v9;
      if ( v9 < 0 )
        break;
      LODWORD(v6) = v6 + 1;
      if ( (unsigned int)v6 >= *(_DWORD *)(a1 + 24) )
        return (unsigned int)v5;
    }
    if ( (_DWORD)v6 )
    {
      v6 = (unsigned int)v6;
      do
      {
        SysMmIommuDetach(
          *(struct _DEVICE_OBJECT **)(v2 + *(_QWORD *)(a1 + 376) + 8),
          a2,
          *(struct _IOMMU_DMA_DEVICE **)(v2 + *(_QWORD *)(a1 + 376)));
        v2 += 16LL;
        --v6;
      }
      while ( v6 );
    }
    WdLogSingleEntry2(3LL, v8, v5);
  }
  return (unsigned int)v5;
}
