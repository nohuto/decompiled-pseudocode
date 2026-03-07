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
