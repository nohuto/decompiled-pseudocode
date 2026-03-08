/*
 * XREFs of ?EmitSetSeek@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00B30F0
 * Callers:
 *     ?EmitUpdateCommands@CAnimationMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00B2EB0 (-EmitUpdateCommands@CAnimationMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0064740 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CAnimationMarshaler::EmitSetSeek(
        DirectComposition::CAnimationMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char *v3; // rdx
  void *v5; // [rsp+30h] [rbp+8h] BYREF

  if ( (*((_DWORD *)this + 8) & 0x8000) == 0 )
    return 1;
  v5 = 0LL;
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x1CuLL, &v5) )
  {
    v3 = (char *)v5;
    *(_DWORD *)v5 = 28;
    *(_OWORD *)(v3 + 4) = 0LL;
    *(_QWORD *)(v3 + 20) = 0LL;
    *((_DWORD *)v3 + 1) = 10;
    *((_DWORD *)v3 + 2) = *((_DWORD *)this + 12);
    *(_QWORD *)(v3 + 12) = *(_QWORD *)(*((_QWORD *)this + 10) + 32LL);
    *(_QWORD *)(v3 + 20) = *(_QWORD *)(*((_QWORD *)this + 10) + 40LL);
    *((_DWORD *)this + 8) &= ~0x8000u;
    return 1;
  }
  return 0;
}
