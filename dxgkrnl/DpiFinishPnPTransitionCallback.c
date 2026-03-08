/*
 * XREFs of DpiFinishPnPTransitionCallback @ 0x1C0214F40
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkCompletePnPTransition @ 0x1C0214FC4 (DxgkCompletePnPTransition.c)
 *     ?FinishPnPTransitionOnSession@DXGSESSIONMGR@@QEAAXPEAXK@Z @ 0x1C0214FF4 (-FinishPnPTransitionOnSession@DXGSESSIONMGR@@QEAAXPEAXK@Z.c)
 *     ?CheckPnPTransitionForSession@DXGSESSIONMGR@@QEAAEPEAXK@Z @ 0x1C0215120 (-CheckPnPTransitionForSession@DXGSESSIONMGR@@QEAAEPEAXK@Z.c)
 */

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
