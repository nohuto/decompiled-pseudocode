/*
 * XREFs of ??$EmitClearSharedLights@UtagMILCMD_VISUAL_CLEARSHAREDLIGHTS@@@CVisualMarshaler@DirectComposition@@IEAA_NW4VisualMarshalerExtendedFlag@01@W4MILCMD@@PEAPEAVCBatch@1@@Z @ 0x1C0061EFC
 * Callers:
 *     ?EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0061B40 (-EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0062BD8 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CVisualMarshaler::EmitClearSharedLights<tagMILCMD_VISUAL_CLEARSHAREDLIGHTS>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        struct DirectComposition::CBatch **a4)
{
  char *v6; // rdx
  void *v7; // [rsp+30h] [rbp+8h] BYREF

  if ( (*(_DWORD *)(a1 + 360) & 1) == 0 )
    return 1;
  v7 = 0LL;
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a4, 0xCuLL, &v7) )
  {
    v6 = (char *)v7;
    *(_DWORD *)v7 = 12;
    *(_QWORD *)(v6 + 4) = 0LL;
    *((_DWORD *)v6 + 1) = 403;
    *((_DWORD *)v6 + 2) = *(_DWORD *)(a1 + 24);
    *(_DWORD *)(a1 + 360) &= ~1u;
    return 1;
  }
  return 0;
}
