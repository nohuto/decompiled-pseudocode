/*
 * XREFs of ?IsMatchingSource@CCD_TOPOLOGY@@SA_NAEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@0@Z @ 0x1C0016BF4
 * Callers:
 *     ?ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01BB60C (-ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CCD_TOPOLOGY::IsMatchingSource(
        struct D3DKMT_PATHMODALITY_DESCRIPTOR *a1,
        struct D3DKMT_PATHMODALITY_DESCRIPTOR *a2)
{
  return *((_DWORD *)a1 + 6) == *((_DWORD *)a2 + 6)
      && *((_DWORD *)a1 + 4) == *((_DWORD *)a2 + 4)
      && *((_DWORD *)a1 + 5) == *((_DWORD *)a2 + 5);
}
