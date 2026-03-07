unsigned __int8 __fastcall DpiFinishPnPTransitionCallback(void *a1, int a2, unsigned int a3)
{
  char v3; // bl
  struct DXGGLOBAL *v6; // rax
  struct DXGGLOBAL *Global; // rax

  v3 = 1;
  if ( a2 == 1 )
  {
    if ( a1 )
    {
      Global = DXGGLOBAL::GetGlobal();
      DXGSESSIONMGR::FinishPnPTransitionOnSession(*((DXGSESSIONMGR **)Global + 118), a1, a3);
    }
  }
  else if ( a2 == 2 )
  {
    DxgkCompletePnPTransition(a1);
  }
  else if ( !a2 && a1 )
  {
    v6 = DXGGLOBAL::GetGlobal();
    return DXGSESSIONMGR::CheckPnPTransitionForSession(*((DXGSESSIONMGR **)v6 + 118), a1, a3);
  }
  return v3;
}
