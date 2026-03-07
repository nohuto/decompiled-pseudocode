void __fastcall VIDMM_DEVICE::GetBudgetAndVisibilityState(
        VIDMM_DEVICE *this,
        bool *a2,
        enum VIDMM_BUDGET_PRIORITY_BAND *a3)
{
  __int64 v3; // r11
  unsigned int v5; // r9d
  _QWORD *v6; // rdx
  __int64 v7; // rcx

  v3 = *((_QWORD *)this + 2);
  *a2 = 0;
  if ( v3 )
  {
    v5 = 0;
    if ( *(_DWORD *)(*(_QWORD *)this + 7016LL) )
    {
      while ( 1 )
      {
        v6 = (_QWORD *)(*(_QWORD *)(v3 + 48) + 296LL * v5);
        if ( v6[25] > v6[3] || v6[26] > v6[4] )
          break;
        if ( ++v5 >= *(_DWORD *)(*(_QWORD *)this + 7016LL) )
          goto LABEL_8;
      }
      *a2 = 1;
    }
LABEL_8:
    v7 = *(_QWORD *)(*(_QWORD *)(v3 + 40) + 32LL);
    if ( (*(_DWORD *)(v7 + 424) & 4) != 0 )
      *(_DWORD *)a3 = 0;
    else
      *(_DWORD *)a3 = 2 - ((*(_DWORD *)(v7 + 432) & 1) != 0);
  }
  else
  {
    *(_DWORD *)a3 = 2;
  }
}
