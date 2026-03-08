/*
 * XREFs of IopLiveDumpReleaseResources @ 0x14094BEA8
 * Callers:
 *     IoCaptureLiveDump @ 0x140948A78 (IoCaptureLiveDump.c)
 *     IoDiscardDeferredLiveDumpData @ 0x140949308 (IoDiscardDeferredLiveDumpData.c)
 *     IoWriteDeferredLiveDumpData @ 0x140949354 (IoWriteDeferredLiveDumpData.c)
 *     IopLiveDumpAllocAndInitResources @ 0x1409495FC (IopLiveDumpAllocAndInitResources.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ObCloseHandle @ 0x1407F0D20 (ObCloseHandle.c)
 *     MmFreeIndependentPages @ 0x14087B250 (MmFreeIndependentPages.c)
 *     IopLiveDumpFreeDumpBuffers @ 0x14094B0B8 (IopLiveDumpFreeDumpBuffers.c)
 *     IopLiveDumpFreeMappingResources @ 0x14094B3F0 (IopLiveDumpFreeMappingResources.c)
 *     IopLiveDumpFreeProcessFilters @ 0x14094B484 (IopLiveDumpFreeProcessFilters.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall IopLiveDumpReleaseResources(__int64 a1)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rcx
  void *v10; // rcx
  void *v11; // rcx
  void *v12; // rcx
  void *v13; // rcx
  void *v14; // rcx
  PVOID *v15; // rcx
  unsigned int i; // edi
  void *v17; // rcx
  void *v18; // rcx

  if ( a1 )
  {
    if ( (*(_DWORD *)(a1 + 80) & 0x8000) != 0 )
      IopLiveDumpFreeProcessFilters(a1);
    IopLiveDumpFreeMappingResources(a1);
    v2 = *(void **)(a1 + 1168);
    if ( v2 )
    {
      ExFreePoolWithTag(v2, 0x706D644Cu);
      *(_QWORD *)(a1 + 1168) = 0LL;
    }
    v3 = *(void **)(a1 + 560);
    if ( v3 )
    {
      ExFreePoolWithTag(v3, 0x706D644Cu);
      *(_QWORD *)(a1 + 560) = 0LL;
    }
    v4 = *(void **)(a1 + 592);
    if ( v4 )
    {
      ExFreePoolWithTag(v4, 0x706D644Cu);
      *(_QWORD *)(a1 + 592) = 0LL;
    }
    v5 = *(void **)(a1 + 648);
    if ( v5 )
    {
      ExFreePoolWithTag(v5, 0x706D644Cu);
      *(_QWORD *)(a1 + 648) = 0LL;
    }
    v6 = *(void **)(a1 + 672);
    if ( v6 )
    {
      ExFreePoolWithTag(v6, 0x706D644Cu);
      *(_QWORD *)(a1 + 672) = 0LL;
    }
    v7 = *(_QWORD *)(a1 + 144);
    if ( v7 )
    {
      MmFreeIndependentPages(v7, *(unsigned int *)(a1 + 152));
      *(_QWORD *)(a1 + 144) = 0LL;
    }
    v8 = *(_QWORD *)(a1 + 1048);
    if ( v8 )
    {
      MmFreeIndependentPages(v8, *(unsigned int *)(a1 + 1056));
      *(_QWORD *)(a1 + 1048) = 0LL;
    }
    v9 = *(_QWORD *)(a1 + 1000);
    if ( v9 )
    {
      MmFreeIndependentPages(v9, *(unsigned int *)(a1 + 1008));
      *(_QWORD *)(a1 + 1000) = 0LL;
    }
    IopLiveDumpFreeDumpBuffers(a1);
    v10 = *(void **)(a1 + 904);
    if ( v10 )
    {
      ZwClose(v10);
      *(_QWORD *)(a1 + 904) = 0LL;
    }
    v11 = *(void **)(a1 + 912);
    if ( v11 )
    {
      ZwClose(v11);
      *(_QWORD *)(a1 + 912) = 0LL;
    }
    v12 = *(void **)(a1 + 920);
    if ( v12 )
    {
      ZwClose(v12);
      *(_QWORD *)(a1 + 920) = 0LL;
    }
    v13 = *(void **)(a1 + 1104);
    if ( v13 )
    {
      ObfDereferenceObject(v13);
      *(_QWORD *)(a1 + 1104) = 0LL;
    }
    v14 = *(void **)(a1 + 1096);
    if ( v14 != (void *)-1LL )
    {
      ObCloseHandle(v14, 0);
      *(_QWORD *)(a1 + 1096) = 0LL;
    }
    v15 = *(PVOID **)(a1 + 1120);
    if ( v15 )
    {
      for ( i = 0; i < *(_DWORD *)(a1 + 1112); ++i )
      {
        if ( v15[i] )
        {
          ExFreePoolWithTag(v15[i], 0x706D644Cu);
          *(_QWORD *)(*(_QWORD *)(a1 + 1120) + 8LL * i) = 0LL;
          v15 = *(PVOID **)(a1 + 1120);
        }
      }
      ExFreePoolWithTag(v15, 0x706D644Cu);
      *(_QWORD *)(a1 + 1120) = 0LL;
      *(_DWORD *)(a1 + 1112) = 0;
    }
    v17 = *(void **)(a1 + 1128);
    if ( v17 )
    {
      ExFreePoolWithTag(v17, 0x706D644Cu);
      *(_QWORD *)(a1 + 1128) = 0LL;
    }
    v18 = *(void **)(a1 + 1136);
    if ( v18 )
    {
      ExFreePoolWithTag(v18, 0x706D644Cu);
      *(_QWORD *)(a1 + 1136) = 0LL;
    }
  }
}
