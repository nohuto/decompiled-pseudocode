/*
 * XREFs of ?PrivateEmitUpdateCommand@CCrossContainerGuestReadWriteSharedSectionMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0261B4C
 * Callers:
 *     ?EmitUpdateCommands@CCrossContainerGuestReadWriteSharedSectionMarshaler@DirectComposition@@EEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0261AC0 (-EmitUpdateCommands@CCrossContainerGuestReadWriteSharedSectionMarshaler@DirectComposition@@EEAA_.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0064740 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?CreateDwmHandle@CDCompMappedSharedSectionMarshaler@DirectComposition@@MEAAPEAXXZ @ 0x1C00916C0 (-CreateDwmHandle@CDCompMappedSharedSectionMarshaler@DirectComposition@@MEAAPEAXXZ.c)
 */

char __fastcall DirectComposition::CCrossContainerGuestReadWriteSharedSectionMarshaler::PrivateEmitUpdateCommand(
        DirectComposition::CCrossContainerGuestReadWriteSharedSectionMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char *v3; // rbx
  void *v5; // [rsp+40h] [rbp+18h] BYREF

  v5 = 0LL;
  if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x1CuLL, &v5) )
    return 0;
  v3 = (char *)v5;
  *(_DWORD *)v5 = 28;
  *(_OWORD *)(v3 + 4) = 0LL;
  *(_QWORD *)(v3 + 20) = 0LL;
  *((_DWORD *)v3 + 1) = 461;
  *((_DWORD *)v3 + 2) = *((_DWORD *)this + 8);
  *(_QWORD *)(v3 + 12) = DirectComposition::CDCompMappedSharedSectionMarshaler::CreateDwmHandle((PVOID *)this);
  *((_DWORD *)v3 + 5) = *((_DWORD *)this + 16);
  return 1;
}
