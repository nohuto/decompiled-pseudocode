/*
 * XREFs of ?ProcessCreate@CDesktopTree@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DESKTOPTREE_CREATE@@@Z @ 0x1801036C0
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetLuid@CDesktopTree@@AEAAJU_LUID@@@Z @ 0x1801036E8 (-SetLuid@CDesktopTree@@AEAAJU_LUID@@@Z.c)
 */

__int64 __fastcall CDesktopTree::ProcessCreate(CDesktopTree *this, struct CResourceTable *a2, struct _LUID *a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rcx

  v3 = 0;
  if ( (int)CDesktopTree::SetLuid(this, a3[1]) < 0 )
  {
    v3 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, -2003303421, 0x47u, 0LL);
  }
  return v3;
}
