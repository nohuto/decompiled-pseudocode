/*
 * XREFs of ?DetermineViewDistance@Win81@@YA_NQEAXAEBUtagSIZE@@H1HPEAI@Z @ 0x1C031C49C
 * Callers:
 *     ?UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C031CC94 (-UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z.c)
 * Callees:
 *     ?HeuristicallyDetermineViewingDistance@Win81@@YAIAEBUtagSIZE@@H0H@Z @ 0x1C031C960 (-HeuristicallyDetermineViewingDistance@Win81@@YAIAEBUtagSIZE@@H0H@Z.c)
 *     ?OemSpecifiedViewDist@Win81@@YAIQEAX@Z @ 0x1C031CB78 (-OemSpecifiedViewDist@Win81@@YAIQEAX@Z.c)
 */

char __fastcall Win81::DetermineViewDistance(
        Win81 *this,
        void *const a2,
        const struct tagSIZE *a3,
        int a4,
        const struct tagSIZE *a5,
        unsigned int *a6)
{
  unsigned int v7; // edi
  unsigned int v9; // eax
  int v11; // [rsp+20h] [rbp-8h]

  v7 = (unsigned int)a3;
  if ( (_DWORD)a3 )
  {
    v9 = Win81::OemSpecifiedViewDist(this, a2);
    *a6 = v9;
    if ( v9 )
      return 1;
  }
  *a6 = Win81::HeuristicallyDetermineViewingDistance(
          (Win81 *)a2,
          (const struct tagSIZE *)v7,
          a4,
          (const struct tagSIZE *)(unsigned int)a5,
          v11);
  return 0;
}
