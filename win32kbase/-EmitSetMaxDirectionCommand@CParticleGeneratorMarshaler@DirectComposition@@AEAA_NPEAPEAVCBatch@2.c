/*
 * XREFs of ?EmitSetMaxDirectionCommand@CParticleGeneratorMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0256D5C
 * Callers:
 *     ?EmitUpdateCommands@CParticleGeneratorMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C025A7D0 (-EmitUpdateCommands@CParticleGeneratorMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0064740 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CParticleGeneratorMarshaler::EmitSetMaxDirectionCommand(
        DirectComposition::CParticleGeneratorMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char *v3; // rcx
  void *v5; // [rsp+30h] [rbp+8h] BYREF

  if ( (*((_DWORD *)this + 4) & 0x40) == 0 )
    return 1;
  v5 = 0LL;
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x18uLL, &v5) )
  {
    v3 = (char *)v5;
    *(_DWORD *)v5 = 24;
    *(_OWORD *)(v3 + 4) = 0LL;
    *((_DWORD *)v3 + 5) = 0;
    *((_DWORD *)v3 + 1) = 592;
    *((_DWORD *)v3 + 2) = *((_DWORD *)this + 8);
    *(_QWORD *)(v3 + 12) = *(_QWORD *)((char *)this + 68);
    *((_DWORD *)v3 + 5) = *((_DWORD *)this + 19);
    *((_DWORD *)this + 4) &= ~0x40u;
    return 1;
  }
  return 0;
}
