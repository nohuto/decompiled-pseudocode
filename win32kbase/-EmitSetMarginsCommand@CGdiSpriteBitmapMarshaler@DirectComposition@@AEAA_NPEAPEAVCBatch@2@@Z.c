/*
 * XREFs of ?EmitSetMarginsCommand@CGdiSpriteBitmapMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0256BF8
 * Callers:
 *     ?EmitUpdateCommands@CGdiSpriteBitmapMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0259F10 (-EmitUpdateCommands@CGdiSpriteBitmapMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0064740 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CGdiSpriteBitmapMarshaler::EmitSetMarginsCommand(
        DirectComposition::CGdiSpriteBitmapMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char *v3; // rcx
  void *v5; // [rsp+30h] [rbp+8h] BYREF

  if ( (*((_DWORD *)this + 4) & 0x200) == 0 )
    return 1;
  v5 = 0LL;
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x1CuLL, &v5) )
  {
    v3 = (char *)v5;
    *(_DWORD *)v5 = 28;
    *(_OWORD *)(v3 + 4) = 0LL;
    *(_QWORD *)(v3 + 20) = 0LL;
    *((_DWORD *)v3 + 1) = 511;
    *((_DWORD *)v3 + 2) = *((_DWORD *)this + 8);
    *(_OWORD *)(v3 + 12) = *((_OWORD *)this + 6);
    *((_DWORD *)this + 4) &= ~0x200u;
    return 1;
  }
  return 0;
}
