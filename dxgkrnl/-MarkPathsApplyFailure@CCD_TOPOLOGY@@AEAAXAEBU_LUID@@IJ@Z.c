/*
 * XREFs of ?MarkPathsApplyFailure@CCD_TOPOLOGY@@AEAAXAEBU_LUID@@IJ@Z @ 0x1C03B6EBC
 * Callers:
 *     ?ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C016A260 (-ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@.c)
 *     ?ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01BB60C (-ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?CheckAdapterViewSessionOwnership@CCD_TOPOLOGY@@AEAAJK@Z @ 0x1C01C3798 (-CheckAdapterViewSessionOwnership@CCD_TOPOLOGY@@AEAAJK@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CCD_TOPOLOGY::MarkPathsApplyFailure(CCD_TOPOLOGY *this, const struct _LUID *a2, int a3, int a4)
{
  __int64 v4; // r10
  unsigned __int16 i; // r11
  __int64 v7; // rcx

  v4 = *((_QWORD *)this + 8);
  for ( i = 0; i < *(_WORD *)(v4 + 20); ++i )
  {
    v7 = 296LL * i;
    if ( *(_DWORD *)(v7 + v4 + 72) == a2->LowPart
      && *(_DWORD *)(v7 + v4 + 76) == a2->HighPart
      && (a3 == -1 || *(_DWORD *)(v7 + v4 + 80) == a3) )
    {
      *(_DWORD *)(v7 + v4 + 248) = a4;
    }
    v4 = *((_QWORD *)this + 8);
  }
}
