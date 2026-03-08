/*
 * XREFs of ?EmitUpdateCommands@CHostVisualMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00BD4B0
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0063B90 (-EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0064740 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CHostVisualMarshaler::EmitUpdateCommands(
        DirectComposition::CHostVisualMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char updated; // bl
  char *v5; // rcx
  void *v7; // [rsp+40h] [rbp+18h] BYREF

  updated = DirectComposition::CVisualMarshaler::EmitUpdateCommands(this, a2);
  if ( updated && (*((_DWORD *)this + 96) & 1) != 0 )
  {
    v7 = 0LL;
    if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0xCuLL, &v7) )
    {
      v5 = (char *)v7;
      *(_DWORD *)v7 = 12;
      *(_QWORD *)(v5 + 4) = 0LL;
      *((_DWORD *)v5 + 1) = 406;
      *((_DWORD *)v5 + 2) = *((_DWORD *)this + 8);
      *((_DWORD *)this + 96) &= ~1u;
    }
    else
    {
      return 0;
    }
  }
  return updated;
}
