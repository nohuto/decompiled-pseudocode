/*
 * XREFs of ?SetLuid@CDesktopTree@@AEAAJU_LUID@@@Z @ 0x1801036E8
 * Callers:
 *     ?ProcessCreate@CDesktopTree@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DESKTOPTREE_CREATE@@@Z @ 0x1801036C0 (-ProcessCreate@CDesktopTree@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DESKTOPTREE_CREATE@@@Z.c)
 *     ?Create@CDesktopTree@@KAJPEAVCComposition@@PEAVCVisual@@U_LUID@@PEAPEAV1@@Z @ 0x18020C988 (-Create@CDesktopTree@@KAJPEAVCComposition@@PEAVCVisual@@U_LUID@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CDesktopTree::SetLuid(struct _LUID *this, struct _LUID a2)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( this[591].LowPart == g_luidZero.LowPart && this[591].HighPart == g_luidZero.HighPart && a2 != g_luidZero )
  {
    this[591] = a2;
  }
  else
  {
    v2 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2147024809, 0x195u, 0LL);
  }
  return v2;
}
