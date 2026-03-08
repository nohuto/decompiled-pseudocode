/*
 * XREFs of ?EmitSetMaxPosition@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C026744C
 * Callers:
 *     ?EmitUpdateCommands@CInteractionTrackerMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0267B00 (-EmitUpdateCommands@CInteractionTrackerMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0064740 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CInteractionTrackerMarshaler::EmitSetMaxPosition(
        DirectComposition::CInteractionTrackerMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v3; // bl
  char *v4; // rcx
  void *v6; // [rsp+30h] [rbp+8h] BYREF

  v3 = 1;
  if ( (*((_DWORD *)this + 4) & 0x4000) == 0 )
  {
    v6 = 0LL;
    if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x14uLL, &v6) )
    {
      v4 = (char *)v6;
      *(_DWORD *)v6 = 20;
      *(_OWORD *)(v4 + 4) = 0LL;
      *((_DWORD *)v4 + 1) = 210;
      *((_DWORD *)v4 + 2) = *((_DWORD *)this + 8);
      *((_DWORD *)v4 + 3) = *((_DWORD *)this + 28);
      *((_DWORD *)v4 + 4) = *((_DWORD *)this + 29);
      *((_DWORD *)this + 4) |= 0x4000u;
    }
    else
    {
      return 0;
    }
  }
  return v3;
}
