/*
 * XREFs of ?GetProcessBudgetBandAndVisibility@VIDMM_GLOBAL@@QEAAXPEAVDXGPROCESS@@PEAW4VIDMM_BUDGET_PRIORITY_BAND@@PEAW4VIDMM_BUDGET_VISIBILITY_STATE@@@Z @ 0x1C00AD050
 * Callers:
 *     ?OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1C00ABCF0 (-OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 *     ?QueryVideoMemoryInfo@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@KKW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEA_K22222@Z @ 0x1C00EF6E8 (-QueryVideoMemoryInfo@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@KKW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PE.c)
 *     ?SetupBudgetState@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@K@Z @ 0x1C0101448 (-SetupBudgetState@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@K@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_GLOBAL::GetProcessBudgetBandAndVisibility(
        VIDMM_GLOBAL *this,
        struct DXGPROCESS *a2,
        enum VIDMM_BUDGET_PRIORITY_BAND *a3,
        enum VIDMM_BUDGET_VISIBILITY_STATE *a4)
{
  int v4; // eax

  if ( (*((_DWORD *)a2 + 106) & 4) != 0 )
  {
    *(_DWORD *)a3 = 0;
  }
  else
  {
    v4 = *((_DWORD *)a2 + 108);
    if ( (v4 & 1) == 0 )
    {
      *(_DWORD *)a3 = 2;
      *(_DWORD *)a4 = ((v4 & 2) != 0) + 1;
      return;
    }
    *(_DWORD *)a3 = 1;
  }
  *(_DWORD *)a4 = 0;
}
