/*
 * XREFs of ?EmitConfigureInternalProperties@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0266DB4
 * Callers:
 *     ?EmitUpdateCommands@CInteractionTrackerMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0267B00 (-EmitUpdateCommands@CInteractionTrackerMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0064740 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CInteractionTrackerMarshaler::EmitConfigureInternalProperties(
        DirectComposition::CInteractionTrackerMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v3; // bl
  char *v4; // rcx
  void *v6; // [rsp+30h] [rbp+8h] BYREF

  v3 = 1;
  if ( (*((_DWORD *)this + 4) & 0x1000000) == 0 )
  {
    v6 = 0LL;
    if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x30uLL, &v6) )
    {
      v4 = (char *)v6;
      *(_DWORD *)v6 = 48;
      *(_QWORD *)(v4 + 4) = 0LL;
      *((_DWORD *)v4 + 1) = 208;
      *((_DWORD *)v4 + 2) = *((_DWORD *)this + 8);
      *(_OWORD *)(v4 + 12) = 0LL;
      *(_OWORD *)(v4 + 28) = 0LL;
      *((_DWORD *)v4 + 11) = 0;
      *(_OWORD *)(v4 + 12) = *(_OWORD *)((char *)this + 412);
      *(_OWORD *)(v4 + 28) = *(_OWORD *)((char *)this + 428);
      *((_DWORD *)v4 + 11) = *((_DWORD *)this + 111);
      *((_DWORD *)this + 4) |= 0x1000000u;
    }
    else
    {
      return 0;
    }
  }
  return v3;
}
