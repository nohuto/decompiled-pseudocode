/*
 * XREFs of ?EmitUpdateCommands@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C02313B0
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0011E08 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?EmitBoundTrackerMarshalerUpdateCommands@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C02311B8 (-EmitBoundTrackerMarshalerUpdateCommands@CInteractionTrackerBindingManagerMarshaler@DirectCompos.c)
 *     ?EmitSetTrackerBindingMode@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0231258 (-EmitSetTrackerBindingMode@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@AEAA_NP.c)
 */

char __fastcall DirectComposition::CInteractionTrackerBindingManagerMarshaler::EmitUpdateCommands(
        DirectComposition::CInteractionTrackerBindingManagerMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v2; // bl
  _DWORD *v5; // rcx
  _DWORD *v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  if ( (*((_DWORD *)this + 4) & 0x20) != 0 )
  {
    v7 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, (void **)&v7) )
      return v2;
    v5 = v7;
    *v7 = 16;
    *(_QWORD *)(v5 + 1) = 0LL;
    v5[3] = 0;
    v5[1] = 269;
    v5[2] = *((_DWORD *)this + 8);
    v5[3] = *((_DWORD *)this + 16);
    *((_DWORD *)this + 4) &= ~0x20u;
  }
  if ( DirectComposition::CInteractionTrackerBindingManagerMarshaler::EmitBoundTrackerMarshalerUpdateCommands(
         this,
         (struct DirectComposition::CBatch **)a2)
    && DirectComposition::CInteractionTrackerBindingManagerMarshaler::EmitSetTrackerBindingMode(this, a2) )
  {
    return 1;
  }
  return v2;
}
