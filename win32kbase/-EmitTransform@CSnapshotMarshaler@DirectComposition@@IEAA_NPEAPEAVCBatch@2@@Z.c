/*
 * XREFs of ?EmitTransform@CSnapshotMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0262528
 * Callers:
 *     ?EmitUpdateCommands@CSnapshotMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0262680 (-EmitUpdateCommands@CSnapshotMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0064740 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     memset @ 0x1C00E1980 (memset.c)
 */

char __fastcall DirectComposition::CSnapshotMarshaler::EmitTransform(
        DirectComposition::CSnapshotMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char *v3; // rax
  char *v4; // rbx
  void *v6; // [rsp+30h] [rbp+8h] BYREF

  if ( (*((_DWORD *)this + 4) & 0x20) == 0 )
    return 1;
  v6 = 0LL;
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x4CuLL, &v6) )
  {
    v3 = (char *)v6;
    *(_DWORD *)v6 = 76;
    v4 = v3 + 4;
    memset(v3 + 4, 0, 0x48uLL);
    *(_DWORD *)v4 = 355;
    *((_DWORD *)v4 + 1) = *((_DWORD *)this + 8);
    *(_OWORD *)(v4 + 8) = *(_OWORD *)((char *)this + 76);
    *(_OWORD *)(v4 + 24) = *(_OWORD *)((char *)this + 92);
    *(_OWORD *)(v4 + 40) = *(_OWORD *)((char *)this + 108);
    *(_OWORD *)(v4 + 56) = *(_OWORD *)((char *)this + 124);
    *((_DWORD *)this + 4) &= ~0x20u;
    return 1;
  }
  return 0;
}
