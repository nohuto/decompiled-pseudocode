/*
 * XREFs of ?EmitUpdateMouseConfiguration@CInteractionConfigurationGroup@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00AC2C8
 * Callers:
 *     ?EmitUpdateCommands@CInteractionConfigurationGroup@DirectComposition@@QEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00AC1BC (-EmitUpdateCommands@CInteractionConfigurationGroup@DirectComposition@@QEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0064740 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CInteractionConfigurationGroup::EmitUpdateMouseConfiguration(
        DirectComposition::CInteractionConfigurationGroup *this,
        struct DirectComposition::CBatch ***a2)
{
  char *v4; // r8
  void *v5; // [rsp+30h] [rbp+8h] BYREF

  if ( (*((_DWORD *)this + 3) & 1) == 0 )
    return 1;
  v5 = 0LL;
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x1CuLL, &v5) )
  {
    v4 = (char *)v5;
    *(_DWORD *)v5 = 28;
    *(_OWORD *)(v4 + 4) = 0LL;
    *((_DWORD *)v4 + 5) = 0;
    *((_DWORD *)v4 + 1) = 195;
    *((_DWORD *)v4 + 2) = *(_DWORD *)(*(_QWORD *)this + 32LL);
    *((_DWORD *)v4 + 3) = 1;
    *((_DWORD *)v4 + 4) = *((_DWORD *)this + 2);
    *((_DWORD *)v4 + 5) = 4;
    *((_DWORD *)v4 + 6) = *((_DWORD *)this + 21);
    *((_DWORD *)this + 3) &= ~1u;
    return 1;
  }
  return 0;
}
