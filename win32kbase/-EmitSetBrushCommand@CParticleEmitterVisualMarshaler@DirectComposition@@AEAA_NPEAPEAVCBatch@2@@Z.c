/*
 * XREFs of ?EmitSetBrushCommand@CParticleEmitterVisualMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C025537C
 * Callers:
 *     ?EmitUpdateCommands@CParticleEmitterVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C025A5A0 (-EmitUpdateCommands@CParticleEmitterVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0064740 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CParticleEmitterVisualMarshaler::EmitSetBrushCommand(
        DirectComposition::CParticleEmitterVisualMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  int v3; // edi
  char *v4; // rcx
  __int64 v5; // rax
  void *v7; // [rsp+30h] [rbp+8h] BYREF

  if ( (*((_DWORD *)this + 137) & 0x40) == 0 )
    return 1;
  v3 = 0;
  v7 = 0LL;
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v7) )
  {
    v4 = (char *)v7;
    *(_DWORD *)v7 = 16;
    *(_QWORD *)(v4 + 4) = 0LL;
    *((_DWORD *)v4 + 3) = 0;
    *((_DWORD *)v4 + 1) = 570;
    *((_DWORD *)v4 + 2) = *((_DWORD *)this + 8);
    v5 = *((_QWORD *)this + 50);
    if ( v5 )
      v3 = *(_DWORD *)(v5 + 32);
    *((_DWORD *)v4 + 3) = v3;
    *((_DWORD *)this + 137) &= ~0x40u;
    return 1;
  }
  return 0;
}
