/*
 * XREFs of ?EmitSetPlaybackRateCommand@CAnimationControllerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C005E6D8
 * Callers:
 *     ?EmitUpdateCommands@CAnimationControllerMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C005E640 (-EmitUpdateCommands@CAnimationControllerMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0064740 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CAnimationControllerMarshaler::EmitSetPlaybackRateCommand(
        DirectComposition::CAnimationControllerMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char *v4; // rcx
  void *v5; // [rsp+30h] [rbp+8h] BYREF

  if ( (*((_DWORD *)this + 4) & 0x200) == 0 )
    return 1;
  v5 = 0LL;
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v5) )
  {
    v4 = (char *)v5;
    *(_DWORD *)v5 = 16;
    *(_QWORD *)(v4 + 4) = 0LL;
    *((_DWORD *)v4 + 3) = 0;
    *((_DWORD *)v4 + 1) = 481;
    *((_DWORD *)v4 + 2) = *((_DWORD *)this + 8);
    *((_DWORD *)v4 + 3) = *((_DWORD *)this + 25);
    *((_DWORD *)this + 4) &= ~0x200u;
    return 1;
  }
  return 0;
}
