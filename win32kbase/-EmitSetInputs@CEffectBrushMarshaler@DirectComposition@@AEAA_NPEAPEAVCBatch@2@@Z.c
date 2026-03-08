/*
 * XREFs of ?EmitSetInputs@CEffectBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00ADB94
 * Callers:
 *     ?EmitUpdateCommands@CEffectBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00ADA70 (-EmitUpdateCommands@CEffectBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0064740 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

bool __fastcall DirectComposition::CEffectBrushMarshaler::EmitSetInputs(
        DirectComposition::CEffectBrushMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char *v4; // rdx
  __int64 v5; // r8
  int v6; // eax
  void *v8; // [rsp+30h] [rbp+8h] BYREF

  for ( ; *((_DWORD *)this + 25) < *((_DWORD *)this + 24); ++*((_DWORD *)this + 25) )
  {
    v8 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x14uLL, &v8) )
      break;
    v4 = (char *)v8;
    *(_DWORD *)v8 = 20;
    *(_OWORD *)(v4 + 4) = 0LL;
    *((_DWORD *)v4 + 1) = 139;
    *((_DWORD *)v4 + 2) = *((_DWORD *)this + 8);
    *((_DWORD *)v4 + 3) = *((_DWORD *)this + 25);
    v5 = *(_QWORD *)(*((_QWORD *)this + 11) + 8LL * *((unsigned int *)this + 25));
    v6 = v5 ? *(_DWORD *)(v5 + 32) : 0;
    *((_DWORD *)v4 + 4) = v6;
  }
  return *((_DWORD *)this + 25) == *((_DWORD *)this + 24);
}
